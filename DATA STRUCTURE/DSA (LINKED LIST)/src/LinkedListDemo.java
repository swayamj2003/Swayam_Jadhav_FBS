import java.util.LinkedList;

class LinkedListDemo{

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    Node start = null;
    Node end = null;

    void add(int pos, int value) {

        Node newNode = new Node(value);

        if (start == null) {
            start = end = newNode;
            return;
        }

        if (pos == 1) {
            newNode.next = start;
            start = newNode;
            return;
        }

        Node temp = start;
        int count = 1;

        while (temp.next != null && count < pos - 1) {
            temp = temp.next;
            count++;
        }

        newNode.next = temp.next;
        temp.next = newNode;

        if (newNode.next == null) {
            end = newNode;
        }
    }

    void display() {

        Node temp = start;

        while (temp != null) {
            temp = temp.next;
        }

        System.out.println("null");
    }

    public static void main(String[] args) {

    	LinkedList <Integer> LSD = new LinkedList<>();

    	LSD.add(10);
    	LSD.add(90);
        LSD.add(1, 20);
        LSD.add(2, 30);
        LSD.add(3, 40);
        
        for (Integer i : LSD) {
            System.out.print(i + " ->");
        }
        System.out.println("null");

    }
}
