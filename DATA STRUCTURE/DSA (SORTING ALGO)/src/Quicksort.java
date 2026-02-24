
public class Quicksort {
	public static int partition(int [] arr, int start, int end) {
		int idx = start - 1;
		int pivot = arr[end];
		
		for (int j = start; j < end; j++) {
			if(arr[j] < pivot) {
				idx++;
				int temp = arr[j];
				arr[j] = arr[idx];
				arr[idx] = temp;
			}
		}
		idx++;
		int temp = arr[end];
		arr[end] = arr[idx];
		arr[idx] = temp;
		return idx;
	}
	
	public static void quickSort(int [] arr, int start, int end) {
		if(start < end) {
			int pivIdx = partition(arr,start,end);
			
			quickSort(arr,start,pivIdx -1); //left half
			quickSort(arr, pivIdx +  1, end); //right half 
		}
	}
	public static void main(String[] args) {
		int [] arr = {12,31,35,8,32,17};
		quickSort(arr,0,arr.length - 1);
		
		for (int i : arr) {
			System.out.print(" " + i);
		}
	}
}
