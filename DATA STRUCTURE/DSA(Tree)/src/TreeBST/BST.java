package TreeBST;

public class BST 
{	
	Node root;
	
	BST(){
		root = null;
	}
	
	Node getRoot() {
		return root;
	}

	void setRoot(Node root) {
		this.root = root;
	}


	public void insert(int ele){
		Node x= new Node(ele);
		
		if(root == null){
			root = x;
			return;
		}
		Node p = root;
		
		while(true){
			if(p.getData() == ele){
				System.out.println("Duplicate values are not allowed!!!");
				return;
			}
			
			if(p.getData() > ele && p.left != null) {
				p = p.left;
			}
			
			if(p.getData() > ele && p.left == null){
				p.left = x;
				break;
			}
			
			if(p.getData() < ele && p.right != null){
				p=p.right;
			}
			
			if(p.getData() < ele && p.right == null){
				p.right = x;
				break;
			}
		}
	}
	
	public void inorder(Node p){
		if(p == null){
			return;
		}	
		inorder(p.getLeft());
		System.out.println(p.getData());
		inorder(p.getRight());
	}
	
	void display_In(){
		if(root == null){
			System.out.println("Tree is Empty!!!");
		}	
		inorder(root);
	}
	
	public void preorder(Node p){
		if(p == null){
			return;
		}	
		System.out.println(p.getData());
		inorder(p.getLeft());
		inorder(p.getRight());
	}
	
	void display_Pre(){
		if(root == null){
			System.out.println("Tree is Empty!!!");
		}
		preorder(root);
	}
	
	
	public void postorder(Node p){
		if(p == null){
			return;
		}	
		inorder(p.getLeft());
		inorder(p.getRight());
		System.out.println(p.getData());
	}
	
	void display_Post(){
		if(root == null){
			System.out.println("Tree is Empty!!!");
		}		
		postorder(root);
	}
	
	
	Node delete(Node p, int ele){
		if(p == null){
			System.out.println("Node not Found!!!");
			return p;
		}	
		
		if(p.getData() > ele)	{
			p.left = delete(p.left, ele);
			return p;
		}
		
		if(p.getData() < ele){
			p.right = delete(p.right, ele);
			return p;
		}
		
		if(p.getLeft() == null && p.getRight() == null){
			return null;
		}
		
		if(p.getLeft() == null && p.getRight() != null){
			return p.right;
		}
		
		if(p.getLeft() != null && p.getRight() == null){
			return p.left;
		} 
		else{
			Node x = p.right;
			
			while(x.left != null){
				x = x.getLeft();
			}
			
			p.data = x.data;		
			p.right = delete(p.right,x.data);
		}
		return p;	
	}
	
	void deleteNode(int ele){
		if(root == null){
			System.out.println("Tree is Empty!!");
			return;
		}
		root = delete(root,ele);
	}
}

