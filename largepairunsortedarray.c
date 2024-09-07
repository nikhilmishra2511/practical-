#include <stdio.h>

int main() {
    int n1, n2;
    

// writer:- NIKHIL MISHRA
//Date:- 7 SEPTEMBER 2024


    // Input size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    // Input elements of the first array
    printf("Enter the elements of the first array:\n");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Input elements of the second array
    printf("Enter the elements of the second array:\n");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find the largest element in the first array
    int max1 = arr1[0];
    for(int i = 1; i < n1; i++) {
        if(arr1[i] > max1) {
            max1 = arr1[i];
        }
    }

    // Find the largest element in the second array
    int max2 = arr2[0];
    for(int i = 1; i < n2; i++) {
        if(arr2[i] > max2) {
            max2 = arr2[i];
        }
    }

    // Print the largest pair
    printf("The largest pair is: (%d, %d)\n", max1, max2);

    return 0;
}
