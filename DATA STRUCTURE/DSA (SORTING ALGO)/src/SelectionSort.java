// Ascending order

/*public class SelectionSort {
	public static void selectionSort(int [] arr) {
		
		for (int i = 0; i < arr.length; i++) {
			int smallestindex = i;
			for (int j = i + 1; j < arr.length; j++) {
				
				if(arr[j] < arr[smallestindex]) {
					smallestindex = j;
				}
			}
			int temp = arr[i];
			arr[i] = arr[smallestindex];
			arr[smallestindex] = temp;
			
		}
	}
    public static void main(String[] args) {
    	
		int [] arr = {4,1,5,45,2,3};
		
		selectionSort(arr);
		
		System.out.println("Ascending order");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(" " +arr[i]);
		}
	}
}*/

//Descending order

public class SelectionSort {
	public static void selectionSort(int [] arr) {
		
		for (int i = 0; i < arr.length; i++) {
			int smallestindex = i;
			for (int j = i + 1; j < arr.length; j++) {
				
				if(arr[j] > arr[smallestindex]) {
					smallestindex = j;
				}
			}
			int temp = arr[i];
			arr[i] = arr[smallestindex];
			arr[smallestindex] = temp;
			
		}
	}
    public static void main(String[] args) {
    	
		int [] arr = {4,1,5,45,2,3};
		
		selectionSort(arr);
		
		System.out.println("Descending order");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(" " +arr[i]);
		}
	}
}