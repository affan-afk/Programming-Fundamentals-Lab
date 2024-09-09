#include <stdio.h>
int main() {	
  int x,y,temp;
  printf("ENTER TWO INTEGERS \n");
  scanf("%d%d",&x,&y);
  temp = x;
  x = y;
  y = temp;
  printf("new value of x after swapping is: %d \n",x);
  printf("new value of y after swapping is: %d",y);
}
