#include <stdio.h>

int searchElement(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key)
            return i;  // Element found, return index
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {5, 3, 8, 2, 9, 55, 213};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int index = searchElement(arr, size, key);
    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found in the array\n");
    return 0;
}
