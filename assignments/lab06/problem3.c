#include <stdio.h>
int main(){
int num;
printf("Enter a number : ");
scanf("%d",&num);
for(int i = 2 ; i < (num / 2) ; i++){
  if (num % i == 0){
    printf("COMPOSITE!");
    return 0;
    }
  }
printf("PRIME!");
return 0;
}       