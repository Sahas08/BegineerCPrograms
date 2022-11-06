Write a program to search an element in an array using linear search.
----------------------------------------------------------------------
  
#include <stdio.h>
#include <stdlib.h>

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

    int key = 0; 

    printf("Enter the element to search\n");

    scanf("%d",&key);

    for(i = 0; i<size; i++){
        if(key == a[i]){
            printf("Element found at position : %d\n",i+1);
            exit(0);
        }
    }

    printf("Element not found\n");
}
