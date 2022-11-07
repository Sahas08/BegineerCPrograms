Write a C program to check whether the number is pallindrome or not.
--------------------------------------------------------------------

#include <stdio.h>

void main(){
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    int digit = 0;
    int revNum = 0;
    int temp = n;

    while(temp!=0){
        digit = temp%10;
        revNum = ((revNum * 10) + digit);
        temp = temp / 10;        
    }

    if(revNum == n){
        printf("Pallindrome\n");
    } else {
        printf("Not a pallindrome\n");
    }
}
