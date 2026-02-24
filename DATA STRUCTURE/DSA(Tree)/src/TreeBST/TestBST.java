package TreeBST;

import java.util.Scanner;

public class TestBST {
	
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BST b1 = new BST();

        int choice, ele;

        do {
            System.out.println("\n========== BST MENU ==========");
            System.out.println("1. Insert the Element");
            System.out.println("2. Inorder Traversal");
            System.out.println("3. Preorder Traversal");
            System.out.println("4. Postorder Traversal");
            System.out.println("5. Delete Element");
            System.out.println("6. Exit");
            System.out.print("Enter Your Choice: ");

            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter Element: ");
                    ele = sc.nextInt();
                    b1.insert(ele);
                    break;

                case 2:
                    System.out.println("Inorder Traversal:");
                    b1.display_In();
                    break;

                case 3:
                    System.out.println("Preorder Traversal:");
                    b1.display_Pre();
                    break;

                case 4:
                    System.out.println("Postorder Traversal:");
                    b1.display_Post();
                    break;
                    
                    
                case 5:
                	System.out.println("Enter Element Do you Want to Delete:");
                	ele = sc.nextInt();
                	b1.deleteNode(ele);
                	break;
                	

                case 6:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid Choice!");
            }

        } while (choice != 6);

        sc.close();
    }
}
