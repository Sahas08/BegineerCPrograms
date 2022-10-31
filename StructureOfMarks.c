#include <stdio.h>

struct student
{
    char name[20];
    int rollno, marks;
};

void main()
{
    struct student s[20];
    int i, n;
    float total=0, avg_marks=0;

    printf("Enter the total number of students\n");
    scanf("%d",&n);

    printf("Enter the following details in the same column\n");
    printf("RollNo.\tName\t\tMarks");

    for(i=0; i<n; i++)
    {
        scanf("%d%s%d",&s[i].rollno,s[i].name,&s[i].marks);
    }

    printf("\nStudent Details :\n");

    for(i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\n",s[i].rollno,s[i].name,s[i].marks);
    }
    
    for(i=0; i<n; i++)
    {
        total = total + s[i].marks;
    }
    
    avg_marks = total/n;

    printf("The average marks = %f\n",avg_marks);

    printf("The students who scored above average marks\n");

    printf("Name\t\tMarks\n");

    for(i=0; i<n; i++)
    {
        if(s[i].marks > avg_marks)
        {
            printf("%s\t%d\n",s[i].name,s[i].marks);
        }
    }

    printf("The students who scored below average marks\n");

    printf("Name\t\tMarks\n");

    for(i=0; i<n; i++)
    {
        if(s[i].marks < avg_marks)
        {
            printf("%s\t%d\n",s[i].name,s[i].marks);
        }
    }
}
