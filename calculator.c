#include <stdio.h>


int main() {
    int num1, num2, sum;
    int sub, mul, div;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    

    printf("Sum of the numbers: %d\n", sum);
    printf("Subtraction of the numbers: %d\n", sub);
    printf("Multiplication of the numbers: %d\n", mul);
    printf("Division of the numbers: %d\n", div);


    return 0;
}
