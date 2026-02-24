package LS;

import java.util.Scanner;

public class MainApp {

    public static void main(String[] args) {

        MyLinkedList myLL = new MyLinkedList();
        Scanner sc = new Scanner(System.in);
        int choice;

        do {
            System.out.println("\n===== LINKED LIST MENU =====");
            System.out.println("1. Insert at Beginning");
            System.out.println("2. Insert at End");
            System.out.println("3. Insert at Position");
            System.out.println("4. Delete");
            System.out.println("5. Display");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");

            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter number: ");
                    myLL.insertAtBeg(sc.nextInt());
                    break;

                case 2:
                    System.out.print("Enter number: ");
                    myLL.insertAtEnd(sc.nextInt());
                    break;

                case 3:
                    System.out.print("Enter number: ");
                    int ele = sc.nextInt();
                    System.out.print("Enter position: ");
                    int pos = sc.nextInt();
                    myLL.insertAtPos(ele, pos);
                    break;

                case 4:
                    System.out.print("Enter number to delete: ");
                    myLL.delete(sc.nextInt());
                    break;

                case 5:
                    myLL.displayAll();
                    break;

                case 6:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }

        } while (choice != 6);

        sc.close();
    }
}
