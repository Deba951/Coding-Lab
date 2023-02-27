//C Program to make a simple calculator using switch...case

#include<stdio.h>

int main(){
    char operator;
    double element1, element2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &element1, &element2);

    switch(operator){
        case '+':
            printf("%.1lf + %.1lf = %.1lf", element1, element2, element1 + element2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", element1, element2, element1 - element2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", element1, element2, element1 * element2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", element1, element2, element1 / element2);
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}