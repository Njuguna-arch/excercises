#include <stdio.h>
#define SIZE 8

// Returns 1 if the key is found, otherwise 0
int BinarySearch(int arr[], int start, int end, int key) {
    int mid;

    while (start <= end) {
        // Find mid index
        mid = (start + end) / 2;

        // Check if the key is found
        if (arr[mid] == key) {
            return 1; // Match found
        }
        else if (arr[mid] < key) {
            start = mid + 1; // Search in the right half
        }
        else {
            end = mid - 1; // Search in the left half
        }
    }
    return 0; // Match not found
}

int main() {
    int page_number[SIZE] = {10, 23, 45, 70, 90, 100, 111, 123};

    // Search found case
    int key = 45;
    if (BinarySearch(page_number, 0, SIZE - 1, key) == 1) {
        printf("Search Found\n");
    } else {
        printf("Search not found\n");
    }

    // Search not found case
    key = 150;
    if (BinarySearch(page_number, 0, SIZE - 1, key) == 1) {
        printf("Search Found\n");
    } else {
        printf("Search not found\n");
    }
    return 0;
}
