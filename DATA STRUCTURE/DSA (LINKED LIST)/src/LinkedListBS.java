import java.util.LinkedList;

public class LinkedListBS {
	class Node{
		int data;
		Node start;

		int getData() {
			return data;
		}
		void setData(int data) {
			this.data = data;
		}
		Node getStart() {
			return start;
		}
		void setStart(Node start) {
			this.start = start;
		}	
		
		protected Node(int data) {
			super();
			this.data = data;
			this.start = null;
		}		
	}
	
	Node start = null;
	Node end = null;
	
	void add(int value) {
		Node newNode = new Node(value);
		if (start == null) {
            start = end = newNode;
        } else {
            end.start = newNode;
            end = newNode;
        }		
	}
	
	void display() {
        Node temp = start;
        
        while (temp != null) {
            System.out.print(temp.data + "  ");
            temp = temp.start;
        }
    }
	
	void bubbleSort() {
		if(start == null) {
			System.out.println("No nodes...!");
		}
		boolean swap;
        do {
            swap = false;
            Node curr = start;
            while (curr.start != null) {
                if (curr.data > curr.start.data) {
                    int temp = curr.data;
                    curr.data = curr.start.data;
                    curr.start.data = temp;
                    swap = true;
                }
                curr = curr.start;
            }
        } while (swap);
	}

	public static void main(String[] args) {
		LinkedList<Integer>lbs = new LinkedList<Integer>();
		lbs.add(30);
		lbs.add(20);
		lbs.add(40);
		lbs.add(10);
		lbs.add(50);
		
		//System.out.println(lbs);
		
		for(Integer i : lbs) {
			System.out.println(i);
		}
	}
}
