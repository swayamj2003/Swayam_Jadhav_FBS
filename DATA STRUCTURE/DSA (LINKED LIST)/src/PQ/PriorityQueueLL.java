package PQ;

public class PriorityQueueLL {
	
	class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }
	
	Node head = null;
	
	public void insert(int value) {

	        Node newNode = new Node(value);

	        if (head == null || value < head.data) {
	            newNode.next = head;
	            head = newNode;
	            return;
	        }

	        Node temp = head;

	        while (temp.next != null && temp.next.data < value) {
	            temp = temp.next;
	        }

	        newNode.next = temp.next;
	        temp.next = newNode;
	    }
	 
	public void delete() {

	        if (head == null) {
	            System.out.println("Priority Queue is Empty");
	            return;
	        }

	        System.out.println("Deleted element: " + head.data);
	        head = head.next;
	    }
	 
	public void display() {

	        if (head == null) {
	            System.out.println("Priority Queue is Empty");
	            return;
	        }

	        Node temp = head;

	        System.out.print("Priority Queue: ");
	        while (temp != null) {
	            System.out.print(temp.data + " -> ");
	            temp = temp.next;
	        }
	        System.out.println("null");
	    }
}
