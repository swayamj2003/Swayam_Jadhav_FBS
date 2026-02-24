package TreeBST;

class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }

    int getData() {
        return data;
    }

    Node getLeft() {
        return left;
    }

    Node getRight() {
        return right;
    }
}
