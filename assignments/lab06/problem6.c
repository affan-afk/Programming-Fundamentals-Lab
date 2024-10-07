#include <stdio.h>
int main(){
int x = 1, y = 2,product;
printf("%d %d ",x,y);
do{
  product = x*y;
  x = y;
  y = product;
  printf("%d ",product);
  } while(product != 2097152);
}