#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1; // Index for smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { // If element is smaller than pivot
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]); // Place pivot in correct position
    return (i + 1);
}

// Iterative QuickSort using a stack
void quickSortIterative(int arr[], int low, int high) {
    // Create an auxiliary stack
    int stack[high - low + 1];
    int top = -1;

    // Push initial values to the stack
    stack[++top] = low;
    stack[++top] = high;

    // Process the stack until it's empty
    while (top >= 0) {
        high = stack[top--]; // Pop high index
        low = stack[top--]; // Pop low index

        int pi = partition(arr, low, high); // Get partition index

        // Push left subarray if there are elements
        if (pi - 1 > low) {
            stack[++top] = low;
            stack[++top] = pi - 1;
        }

        // Push right subarray if there are elements
        if (pi + 1 < high) {
            stack[++top] = pi + 1;
            stack[++top] = high;
        }
    }
}

// Function to print the array
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

    quickSortIterative(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
