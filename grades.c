// calculate total and average of a student's grades

#include<stdio.h>
int main()
{
    //TODO: please declare the right types for variables by
    //replacing ??? with types
    int a,b,c,d,e; // declare int type variable
    float total,average; // declare float type variable
  
    printf("please enter grades of 5 subjects : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  
    //TODO calculate total and average of a student's grade
    //TODO again beware of integer division. If you enter 1,2,2,2,2 then average is expected to be 1.8 instead of 1 but integer division will yield 1.

  // Calculation
  total = a + b + c + d + e; // Total of a student's grade
  average = (total/5); // Avrage of the student's grade
  printf("Total grade = %0.1f\n", total);
    printf("Average grade = %0.1f\n",average );
    return 0;

}