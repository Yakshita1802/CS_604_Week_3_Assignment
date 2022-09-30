#include <stdio.h>

int main(void) {
    int _a, _b;
    printf("please enter 2 numbers to be swapped\n");
    scanf("%d%d", &_a, &_b);
    printf("before:a=%d, b=%d\n", _a, _b);
    //Do not modify code above this line
    //TODO: swap the value of _a and _b
    //For instance, if _a=3, _b=4
    //then after swap _a=4, _b=3
    //Do not modify code below this line

    /* Swap using temp variable. The temp variable will be store the value of the first variable.
      this will help me to swap two variables and then assign the value of temp to the second variable.
      */
    int temp = _a; 
    _a = _b; 
    _b = temp; 
  
  printf("after:a=%d, b=%d\n", _a, _b);
    return 0;
}

