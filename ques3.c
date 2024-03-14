#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;
    
    // Swapping elements at start and end indices
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    // Recursively call reverseArray with incremented start and decremented end indices
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    reverseArray(arr, 0, n - 1);
    
    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
