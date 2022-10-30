#include <stdio.h>

void main()
{
    float a[10], *ptr, mean, std, sum=0, sumstd=0;
    int i, n;

    printf("Enter the no. of elements\n");
    scanf("%d",&n);

    printf("Enter the array elements\n");
    
    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }

    ptr = a;
    for(i=0; i<n; i++)
    {
        sum = sum + ptr[i];
    }

    mean = sum/n;

    for(i=0; i<n; i++)
    {
        sumstd = sumstd + pow((ptr[i]-mean),2);
    }

    std = sqrt(sumstd/n);

    
}
