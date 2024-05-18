#include <stdio.h>

int isYPresent(int arr[], int start, int end, int y) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == y) {
            return 1; 
        }
    }
    return 0; 
}

int longestSubarray(int arr[], int n, int x, int y) {
    int maxLength = 0; 

    // Loop subarray
    for (int i = 0; i < n; i++) {
        int distinctCount = 0, frequency[100001] = {0};
        for (int j = i; j < n; j++) {
            if (frequency[arr[j]] == 0) distinctCount++;
            frequency[arr[j]]++;
            if (distinctCount > x) {
                break;
            }
            if (isYPresent(arr, i, j, y))   maxLength = (j - i + 1) > maxLength ? (j - i + 1) : maxLength;
        }
    }

    return maxLength;
}


int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        printf("Enter n, x, and y: ");
        scanf("%d %d %d", &n, &x, &y);

        int arr[n];
        printf("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int result = longestSubarray(arr, n, x, y);
        printf("Length of the longest subarray: %d\n", result);
    }

    return 0;
}