//Ascending order

/*public class InsertionSort {
	  public static void insertionSort(int [] arr) {
		  for (int i = 0; i < arr.length; i++) {
			int temp = arr[i];
			int prev = i - 1;
			
			while(prev >= 0 && arr[prev] > temp) 
			{
				arr[prev + 1] = arr[prev];
				prev--;
			}
			arr[prev + 1] = temp; 
		}
	  }
	  
	  public static void main(String[] args) {
		int [] arr = {4,1,5,25,3};
		
		insertionSort(arr);
		
		for (int i = 0; i < arr.length; i++) {
			System.out.print(" "+arr[i]);
		}
	}
}*/

//Descending order
public class InsertionSort {
	  public static void insertionSort(int [] arr) {
		  for (int i = 0; i < arr.length; i++) {
			int temp = arr[i];
			int prev = i - 1;
			
			while(prev >= 0 && arr[prev] < temp)
			{
				arr[prev + 1] = arr[prev];
				prev--;
			}
			arr[prev + 1] = temp; 
		}
	  }
	  
	  public static void main(String[] args) {
		int [] arr = {4,1,5,25,3};
		
		insertionSort(arr);
		
		for (int i = 0; i < arr.length; i++) {
			System.out.print(" "+arr[i]);
		}
	}
}
