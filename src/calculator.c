#include <stdio.h>
#include "calculator.h"
#include "arithmetic.h"

int calculator() {
char op;
double num1;
double num2;
double result;

printf("\nEnter an operator (+ - * /): ");
scanf("%c", &op);

printf("Enter number 1: ");
scanf("%lf", &num1);

printf("Enter number 2: ");
scanf("%lf", &num2);

switch(op) {
case '+':
	result = add(num1, num2);
	break;
case '-':
	result = subtract(num1, num2);
	break;
case '*':
	result = multiply(num1, num2);
	break;
case '/':
	if(num2 != 0)
		result = divide(num1, num2);
	else {
		printf("num2 mustn't be %.lf\n", num2);
		return 1; 
	}
	break;
default:
	printf("%c in not valid", op);
	return 1;
}
 printf("Result: %.2lf\n", result);
 return 0;
}
