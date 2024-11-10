#include <stdio.h>
void swapintegers(int *x,int *y);
int main(){
    int x,y;
    printf("enter first number: ");
    scanf("%d",&x);
    printf("enter second number: ");
    scanf("%d",&y);
    swapintegers(&x,&y);
    printf("swapped numbers are %d and %d ",x,y);
}
void swapintegers(int *x,int *y){
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}
