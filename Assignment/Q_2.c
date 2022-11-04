Write the C program to find the largest and smallest element in an array.
--------------------------------------------------------------------------
  
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

    int min = 0, j=0;
    int temp = 0;

    for(i = 0; i < size - 1; i++){

        min = i;

        for(j = i + 1; j<size; j++){
            
            if(a[min] > a[j]){
                min = j;
            }
 
        }

        temp = a[min];
        a[min] = a[i];
        a[i] = temp;

    }

    printf("The minimum element is %d\n",a[0]);
    printf("The maximum element is %d\n",a[size-1]);

}
