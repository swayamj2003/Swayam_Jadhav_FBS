import java.util.Scanner;

class SwapArrayMinToMax
{
	int size;
	int x;
	static boolean found;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of arr ");
        int n1 = sc.nextInt();
        int arr[] = new int[n1];

        System.out.println("Enter elements of arr1:");
        for(int i = 0; i < n1 ; i++)
        {
            arr[i] = sc.nextInt();
        }
        
        System.out.println("Enter element you want to search");
        int x = sc.nextInt();
        
        for(int i = 0; i < arr.length; i++)
        {
        	if(arr[i] == x)
        	{
        		found = true;
        		break;
        	}
        }
        
        if(found == true)
        {
        	System.out.println("Element Found");
        }
        else
        {
        	System.out.println("Element Not Found");
        }

    }
}