// Writer: NIKHIL MISHRA
// Date: 22/08/2024

#include <stdio.h>

// Bubble Sort function to sort the array
void b_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // Swap the elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i;
    int a[] = {56, 23, 11, 67, 12, 89, 2};
    int size = sizeof(a) / sizeof(a[0]); // Calculate the number of elements

    // Sort the array
    b_sort(a, size);

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
