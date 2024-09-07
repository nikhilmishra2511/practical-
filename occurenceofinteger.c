#include <stdio.h>


// writer:- NIKHIL MISHRA
//Date:- 7 SEPTEMBER 2024


int main() {
    int arr[] = {1, 1, 2, 2, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int first = -1, last = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1; 
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (first == -1) {
        printf("The number %d occurs 0 times in the array.\n", x);
        return 0;
    }

    
    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1;  
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    
    int count = last - first + 1;
    printf("The number %d occurs %d times in the array.\n", x, count);
    
    return 0;
}