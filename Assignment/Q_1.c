Write a C program to display the array elements.

--------------------------------------------
#include <stdio.h>

void main(){

    int size=0;
   
    printf("Enter the size of array\n");
    scanf("%d",&size);

    int a[size];

    printf("Enter the integer elements\n");

    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The elements are\n");

    for(i=0; i<size; i++){
        printf("%d\t",a[i]);
    }


}
