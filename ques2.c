#include <stdio.h>

void Elements(int arr[], int size) {
    int sum = 0;
    double average;
    int count = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    average = (double)sum / size;

    printf("Elements greater than the average (%.2f) are:\n", average);
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("None");
    }
    
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    Elements(arr, size);

    return 0;
}
