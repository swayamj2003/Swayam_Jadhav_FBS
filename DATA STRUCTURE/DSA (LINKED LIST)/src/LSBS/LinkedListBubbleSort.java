package LSBS;

class NumberData implements Comparable<NumberData> {

    int value;

    NumberData(int value) {
        this.value = value;
    }

    // compareTo method
    public int compareTo(NumberData o) {
        return this.value - o.value;
    }

    public String toString() {
        return String.valueOf(value);
    }
}

public class LinkedListBubbleSort {

    class Node {
        NumberData data;   // object type
        Node next;

        Node(NumberData data) {
            this.data = data;
            this.next = null;
        }
    }

    Node start = null;
    Node end = null;

    void add(int value) {

        Node newNode = new Node(new NumberData(value));

        if (start == null) {
            start = end = newNode;
        } else {
            end.next = newNode;
            end = newNode;
        }
    }

    void display() {

        Node temp = start;

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    void bubbleSort() {

        if (start == null) {
            System.out.println("No nodes present");
            return;
        }

        boolean swap;
        Node last = null;

        do {
            swap = false;
            Node curr = start;

            while (curr.next != last) {

                // Comparable used here
                if (curr.data.compareTo(curr.next.data) > 0) {

                    NumberData temp = curr.data;
                    curr.data = curr.next.data;
                    curr.next.data = temp;

                    swap = true;
                }

                curr = curr.next;
            }

            last = curr;

        } while (swap);
    }

    public static void main(String[] args) {

        LinkedListBubbleSort llbs = new LinkedListBubbleSort();

        llbs.add(50);
        llbs.add(20);
        llbs.add(40);
        llbs.add(30);
        llbs.add(10);

        System.out.println("Before Sorting:");
        llbs.display();

        llbs.bubbleSort();

        System.out.println("After Sorting:");
        llbs.display();
    }
}
