#include <stdio.h>
int main(){
int num;
printf("Enter a number : ");
scanf("%d",&num);
if (num == 0 || num == 1 || num < 0){
      printf("NEITHER PRIME NOR COMPOSITE!");
  } 
else{
for(int i = 2 ; i < (num / 2) ; i++){
  if (num % i == 0){
    printf("COMPOSITE!");
    return 0;
    }
  }
printf("PRIME!");
return 0;
}   
}
