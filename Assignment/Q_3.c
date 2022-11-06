Write a program to sort an array in ascending order using bubble sort.
---------------------------------------------------------------------------
  
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

    int temp = 0, j = 0;

    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(a[j+1]<a[j]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Array sorted in ascending order is \n");

    for(i=0; i<size; i++){
        printf("%d\t",a[i]);
    }
}
