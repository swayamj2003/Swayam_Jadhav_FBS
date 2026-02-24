public class QuickSort {

    static void quickSort(int[] arr, int start, int end) {

        if (start < end) {

            int pivIdx = partition(arr, start, end);

            quickSort(arr, start, pivIdx - 1);
            quickSort(arr, pivIdx + 1, end);
        }
    }

    private static int partition(int[] arr, int start, int end) {

        int pivot = arr[end];
        int idx = start - 1;

        for (int j = start; j < end; j++) {
            if (arr[j] <= pivot) {
                idx++;

                // swap arr[j] and arr[idx]
                int temp = arr[j];
                arr[j] = arr[idx];
                arr[idx] = temp;
            }
        }

        // place pivot at correct position
        idx++;
        int temp = arr[end];
        arr[end] = arr[idx];
        arr[idx] = temp;

        return idx;
    }

    public static void main(String[] args) {

        int[] arr = {12, 31, 35, 8, 32, 17};

        quickSort(arr, 0, arr.length - 1);

        for (int i = 0; i < arr.length; i++) {
			System.out.print(" "+arr[i]);
		}
    }
}
