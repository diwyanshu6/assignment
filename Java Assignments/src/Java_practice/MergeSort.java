package Java_practice;

class Sort {
    private void Merge(int arr[], int low, int mid, int high) {
        int[] b = new int[high - low + 1];
        int i = low;   // Starting index for the left subarray
        int j = mid + 1; // Starting index for the right subarray
        int k = 0; // Index for the temporary array

        // Merging the two subarrays
        while (i <= mid && j <= high) {
            if (arr[i] <= arr[j]) {
                b[k] = arr[i];
                i++;
            } else {
                b[k] = arr[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements of left subarray (if any)
        while (i <= mid) {
            b[k] = arr[i];
            i++;
            k++;
        }

        // Copy remaining elements of right subarray (if any)
        while (j <= high) {
            b[k] = arr[j];
            j++;
            k++;
        }

        // Copy the merged subarray back to original array
        for (int l = 0; l < high - low + 1; l++) {
            arr[low + l] = b[l];
        }
    }

    public void MergeSort(int arr[], int low, int high) {
        if (low < high) { // Base case
            int mid = (low + high) / 2;
            MergeSort(arr, low, mid);
            MergeSort(arr, mid + 1, high);
            Merge(arr, low, mid, high);
        }
    }

    private int partitionindex(int arr[], int low, int high) {
        int pivot = arr[low];
        int i = low, j = high;
        while (i <= j) {
            while (arr[i] <= pivot && i < j)
                i++;
            while (arr[j] > pivot && i < j)
                j--;

            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[j];
        arr[j] = pivot;
        pivot = temp;

        return j;
    }

    public void QuickSort(int arr[], int low, int high) {
        int partitioned_index = partitionindex(arr, low, high);
        QuickSort(arr, low, partitioned_index);
        QuickSort(arr, partitioned_index + 1, high);
    }
}

public class MergeSort {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 10, 4, 3, 2};
        Sort sort = new Sort();
        sort.MergeSort(arr, 0, arr.length - 1);
        for (int element : arr) {
            System.out.println(element);
        }
    }
}
