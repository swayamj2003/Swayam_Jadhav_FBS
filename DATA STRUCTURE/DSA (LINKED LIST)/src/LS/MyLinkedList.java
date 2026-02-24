package LS;

class MyLinkedList {

    Node start = null;

    // Insert at Beginning
    void insertAtBeg(int ele) {

        Node temp = new Node(ele);

        temp.next = start;
        start = temp;

        System.out.println("Node inserted at beginning!");
    }

    // Insert at End
    void insertAtEnd(int ele) {

        Node temp = new Node(ele);

        if (start == null) {
            start = temp;
        } else {
            Node itr = start;

            while (itr.next != null) {
                itr = itr.next;
            }

            itr.next = temp;
        }

        System.out.println("Node inserted at end!");
    }

    // Insert at Position
    void insertAtPos(int ele, int pos) {

        Node temp = new Node(ele);

        if (pos == 1) {
            temp.next = start;
            start = temp;
            return;
        }

        Node itr = start;
        int count = 1;

        while (itr != null && count < pos - 1) {
            itr = itr.next;
            count++;
        }

        if (itr == null) {
            System.out.println("Invalid Position!");
            return;
        }

        temp.next = itr.next;
        itr.next = temp;

        System.out.println("Node inserted at position!");
    }

    // Delete element
    void delete(int ele) {

        if (start == null) {
            System.out.println("List is empty!");
            return;
        }

        if (start.data == ele) {
            start = start.next;
            System.out.println("Node deleted!");
            return;
        }

        Node itr = start;

        while (itr.next != null && itr.next.data != ele) {
            itr = itr.next;
        }

        if (itr.next == null) {
            System.out.println("Element not found!");
        } else {
            itr.next = itr.next.next;
            System.out.println("Node deleted!");
        }
    }

    // Display
    void displayAll() {

        if (start == null) {
            System.out.println("Linked List is empty");
            return;
        }

        Node itr = start;

        System.out.print("Linked List: ");

        while (itr != null) {
            System.out.print(itr.data + " -> ");
            itr = itr.next;
        }

        System.out.println("null");
    }
}
