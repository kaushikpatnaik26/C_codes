#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function (Lomuto Partitioning)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot as last element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]); // Place pivot in correct position
    return i + 1; // Return pivot index
}

// Iterative QuickSort without stack
void quickSortIterative(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low < high) {
        int pi = partition(arr, low, high); // Partition array

        // Sort smaller subarray first to minimize auxiliary space
        if (pi - low < high - pi) {
            quickSortIterative(arr + low, pi - low); // Left subarray
            low = pi + 1; // Continue sorting right subarray
        } else {
            quickSortIterative(arr + pi + 1, high - pi); // Right subarray
            high = pi - 1; // Continue sorting left subarray
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArray(arr, n);

    quickSortIterative(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
