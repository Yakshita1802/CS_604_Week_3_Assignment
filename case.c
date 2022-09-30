//No toupper() or any other C function.
#include<stdio.h>
int main ()
{
    char _lc;
    char _uc; // declare _uc to be char type variable
  
    printf("Enter a lowercase character :\n");
    scanf("%c", &_lc);
    //TODO: convert lowercase character to uppercase. You are not allowed to use an if statement or switch statement. For instance, if _lc stores char 'a', then char 'A' should be stored into _uc.
  // Lowercase to Uppercase using ASCII table
  _uc = _lc - 32; // In ASCII 'a' is 97 and 'A' is 65 so, 97 - 32 = 65
    printf("Letter in capital  : %c\n", _uc);
    return 0;
}