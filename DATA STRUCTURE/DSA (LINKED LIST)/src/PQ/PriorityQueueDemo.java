package PQ;

import java.util.Scanner;

public class PriorityQueueDemo {
	
	 public static void main(String[] args) {

	        Scanner sc = new Scanner(System.in);
	        PriorityQueueLL pq = new PriorityQueueLL();

	        int choice;

	        do {
	            System.out.println("\n===== PRIORITY QUEUE MENU =====");
	            System.out.println("1. Insert");
	            System.out.println("2. Delete");
	            System.out.println("3. Display");
	            System.out.println("4. Exit");
	            System.out.print("Enter your choice: ");

	            choice = sc.nextInt();

	            switch (choice) {

	                case 1:
	                    System.out.print("Enter value to insert: ");
	                    int value = sc.nextInt();
	                    pq.insert(value);
	                    break;

	                case 2:
	                    pq.delete();
	                    break;

	                case 3:
	                    pq.display();
	                    break;

	                case 4:
	                    System.out.println("Exiting Program...");
	                    break;

	                default:
	                    System.out.println("Invalid Choice!");
	            }

	        } while (choice != 4);

	        sc.close();
	    }
}
