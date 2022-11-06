Write a program to concatenate two strings without using the built-in function.
---------------------------------------------------------------------------------
  
#include <stdio.h>

void main(){

    char s1[100];
    char s2[100];

    printf("Enter 2 strings\n");

    scanf("%s",s1);
    scanf("%s",s2);

    int i = 0;

    while(s1[i]!='\0'){
        i++;
    }

    int j;

    for(j = 0; s2[j]!='\0'; i++, j++){
        s1[i] = s2[j];
    }

    s1[i] = '\0';

    printf("Concatenated string is %s\n",s1);

}
