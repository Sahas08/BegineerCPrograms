#include <stdio.h>
#include <stdlib.h>

void str_comp(char s1[], char s2[]);
void str_concat(char s1[], char s2[]);
void str_length(char s1[]);

void main()
{
    char str1[50], str2[50];
    int ch;

    while(1)
    {
        printf("Enter 1: String comparision\n2: String concatenation\n3: String length\n4:Exit\n");

        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("Enter the value of string 1\n");
                    scanf("%s",str1);
                    printf("Enter the value of string 2\n");
                    scanf("%s",str2);
                    str_comp(str1, str2);
                    break;
                
            case 2: printf("Enter the value of string 1\n");
                    scanf("%s",str1);
                    printf("Enter the value of string 2\n");
                    scanf("%s",str2);
                    str_concat(str1, str2);
                    break;

            case 3: printf("Enter the value of string1\n");
                    scanf("%s",str1);
                    str_length(str1);
                    break;

            case 4: exit(0);
        }
    }

}

    void str_comp(char s1[50], char s2[50])
    {
        int i=0;
        while(s1[i]==s2[i] && s1[i]!='\0')
            i++;

        if(s1[i]<s2[i])
            printf("String s1 : %s is less than string s2 : %s\n",s1,s2);

        else if(s1[i]>s2[i])
            printf("String s1 : %s is greater than string 2 : %s\n",s1,s2);

        else 
            printf("String s1 is equal to string s2\n");
    }

    void str_concat(char s1[50], char s2[50])
    {
        int i, j;

        for(i=0; s1[i]!='\0'; i++);

        for(j=0; s2[j]!='\0'; i++, j++)
            s1[i] = s2[j];

        s1[i] = '\0';

        printf("After concatenation : %s\n",s1);
    }

    void str_length(char s1[50])
    {
        int i;
        for(i=0; s1[i]!='\0'; i++);

        printf("The length is : %d\n",i);
    }
