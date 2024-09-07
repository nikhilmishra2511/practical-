#include <stdio.h>
#include <string.h>


// writer:- NIKHIL MISHRA
//Date:- 7 SEPTEMBER 2024


int main() {
    // Define array of strings
    char* daysOfWeek[] = {"Wednesday", "Monday", "Friday", "Sunday", "Tuesday", "Thursday", "Saturday"};
    int n = sizeof(daysOfWeek) / sizeof(daysOfWeek[0]); // Calculate the number of elements

    // Insertion Sort algorithm for sorting the array of strings
    for (int i = 1; i < n; i++) {
        char* key = daysOfWeek[i];
        int j = i - 1;

    
        while (j >= 0 && strcmp(daysOfWeek[j], key) > 0) {
            daysOfWeek[j + 1] = daysOfWeek[j];
            j--;
        }
        daysOfWeek[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted days of the week:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", daysOfWeek[i]);
    }

    return 0;
}
