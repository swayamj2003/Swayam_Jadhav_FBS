
public class Demo {
	public static void main(String[] args) {
		
		Graph g = new Graph();
		g.insertEdge("A", "B");
		g.insertEdge("B", "C");
		g.insertEdge("A", "D");
		g.insertEdge("A", "C");
		g.insertEdge("C", "D");
		g.insertEdge("B", "E");
		
		g.display();	
		
		//System.out.println("Depth-First Search");
		g.dfs("A");
		
		//System.out.println("Breadth-First Search");
		g.bfs("A");
	}
}
