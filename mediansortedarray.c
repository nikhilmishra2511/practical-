#include <stdio.h>


// writer:- NIKHIL MISHRA
//Date:- 7 SEPTEMBER 2024


int main() {
    // Define two sorted arrays of different sizes
    int arr1[] = {1, 3, 4, 5, 11, 13};
    int arr2[] = {7, 9, 10, 12};
    
    // Get the sizes of the arrays
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // Define a merged array with a size equal to the sum of the sizes of the two arrays
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    // Merge the two arrays into one sorted array
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // If there are remaining elements in arr1, add them to merged
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2, add them to merged
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    // Calculate the median
    int totalSize = n1 + n2;
    double median;
    
    if (totalSize % 2 == 0) {
        // If the total number of elements is even, median is the average of the two middle elements
        median = (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
    } else {
        // If the total number of elements is odd, median is the middle element
        median = merged[totalSize / 2];
    }

    // Print the median
    printf("Median is: %.2f\n", median);
    
    return 0;
}
