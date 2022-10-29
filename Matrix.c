#include <stdio.h>

void main()
{
    int a[10][10], b[10][10], c[10][10], m, n, p, q, i, j, k;

    printf("Enter the order of matrix A\n");
    scanf("%d%d",&m,&n);

    printf("Enter the order of matrix B\n");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("Matrix multiplication not possible\n");
    }

    else 
    {
        printf("Enter the elements of matrix A\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter the elements of matrix B\n");
        for(i=0; i<p; i++)
        {
            for(j=0; j<q; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                for(k=0; k<n; k++)
                {
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }

        printf("The matrix A:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The matrix B:\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("The resultant matrix C:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }



}

