package Sorted_LS;

public class SortedLinkedList {

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }

    private Node head = null;

    // Insert (Sorted)
    public void insert(int value) {

        Node newNode = new Node(value);

        if (head == null || value < head.data) {
            newNode.next = head;
            head = newNode;
            return;
        }

        Node curr = head;

        while (curr.next != null && curr.next.data < value) {
            curr = curr.next;
        }

        newNode.next = curr.next;
        curr.next = newNode;
    }

    // Delete
    public void delete(int value) {

        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        if (head.data == value) {
            head = head.next;
            System.out.println("Deleted");
            return;
        }

        Node curr = head;

        while (curr.next != null && curr.next.data != value) {
            curr = curr.next;
        }

        if (curr.next == null) {
            System.out.println("Value not found");
        } else {
            curr.next = curr.next.next;
            System.out.println("Deleted");
        }
    }

    // Update (delete + insert to maintain sorting)
    public void update(int oldValue, int newValue) {
        delete(oldValue);
        insert(newValue);
        System.out.println("Updated");
    }

    // Display
    public void display() {

        Node curr = head;

        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        while (curr != null) {
            System.out.print(curr.data + " -> ");
            curr = curr.next;
        }

        System.out.println("null");
    }
}
