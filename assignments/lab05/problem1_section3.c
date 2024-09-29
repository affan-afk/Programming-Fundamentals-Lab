#include <stdio.h>
int main() {
 int num1,num2;
 printf("Enter first number: ");
 scanf("%d", &num1);
 printf("Enter second number: ");
 scanf("%d", &num2);
 (num1 > num2) ? printf("FIRST NUMBER IS GREATER \n") : (num2 > num1) ? printf("SECOND NUMBER IS GREATER \n") : printf("BOTH NUMBERS ARE EQUAL");
 return 0;
}
