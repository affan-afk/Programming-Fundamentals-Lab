#include <stdio.h>
int main() {
 int age;
 int isCitizen;
 printf("ENTER AGE\n");
 scanf("%d",&age);
 printf("\nENTER CITIZENSHIP STATUS (1 FOR TRUE, 0 FOR FALSE)\n");
 scanf("%d",&isCitizen);
 if (age >= 18 && isCitizen) {
 printf("You are eligible to VOTE.\n");
 } else {
 printf("You are not eligible to VOTE.\n");
 }
 return 0;
}
