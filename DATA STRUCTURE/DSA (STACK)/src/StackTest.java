import java.util.Scanner;

public class StackTest {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter stack size: ");
        int size = sc.nextInt();

        Stack obj = new Stack(size);
        int choice;

        do {
            System.out.println("\nSTACK MENU");
            System.out.println("1.Push");
            System.out.println("2.Pop");
            System.out.println("3.Peek");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            
            switch (choice) {
            
                case 1:
                    System.out.print("Enter element to push: ");
                    int ele = sc.nextInt();
                    obj.push(ele);
                    break;

                case 2:
                    System.out.println("Popped element: " + obj.pop());
                    break;

                case 3:
                    System.out.println("Topmost element: " + obj.peek());
                    break;

                default:
                    System.out.println("Invalid choice!");
                    
            }

        } while (choice != 3);
    }
}
