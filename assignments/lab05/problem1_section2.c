#include <stdio.h>
int main(){
int num;
printf("ENTER a NUMBER\n");
scanf("%d",&num);
if (num %3 == 0 && num % 5 ==0){
  printf("NUMBER IS BOTH DIVISBLE BY 3 AND 5");
}
else{
  printf("NUMBER IS NOT DIVISBLE BY 3 AND 5");
  }
}