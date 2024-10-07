#include <stdio.h>
int main(){
for(int i = 0, j = 1,sum = 1; sum < 13 ;){
  sum = i + j;
  i = j;
  j = sum;
  printf("%d ",sum);
  }
}