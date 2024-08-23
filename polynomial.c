#include <stdio.h>
#include <stdlib.h> 

// writer:- NIKHIL MISHRA
// Date:- 23/08/2024

int main()
{
    int a[10]; 
    int i, num;
    float x, psum;
    printf("Enter order of polynomial:\n");
    scanf("%d", &num);
    printf("Enter value of X:\n");
    scanf("%f", &x); 

    printf("Enter %d coefficients:\n", num + 1);
    for (i = 0; i <= num; i++)
    {
        scanf("%d", &a[i]); 
    }

    psum = a[0];
    for (i = 1; i <= num; i++)
    {
        psum = psum * x + a[i];
    }

  
    printf("Given Polynomial is:\n");
    int exp = num;
    for (i = 0; i <= num; i++)
    {
        if (a[i] != 0)
        {
            if (i == 0)
                printf("%dX^%d", a[i], exp);
            else
                printf(" %c %dX^%d", a[i] > 0 ? '+' : '-', abs(a[i]), exp);
        }
        exp--;
    }

    printf("\nSum of polynomial is = %.2f\n", psum);
}
