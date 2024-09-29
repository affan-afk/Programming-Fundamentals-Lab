#include <stdio.h>
int main() {
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);

 (num > 0) ? printf("NUMBER IS POSITIVE") : (num<0) ? printf("NUMBER IS NEGATIVE") : printf("NUMBER IS ZERO");
 return 0;
}
