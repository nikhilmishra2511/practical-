#include <stdio.h>
#include <string.h>


// writer:- NIKHIL MISHRA
//Date:- 7 SEPTEMBER 2024


int main() {
    // Define array of strings
    char* words[] = {"Apple", "Orange", "Elephant", "Umbrella", "Igloo"};
    int n = sizeof(words) / sizeof(words[0]); // Calculate the number of elements

    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    // Selection Sort algorithm for sorting the array of strings
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            // Compare strings by their Hushkey value's
            if (strcmp(words[j], words[minIndex]) < 0) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        char* temp = words[i];
        words[i] = words[minIndex];
        words[minIndex] = temp;
    }

    // Print the sorted array
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
