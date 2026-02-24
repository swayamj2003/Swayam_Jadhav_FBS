import java.util.Date;
import java.util.Scanner;

//TRANSACTION MODEL
class Transaction {
    String type;
    double amount;
    Date txnDate;

    Transaction(String type, double amount, Date txnDate) {
		super();
		this.type = type;
		this.amount = amount;
		this.txnDate = txnDate;
	}
    
    String getType() {
    	return type;
    }
    
    double getAmount() {
    	return amount;
    }
    
    Date gettxnDate() {
    	return txnDate;
    }

	void setType(String type) {
		this.type = type;
	}
	
	void setAmount(double amount) {
		this.amount = amount;
	}
	
	void settxnDate(Date txnDate) {
		this.txnDate = txnDate;
	}
}//Transaction class end here

//ACCOUNT MODEL
abstract class Account {

    int accNo;
    String customerName;
    double balance;
    String status;
    String accType;
    Date accOpenDate;
    
    Transaction[] transactions = new Transaction[20];
    int txnCount = 0;

    Account(int accNo, String customerName, double balance, Date accOpenDate) {
        this.accNo = accNo;
        this.customerName = customerName;
        this.balance = balance;
        this.status = "ACTIVE";
        this.accType = "accType";
        this.accOpenDate = accOpenDate;
    }
    
    int getAccountNumber() {
    	return accNo;
    }
    String getCustomerName() {
    	return customerName;
    }
    double getBalance() {
    	return balance;
    }
    String getStatus() {
    	return status;
    }
    
    String getAccType() {
		return accType;
	}
    
	void setAccType(String accType) {
		this.accType = accType;
	}

	void setStatus(String status) { 
		this.status = status;
	}
	
    Date getAccOpenDate() {
		return accOpenDate;
	}

	void setAccOpenDate(Date accOpenDate) {
		this.accOpenDate = accOpenDate;
	}

	Transaction[] getTransactions() {
    	return transactions;
    }
    
    int getTxnCount() {
		return txnCount;
	}

	void setTxnCount(int txnCount) {
		this.txnCount = txnCount;
	}

	void deposit(double amt, Date txnDate) {
        if (status.equals("ACTIVE")) 	
        {
            balance = balance + amt;
            transactions[txnCount] = new Transaction("Deposit", amt, txnDate);
            txnCount++;
        }
    }
    
    abstract boolean withdraw(double amt, Date txnDate);
    abstract double calculateInterest();
}//Accounts class end here

// SAVINGS ACCOUNT
class SavingsAccount extends Account {
	
    double minBalance = 10000;
    double interestRate = 0.04;
    
    SavingsAccount(int accNo, String name, double bal, Date txnDate) {
        super(accNo, name, bal, txnDate);
        setAccType("Savings Account");
    }
    
    double getMinBalance() {
		return minBalance;
	}
    
	void setMinBalance(double minBalance) {
		this.minBalance = minBalance;
	}
	
	boolean withdraw(double amount, Date txnDate) {
        if (balance - amount >= minBalance) {
            balance = balance - amount;
            transactions[txnCount] = new Transaction("Credited", amount, txnDate);
            txnCount++;
            return true;
        }
        return false;
    }
	
	double calculateInterest() {
	    double interest = balance * interestRate;
	    balance = balance + interest;
	    return interest;
	}
}//SavingAccount class end here

//SALARY ACCOUNT
class SalaryAccount extends Account {

    double interestRate = 0.03;
    
    SalaryAccount(int accNo, String name, double bal, Date txnDate) {
        super(accNo, name, bal, txnDate);
        setAccType("Salary Account");
    }
    
	boolean withdraw(double amount, Date txnDate) {
		checkFreeze(txnDate);
		
        if (status.equals("ACTIVE")) {
            balance = balance - amount;
            transactions[txnCount] = new Transaction("Credited", amount, txnDate);
            txnCount++;
            return true;
        }
        return false;
    }

    void checkFreeze(Date currentDate) {

        Date lastTxnDate = accOpenDate;

        if (txnCount > 0) {
            lastTxnDate = transactions[txnCount - 1].gettxnDate();
        }

        long diff = currentDate.getTime() - lastTxnDate.getTime();
        long months = diff / (1000L * 60 * 60 * 24 * 30);

        if (months >= 2) {
            status = "FROZEN";
        }
    }
    
    void deposit(double amt, Date txnDate) {
    	checkFreeze(txnDate);
        if (status.equals("ACTIVE")) 	
        {
            balance = balance + amt;
            transactions[txnCount] = new Transaction("Debited", amt, txnDate);
            txnCount++;
        }
    }
    
    double calculateInterest() {
        double interest = balance * interestRate;
        balance = balance + interest;
        return interest;
    }
}//SalaryAccount class ends here

//CURRENT ACCOUNT
class CurrentAccount extends Account {

    double overdraftLimit = 20000;

    CurrentAccount(int accNo, String name, double balance, Date txnDate) {
        super(accNo, name, balance, txnDate);
        setAccType("Current Account");
    }
    
    double getOverdraftLimit() {
		return overdraftLimit;
	}

	void setOverdraftLimit(double overdraftLimit) {
		this.overdraftLimit = overdraftLimit;
	}

	boolean withdraw(double amt, Date txnDate) {
        if (balance + overdraftLimit >= amt) {
            balance = balance - amt;
            transactions[txnCount] = new Transaction("Credited", amt, txnDate);
            txnCount++;
            return true;
        }
        return false;
    }

    double calculateInterest() {
        return 0;
    }
}//CurrentAccount ends here

//LOAN ACCOUNT
class LoanAccount extends Account {

    double loanAmount;    
    double interestRate = 0.06;

    LoanAccount(int accNo, String name, double loanAmount, Date txnDate) {
        super(accNo, name, -loanAmount, txnDate); // NEGATIVE BALANCE
        this.loanAmount = loanAmount;
        setAccType("Loan Account");
    }
    
    double getLoanAmount() {
		return loanAmount;
	}

	void setLoanAmount(double loanAmount) {
		this.loanAmount = loanAmount;
	}

	double getInterestRate() {
		return interestRate;
	}

	void setInterestRate(double interestRate) {
		this.interestRate = interestRate;
	}

	boolean withdraw(double amt, Date txnDate) {
        return false;
    }

    void deposit(double amt, Date txnDate) {
        balance = balance + amt;
        transactions[txnCount] = new Transaction("Loan Repayment", amt, txnDate);
        txnCount++;
        	if (balance >= 0) {
        			balance = 0;
        			status = "CLOSED";
        	}
    }

    double calculateInterest() {
        double interest = Math.abs(balance) * interestRate;
        balance = balance - interest;   //Loan increases due to interest
        return interest;
    }  
}//LoanAccount ends here

//BANK DAO
class BankDAO {

    String bankName;
    Account[] accounts = new Account[20];
    int count = 0;
    
    int savingsCount = 0;
    int salaryCount = 0;
    int currentCount = 0;
    int loanCount = 0;

    BankDAO(String bankName) {
        this.bankName = bankName;
    }

    void createAccount(Account acc) {
        accounts[count++] = acc;

        if (acc instanceof SavingsAccount) savingsCount++;
        else if (acc instanceof SalaryAccount) salaryCount++;
        else if (acc instanceof CurrentAccount) currentCount++;
        else if (acc instanceof LoanAccount) loanCount++;
    }

    //GETTERS FOR COUNTS
    int getSavingsCount() {
        return savingsCount;
    }

    int getSalaryCount() {
        return salaryCount;
    }

    int getCurrentCount() {
        return currentCount;
    }

    int getLoanCount() {
        return loanCount;
    }

    Account searchAccount(int accNo) {
        for (int i = 0; i < count; i++)
            if (accounts[i].getAccountNumber() == accNo)
                return accounts[i];
        return null;
    }

    Account[] getAllAccounts() {
        return accounts;
    }

    Transaction[] endOfDayReport() {
        Transaction[] report = new Transaction[100];
        int idx = 0;

        for (int i = 0; i < count; i++) {
            Transaction[] txns = accounts[i].getTransactions();
            for (Transaction t : txns)
                if (t != null)
                    report[idx++] = t;
        }
        return report;
    }

    void closeAccount(int accNo) {
        for (int i = 0; i < count; i++) {
            if (accounts[i].getAccountNumber() == accNo) 
            {
                accounts[i].setStatus("CLOSED");
                accounts[i] = accounts[count - 1];
                accounts[--count] = null;
                return;
            }
        }
    }

    void deposit(int accNo, double amt, Date txnDate) {
        Account acc = searchAccount(accNo);
        if (acc != null) acc.deposit(amt, txnDate);
    }
    
    double getTotalDepositAmount() {
        double total = 0;

        for (int i = 0; i < count; i++) {
            Transaction[] txns = accounts[i].getTransactions();
            for (Transaction t : txns) {
                if (t != null && t.getType().equals("Debited")) {
                    total += t.getAmount();
                }
            }
        }
        return total;
    }
    
    boolean withdraw(int accNo, double amt, Date txnDate) {
        Account acc = searchAccount(accNo);
        return acc != null && acc.withdraw(amt, txnDate);
    }
    
    double getTotalWithdrawAmount() {
        double total = 0;

        for (int i = 0; i < count; i++) {
            Transaction[] txns = accounts[i].getTransactions();
            for (Transaction t : txns) {
                if (t != null && t.getType().equals("Credited")) {
                    total += t.getAmount();
                }
            }
        }
        return total;
    }

    void applyInterest() {
        for (int i = 0; i < count; i++) {
            Account acc = accounts[i];
            if (acc != null && acc.getStatus().equals("ACTIVE")) {
                acc.calculateInterest();   //Polymorphism
            }
        }
    }
    
    Account getAccountDetails(int accNo) {
        return searchAccount(accNo);
    }
    
}//BankDOA ends here

//BANK CONTROLLER
class BankController {

    BankDAO dao;

    BankController(BankDAO dao) {
        this.dao = dao;
    }
    
    int getSavingsCount() {
        return dao.getSavingsCount();
    }

    int getSalaryCount() {
        return dao.getSalaryCount();
    }

    int getCurrentCount() {
        return dao.getCurrentCount();
    }

    int getLoanCount() {
        return dao.getLoanCount();
    }
  
    void createAccount(int type, int accNo, String name, double amt, Date accOpenDate) {
        if (type == 1) dao.createAccount(new SavingsAccount(accNo, name, amt, accOpenDate));
        if (type == 2) dao.createAccount(new SalaryAccount(accNo, name, amt, accOpenDate));
        if (type == 3) dao.createAccount(new CurrentAccount(accNo, name, amt, accOpenDate));
        if (type == 4) dao.createAccount(new LoanAccount(accNo, name, amt, accOpenDate));
    }

    void deposit(int accNo, double amt, Date txnDate) {
        dao.deposit(accNo, amt, txnDate);
    }

    double getTotalDepositAmount() {
        return dao.getTotalDepositAmount();
    }
    
    boolean withdraw(int accNo, double amt, Date txnDate) {
        return dao.withdraw(accNo, amt, txnDate);
    }
    
    double getTotalWithdrawAmount() {
        return dao.getTotalWithdrawAmount();
    }
    
    Account searchAccount(int accNo) {
        return dao.searchAccount(accNo);
    }

    void closeAccount(int accNo) {
        dao.closeAccount(accNo);
    }

    Account[] getAllAccounts() {
        return dao.getAllAccounts();
    }

    Transaction[] endOfDayReport() {
        return dao.endOfDayReport();
    }
    
    void applyInterest() {
    	dao.applyInterest();
    }
    
    Account getAccountDetails(int accNo) {
        return dao.getAccountDetails(accNo);
    }
    
}//BankController ends here

//BANK VIEW
class BankView {

    Scanner sc = new Scanner(System.in);
    BankController controller;

    BankView(BankController controller) {
        this.controller = controller;
    }
    
    @SuppressWarnings("deprecation")
    Date inputDate() {
        System.out.println("Enter Date in Day Month Year: ");
        int d = sc.nextInt();
        int m = sc.nextInt() - 1;
        int y = sc.nextInt() - 1900;
        
        System.out.println("Enter Time in Hour Minute Second: ");
        int h = sc.nextInt();
        int min = sc.nextInt();
        int s = sc.nextInt();
        return new Date(y, m, d, h, min, s);
    }

    void menu() {
        while (true) {
            System.out.println("\n1.Create Account");
            System.out.println("2.Deposit");
            System.out.println("3.Withdraw");
            System.out.println("4.Search Account");
            System.out.println("5.Show All Accounts");
            System.out.println("6.Close Account");
            System.out.println("7.End Of Day Report");
            System.out.println("8.Apply Interest");
            System.out.println("9 Account Details");
            System.out.println("10.Exit");

            int ch = sc.nextInt();

            
			switch (ch) {
                case 1:
                    System.out.println("1.Savings 2.Salary 3.Current 4.Loan");
                    int type = sc.nextInt();
                    System.out.println("Account No:");
                    int accNo = sc.nextInt();
                    System.out.println("Customer Name:");
                    String name = sc.next();
                    System.out.println("Amount:");
                    double bal = sc.nextDouble();
                    Date openDate = inputDate();
                    controller.createAccount(type, accNo, name, bal, openDate);
                    System.out.println("Account Created");
                    break;

                case 2:
                    System.out.println("Enter Account No: ");
                    int dacc = sc.nextInt();

                    System.out.println("Enter Amount: ");
                    double damt = sc.nextDouble();

                    Date tdate = inputDate();

                    controller.deposit(dacc, damt, tdate);

                    Account acc = controller.searchAccount(dacc);

                  

                    if (acc instanceof LoanAccount && acc.getStatus().equals("CLOSED")) {
                        System.out.println("\n Congratulations! Loan fully repaid.");
                        System.out.println("Loan Account " + acc.getAccountNumber() + " is now CLOSED.\n");
                    }
                    else
                    if (acc instanceof SalaryAccount && acc.getStatus().equals("FROZEN")) {
                    	System.out.println("Salary Account " + acc.getAccountNumber() + " is now FROZEN.\n");
                    	System.out.println("Transactions not occurse last 2 months!");
                       
                    }
                    else {
                    	  System.out.println("Deposit Successful");
                    }
                    break;
                  
                case 3:
                	System.out.println("Enter Account No: ");
                    int wacc = sc.nextInt();
                    System.out.println("Enter Amount: ");
                    double wamt = sc.nextDouble();
                    Date wdate = inputDate();
                    if (controller.withdraw(wacc, wamt, wdate))
                        System.out.println("Withdraw Successful");
                    else
                        System.out.println("Withdraw Failed (Account Frozen or Invalid)");
                    
                    break;
                 
                case 4:
                	System.out.println("Enter Account No");
                    Account acc1 = controller.searchAccount(sc.nextInt());
                    if (acc1 != null)
                        System.out.println("Account Type: " +acc1.getAccType()+"  Account No: "+acc1.getAccountNumber() 
                        + "  Customer Name:" +acc1.getCustomerName() + "  Balance:" + acc1.getBalance());
                    else
                        System.out.println("Account Not Found");
                    	System.out.println("\n Enter Correct Account Number...");
                    break;

                case 5:
                    for (Account a : controller.getAllAccounts())
                        if (a != null)
                            System.out.println("Account Type: " +a.getAccType()+ "  Account No: "+a.getAccountNumber()  
                            +"  Customer Name: " +a.getCustomerName() + "  Balance: " + a.getBalance() +
                            		"  Status: "+a.getStatus()+ "  Transaction count: "+a.getTxnCount());
                    break;

                case 6:
                	System.out.println("Enter Account No");
                    controller.closeAccount(sc.nextInt());
                    System.out.println("Your Account Gets Closed...");
                    break;

                case 7:
                	Transaction[] report = controller.endOfDayReport();

                	System.out.println("------- FIRSTBIT BANK --------");
                    System.out.println("\n------ ACCOUNT COUNTS ------");
                    System.out.println("Savings Accounts : " + controller.getSavingsCount());
                    System.out.println("Salary Accounts  : " + controller.getSalaryCount());
                    System.out.println("Current Accounts : " + controller.getCurrentCount());
                    System.out.println("Loan Accounts    : " + controller.getLoanCount());
                    System.out.println("------------------------------");
                    
                    System.out.println("\n---- TRANSACTION TOTALS ----");
                    System.out.println("Total Deposit Amount  : " + controller.getTotalDepositAmount());
                    System.out.println("Total Withdraw Amount : " + controller.getTotalWithdrawAmount());
                    System.out.println("------------------------------");

                    for (Transaction t : report) {
                        if (t != null)
                            System.out.println(t.getType() + " | " + t.getAmount() + " | " + t.gettxnDate());
                    }   
                    break;
                    
                case 8:
                    for (Account a : controller.getAllAccounts()) {
                        if (a != null) {
                            double interest = a.calculateInterest();
                            System.out.println(a.getAccType() + " | AccNo: " + a.getAccountNumber() +" | Interest: " + interest +
                                               " | New Balance: " + a.getBalance());
                        }
                    }
                    System.out.println("Interest Applied Successfully");
                    break;
                    
                case 9:
                	System.out.println("Enter Account Number:");
                    int no = sc.nextInt();

                    Account ac = controller.getAccountDetails(no);

                    if (ac == null) {
                        System.out.println("Account Not Found");
                        return;
                    }

                    System.out.println("------------------------ FIRSTBIT BANK ------------------------");
                    System.out.println("\n-------------------------------------------------------------");
                    System.out.println("ACCOUNT DETAILS");
                    System.out.println("---------------------------------------------------------------");
                    System.out.printf("%-18s : %d\n", "Account No", ac.getAccountNumber());
                    System.out.printf("%-18s : %s\n", "Account Type", ac.getAccType());
                    System.out.printf("%-18s : %s\n", "Customer Name", ac.getCustomerName());
                    System.out.printf("%-18s : %.2f\n", "Balance", ac.getBalance());
                    System.out.printf("%-18s : %s\n", "Status", ac.getStatus());
                    System.out.printf("%-18s : %s\n", "Open Date", ac.getAccOpenDate());
                    System.out.println("---------------------------------------------------------------");

                    System.out.println("\n-------------------- TRANSACTION DETAILS --------------------");
                    System.out.printf("| %-3s | %-11s | %-10s | %-25s |\n", "No", "Type", "Amount", "Date & Time");
                    System.out.println("---------------------------------------------------------------");

                    Transaction[] txns = ac.getTransactions();
                    int sr = 1;

                    for (Transaction t : txns) {
                        if (t != null) {
                            System.out.printf("| %-3d | %-11s | %-10.2f | %-25s |\n",
                            		sr++, t.getType(), t.getAmount(), t.gettxnDate());
                        }
                    }

                    System.out.println("-------------------------------------------------------------");
                
                    break;
                    
                case 10:
                	System.out.println("Thank You....");
                    return;
                
            }
        }
    }
}//BankView ends here

//TEST CLASS
class Test2 {
    public static void main(String[] args) {
        BankDAO dao = new BankDAO("Firstbit Bank");
        BankController controller = new BankController(dao);
        BankView view = new BankView(controller);
        view.menu();
    }
}