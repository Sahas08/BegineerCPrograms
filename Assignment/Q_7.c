Write a program to calculate simple interest.
----------------------------------------------
  
#include <stdio.h>

void main(){

    double principle, time, rate;
    double interest;

    printf("Enter principle, time and rate of interest\n");
    
    scanf("%lf",&principle);
    scanf("%lf",&time);
    scanf("%lf",&rate);

    interest = (principle * rate * time) / 100;

    printf("The simple interest is %lf\n",interest);


}
