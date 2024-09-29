#include <stdio.h>
int main() {
 int a,b;
 printf("Enter first number: ");
 scanf("%d", &a);
 printf("Enter second number: ");
 scanf("%d", &b);
 a = a^b;
 b = a^b;
 a = a^b;
 printf("NUMBERS AFTER SWAPPING WILL BE --> NUMBER 1 : %d, NUMBER 2 : %d",a,b);
 return 0;
}