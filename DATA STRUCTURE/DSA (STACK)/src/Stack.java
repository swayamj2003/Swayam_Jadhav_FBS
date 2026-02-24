
public class Stack {
	
	int[] arr;
	int top;
	
	Stack(int size)
	{
		arr= new int[size];
		top = -1;
	}
	
	boolean isFull()
	{
		if(top == arr.length - 1)
			return true;
		else
			return false;
	}
	
	boolean isEmpty()
	{
		if(top == -1)
			return true;
		else
			return false;
	}
	
	void push(int ele)
	{
		//if(isFull() == false)
		boolean result = isFull();
			if(result == false)
			{
				top++;
				arr[top] = ele;
			}
			else
			{
				System.out.println("Stack Overflow");
			}
	}
	
	int pop()
	{
		if(isEmpty() == false)
		{
			int ele = arr[top];
			top--;
			return ele;
		}
		else
		{
			System.out.println("Stack Overflow");
			return -1;
		}
	}
	
	int peek()
	{
		if(isEmpty() == false)
		{
			return arr[top];
		}
		else
		{
			System.out.println("Stack Overflow");
			return -1;
		}
	}
}