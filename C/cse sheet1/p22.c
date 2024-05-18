#include <stdio.h>

void findMinMax(int arr[], int size) {
    int max = arr[0], min = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
}

int main() {
    int arr[] = {5, 3, 8, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, size);
    return 0;
}
