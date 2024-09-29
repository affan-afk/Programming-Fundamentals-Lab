#include <stdio.h>
int main() {
 int a,count = 0;
 printf("Enter a number: ");
 scanf("%d", &a);
 while(a != 0){
 if(a & 1 == 1){
   count = count + 1;
 }
 a = a >> 1;
 }
 printf("NUMBER OF ONES IN NUMBER INPUT WERE : %d",count);
 return 0;
}