#include <stdio.h>
#include <stdbool.h> //to use booleans, include this header file

int main() {
    int age = 21; 
    /*int is a datatype for whole numbers (-, 0, +), 
    age is the valid variable name, 
    21 is stored in the age variable 
    <data_type> <variable_name> = <variable_value>; 
    4 bytes in mordern systems*/
    //more examples
    int year = 2026;
    int quanitity = 39;
    int rounded_invoice_amount = 4568;
    int gst_percent_rate = 5;
    int test_decimal = -4;
    printf("If we try to print a decimal stored in a int, %d \n", test_decimal); 
    //% is the format specifier and d is for decimal, this is where the variable value will be displayed
    //the decimals can truncated, meaning 4.67 is just 4

    float cgpa = 8.76;
    //float is a datatype for decimal numbers(-, 0, +)
    printf("My CGPA for Semester 2 is %f\n", cgpa);
    //%f, f for floating point number. By default this shows 6 decimals (8.760000 in this case)
    //to get 1 decimal use %.1f
    //to get 2 decimals use %.2f
    //more examples
    float temp = -10.578496;
    printf("It's really chilly outside, temperature's in the lows of %f °C\n", temp);
    //float can store upto 6 decimals, take up 4 bytes

    double pi = 3.14159265358979;
    //use double instead of float if precision needed is more than 6 decimals, use 8 bytes.
    printf("Value of pi upto 14 decimals is %.14lf\n", pi); //this will still output upto 6 decimals, coz of default behaviour of C, use %.14lf for 14 decimals
    //%lf, lf for long float

    char currency = '$';
    printf("All values indicated are in %c\n", currency);
    //char is for single characters, use 1 byte
    //%c, c for char
    //more examples
    char grade = 'O';
    char symbol = '%'; //use '' (single quotes), "" (double quotes) throw an error
    printf("%c", symbol);

    char name[] = "Jesko"; //this is an array of characters or string, name[] makes it an array of single characters
    //value of char name[] should be in "" (double quotes), i.e. "Jesko" should be in ""
    printf("Hello my name is, %s\n", name);
    //%s, s for string
    //more examples
    char email[] = "jeskov@proton.me";
    char numbers[] = "1245"; //this is a string meaning the number 1245 cannot be used in math/arithmetic operations
    char fav_food[] = "white sauce pasta";

    bool isOnline = true; //in place of true we can also use 1
    bool isOnCredit = false; // in place of false we can also use 0
    printf("Is online? %d\n", isOnline);
    //%d, d for decimal, returns 0 for false, 1 for true.
    //booleans are used mostly inside if statements
    //bool takes 1 byte of space

    return 0;
}