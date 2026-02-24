package Using_LS;

class Node{
	int data;
	Node next;
	
	Node(int data) {
		super();
		this.data = data;
		this.next = null;
	}
}

public class Queue {
	Node head;
	Node tail;
		
	Queue() {
		this.head = null;
		this.tail = null;
	}
	
	void push(int data) //insert data at tail 
	{
		Node newNode = new Node(data);

	    if (head == null) {
	        head = tail = newNode;
	    } else {
	        tail.next = newNode;
	        tail = newNode;
	    }
	}
	
	void pop() // Remove from head (Dequeue)
	{
		if (head == null){
			return;
		}
		
	    head = head.next;
	    
	    if (head == null)
	        tail = null;
	}
	
	void front() {
		if(isempty()) {
			System.out.println("Queue is empty..");
			return;
		}
		
		System.out.println("Front ele: " +head.data);
	}
	
	boolean isempty() {
		return head == null;
	}
	
	void display() {
		
		if (isempty()) {
	        System.out.println("Queue is empty..");
	        return;
	    }
		
		Node temp = head;
		
		while (temp != null) {
	        System.out.print(" " +temp.data);
	        temp = temp.next;
	    }
		System.out.println();
	}
	
	public static void main(String[] args) {
		Queue q1 = new Queue();
		
		q1.push(10);
		q1.push(20);
		q1.push(30);
		q1.push(40);
		
		q1.display();
		
		q1.front();
		q1.pop();
		
		q1.display();
	}
}
