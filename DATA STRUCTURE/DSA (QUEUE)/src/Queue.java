class Queue {

    int[] arr;
    int rear;
    int front;

    Queue() {
        arr = new int[5];
        rear = -1;
        front = -1;
    }

    boolean isEmpty() {
        return rear == -1;
    }

    boolean isFull() {
        return (rear + 1) % arr.length == front;
    }

    void enqueue(int ele) {

        if (isFull()) {
            System.out.println("Queue is Full");
            return;
        }

        if (rear == -1) {   // first element
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % arr.length;
        }

        arr[rear] = ele;
    }

    int dequeue() {

        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return -1;
        }

        int ele = arr[front];

        if (rear == front) {
            rear = -1;
            front = -1;
        } else {
            front = (front + 1) % arr.length;
        }

        return ele;
    }

    void display() {

        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return;
        }
        int i = front;
        while (i != rear) {
            System.out.print(arr[i] + " ");
            if (i == arr.length-1)
            	i=0;
            else 
            	i++;
        }
        System.out.println(arr[i]);
    }
    
    public static void main(String[] args) {

        Queue q = new Queue();

        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(5);
        q.enqueue(7);
        q.enqueue(9);

        q.display();

        q.dequeue();
        q.display();
    }
}
