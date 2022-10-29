#include <stdio.h>

void main()
{
    int a[10], i, j, temp, n;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The elements entered are\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nThe elements sorted in ascending order is\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
