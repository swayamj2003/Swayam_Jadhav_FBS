package Sorted_LS;

import java.util.Scanner;

public class Test_SLS {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        SortedLinkedList list = new SortedLinkedList();

        int choice;

        do {
            System.out.println("\n1.Insert");
            System.out.println("2.Delete");
            System.out.println("3.Update");
            System.out.println("4.Display");
            System.out.println("5.Exit");
            System.out.print("Enter choice: ");

            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter value: ");
                    int val = sc.nextInt();
                    list.insert(val);
                    break;

                case 2:
                    System.out.print("Enter value: ");
                    int del = sc.nextInt();
                    list.delete(del);
                    break;

                case 3:
                    System.out.print("Enter old value: ");
                    int oldVal = sc.nextInt();
                    System.out.print("Enter new value: ");
                    int newVal = sc.nextInt();
                    list.update(oldVal, newVal);
                    break;

                case 4:
                    list.display();
                    break;

                case 5:
                    System.out.println("Thank You!");
                    break;

                default:
                    System.out.println("Invalid Choice");
            }

        } while (choice != 5);

        sc.close();
    }
}
