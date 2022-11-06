Write a program to compare two strings without using built-in function.
------------------------------------------------------------------------
  
#include <stdio.h>

void main(){

    char s1[100];
    char s2[100];

    printf("Enter 2 strings\n");

    scanf("%s",s1);
    scanf("%s",s2);

    int i = 0, j = 0;

    while(s1[i]==s2[i] && s1[i]!='\0'){
        i++;
    }

    if(s1[i]>s2[i]){
        printf("s1 is greater than s2\n");
    } else if (s1[i]<s2[i]) {
        printf("s1 is less than s2\n");
    } else {
        printf("s1 is equal to s2\n");
    }
}
