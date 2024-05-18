// Bubble Sort
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        // Swap arr[minIndex] and arr[i] if necessary
        if (minIndex != i) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                // Swap arr[j] and arr[j - 1]
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            } else {
                break; // Optimization: No need to continue if the element is already in the correct position
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
