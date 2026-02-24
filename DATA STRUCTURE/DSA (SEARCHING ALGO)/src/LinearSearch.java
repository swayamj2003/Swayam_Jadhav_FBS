public class LinearSearch {
	public static int linearsearch(int arr[] , int x) {
		for (int i = 0; i < arr.length; i++) {
			if(arr[i] == x)
				return i;
		}
		return -1;
	}
	public static void main(String[] args) {
		int [] arr = {2,3,4,10,40};
		int x  = 10;
		
		int index = linearsearch(arr, x);
		
		if(index == -1) {
			System.out.println("Element not found");
		}else {
			System.out.println("Element found in index: "+index);
		}
	}
}
 