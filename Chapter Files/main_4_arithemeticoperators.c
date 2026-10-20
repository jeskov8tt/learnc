#include <stdio.h>

int main() {
    // arithmetic operators = + - * / % ++ --
    
    int x = 10;
    int y = 6;
    int z = 0;

    // z = x+y;
    // z = x-y;
    // z = x*y;
    // z = x/y; /* returns -1 (for x = 10, y = -6) as this is integer division, for this to return
    // -1.66... y and z must be float*/ 
    z = x%y; // returns the remainder when x is divided by y
    printf("%d\n", z);

    //agumented assignment operators
    // x++; //x gets incrimented by 1, same as x = x + 1
    // x--; //x gets decrimented by 1, same as x = x - 1

    // x+=100; //x gets incrimented by 100, same as x = x + 100
    // x-=100; //x gets decrimented by 100, same as x = x - 100

    // x*=4; //x gets magnified by 4, same as x = x*4
    x/=3; //x gets diminished by 3, same as x = x/3 (integer division)

    printf("%d", x); 




    return 0;
}