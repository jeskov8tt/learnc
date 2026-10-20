#include <stdio.h>

int main() {
    /*Format Specifiers = Special tokens that begin with a % symbol,
                        followed by a character that specifies the data type
                        and optional modifiers (width, precision, flags, etc...)

                        They control how data is displayed or interpreted.
    */
    //Optional Modifiers
    //int
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -40;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3); //normal
    printf("%d\n\n", num4);

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3); //takes 3 spaces, and right-formatted
    printf("%3d\n\n", num4);

    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3); //takes 3 spaces, and left-formatted
    printf("%-3d\n\n", num4);

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3); //postive are displayed with + sign, negative with -
    printf("%+d\n\n", num4);

    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3); //takes 4 spaces, puts 0 in blanks
    printf("%04d\n\n", num4);

    //float
    float price1 = 45.39;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f\n", price1);
    printf("%f\n", price2);
    printf("%f\n\n", price3); //normal, by default 6 decimals

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n\n", price3); //displays 2 decimals, ideal for pricing

    printf("%7.2f\n", price1);
    printf("%7.2f\n", price2);
    printf("%7.2f\n\n", price3); //displays 2 decimals and minimum width of 7, "." is counted as 1 width

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n\n", price3); //displays 2 decimals and minimum width of 7 and positive numbers will have + sign in front
    return 0;
}