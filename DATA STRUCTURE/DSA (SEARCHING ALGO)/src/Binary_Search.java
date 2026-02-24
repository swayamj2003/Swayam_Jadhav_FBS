
public class Binary_Search {
	public static int binarysearch(int arr[], int target) {
		int start = 0;
		int end = arr.length - 1;
		
		while (start <= end) {
			int mid = (start + end) / 2;
			
			if(target > arr[mid]) {
				start = mid +1;
			}
			else if(target < arr[mid]) {
				end = mid - 1;
			}
			else {
				return mid;
			}
		}
		return -1;
	}
	
	public static void main(String[] args) {
		
		int [] arr = {-1,0,3,4,5,9,12};
		int target = 12;
		
		int index = binarysearch(arr,target);
		if(index == -1) {
			System.out.println("Element not found ..");
		}
		else {
			System.out.println("Element found in index: "+index);
		}
	}
}
