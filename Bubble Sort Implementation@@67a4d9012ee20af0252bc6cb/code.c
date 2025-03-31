#include <stdio.h>

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) { // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) { // Inner loop for swapping
            if (arr[j] > arr[j + 1]) { // Swap if the current element is greater than the next
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    bubbleSort(arr, n);

    // Print sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
