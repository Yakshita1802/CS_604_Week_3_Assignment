// calculate Area and Circumference of a circle

#include<stdio.h>
int main()
{
    float r, a, c; //defined variable a and c for area and circumference respectively for circle
    float pi=3.14; //define variable pi and assign value 3.14
    printf("enter radius :\n");
    scanf("%f", &r);
    //r stores radius 
    //TODO: 1. declare a variable a to hold area and a variable c to hold circumference
    //TODO  2. calculate and store area into a and circumference into c (you can assume pi = 3.14)
  
  a = pi*r*r; //formula to calculate area of circle
  c = 2*pi*r; //formula to calculate circumference
    printf("Area = %f \nCircumference = %f\n",a,c);
    return 0;
}