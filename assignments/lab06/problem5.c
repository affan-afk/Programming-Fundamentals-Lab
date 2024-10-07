#include <stdio.h>
int main(){
int x = 65536,y = 1;
do{
  x = x / y;
  y += 1;
  printf("%d ",x);
  } while(x != 0);
}