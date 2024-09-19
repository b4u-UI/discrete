#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform randomized binary search
int randomizedBinarySearch(int arr[], int low, int high, int key) {
    if (high >= low) {
        // Choose a random pivot within the current search range
        int mid = low + rand() % (high - low + 1);

        if (arr[mid] == key) {
            return mid;  // Key found
        }

        if (arr[mid] > key) {
            return randomizedBinarySearch(arr, low, mid - 1, key);  // Search left half
        } else {
            return randomizedBinarySearch(arr, mid + 1, high, key);  // Search right half
        }
    }

    return -1;  // Key not found
}

int main() {
    int n, key, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Seed the random number generator
    srand(time(0));

    // Perform randomized binary search
    int result = randomizedBinarySearch(arr, 0, n - 1, key);

    if (result == -1) {
        printf("Key not found.\n");
    } else {
        printf("Key found at index %d\n", result);
    }

    return 0;
}
