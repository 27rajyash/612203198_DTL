#include <stdio.h>


int hexToDec(char hex[]) {
    int decimal = 0;
    int power = 0;
    for (int i = strlen(hex) - 1; i >= 0; i--) {
        char digit = hex[i];
        int decimalDigit = 0;
        if (digit >= '0' && digit <= '9') {
            decimalDigit = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            decimalDigit = 10 + digit - 'A';
        } else if (digit >= 'a' && digit <= 'f') {
            decimalDigit = 10 + digit - 'a';
        }
        decimal += decimalDigit * pow(16, power);
        power++;
    }
    return decimal;
}

int power(int no,int exp)
{
    int result=1;
    for (int i=0; i<exp;i=i+1)
    {
        result=result*no;
    }
    return result;
}


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
    printf("%d raised to %d is %d",num1,num2,power(num1,num2));

    char hexadecimal[] = "ABF"; // input hexadecimal number
    int decimal = hexToDec(hexadecimal);
    printf("The decimal equivalent of hexadecimal %s is %d.\n", hexadecimal, decimal);

    return 0;
}
