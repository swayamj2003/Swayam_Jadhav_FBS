//PriorityQueue using array 

class PriorityQueueInsertion {
    int[] arr;
    int size;
    int capacity;

    PriorityQueueInsertion(int capacity) {
        this.capacity = capacity;
        this.arr = new int[capacity];
        this.size = 0;
    }

    // Insert element (using insertion logic)
    void insert(int value) {
        if (size == capacity) {
            System.out.println("Priority Queue is Full");
            return;
        }

        int i = size - 1;

        while (i >= 0 && arr[i] > value) {
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1] = value;
        size++;
    }

    // Remove highest priority element
    int delete() {
        if (size == 0) {
            System.out.println("Priority Queue is Empty");
            return -1;
        }
        return arr[--size];
    }

    // Display queue
    void display() {
        if (size == 0) {
            System.out.println("Queue is Empty");
            return;
        }

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // Main method
    public static void main(String[] args) {
        PriorityQueueInsertion pq = new PriorityQueueInsertion(5);

        pq.insert(30);
        pq.insert(10);
        pq.insert(20);
        pq.insert(40);

        pq.display();   //10 20 30 40

        System.out.println("Deleted: " + pq.delete());
        pq.display();   //10 20 30
    }
}
