
public class MergeSort {

    static void mergeSort(int arr[], int start, int end) {
    	
        if (start < end) {
            int mid = (start + end) / 2;

            mergeSort(arr, start, mid);      
            mergeSort(arr, mid + 1, end);

            combine(arr, start, mid, end);
        }
    }

    static void combine(int arr[], int start, int mid, int end) {

        int i = start;
        int j = mid + 1;
        int k = 0;

        int[] brr = new int[end - start + 1];

        while (i <= mid && j <= end) {
            if (arr[i] < arr[j]) {
                brr[k++] = arr[i++];
            } else {
                brr[k++] = arr[j++];
            }
        }

        while (i <= mid) {
            brr[k] = arr[i];
            k++;
            i++;
        }

        while (j <= end) {
            brr[k] = arr[j];
            k++;
            j++;
        }

        int y = start;
        for (int x = 0; x < brr.length; x++) {
            arr[y++] = brr[x];
        }
    }


    public static void main(String[] args) {

    	int[] arr = {12,31,35,8,32,17};

        mergeSort(arr, 0, arr.length - 1);

        // print sorted array
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
