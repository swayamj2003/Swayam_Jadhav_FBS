
/*public class BubbleSort {
	public static void bubbleSort(int [] arr) {
		
		boolean swapped ;
		
		for (int i = 0; i < arr.length -1; i++) {
			swapped = false;
			for(int j = 0; j<arr.length-i-1;j++) {
				
				if(arr[j] > arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j +1];
					arr[j +1] = temp;
					swapped = true;
				}
			}
			
			if (swapped == false) 
				break;
		}	
	}

	
	public static void main(String[] args) {
		int n = 5;
		int [] arr = {4,1,5,47,2,3};
		
		bubbleSort(arr);
		
		System.out.println("Ascending order");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(" " +arr[i]);
		}
		
	}
}*/


public class BubbleSort {
	public static void bubbleSort(int [] arr) {
		
		boolean swapped ;
		
		for (int i = 0; i < arr.length -1; i++) {
			swapped = false;
			for(int j = 0; j<arr.length-i-1;j++) {
				
				if(arr[j] < arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j +1];
					arr[j +1] = temp;
					swapped = true;
				}
			}
			
			if (swapped == false) 
				break;
		}	
	}

	
	public static void main(String[] args) {
		int n = 5;
		int [] arr = {4,1,5,47,2,3};
		
		bubbleSort(arr);
		
		System.out.println("Descending order");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(" " +arr[i]);
		}		
	}
}

