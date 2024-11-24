#include <stdio.h>
int digit_sum(int n){
    if (n < 10){
    return n;
    }
    else{
        return n%10 + digit_sum(n/10);
    }
}
int main(){
    int x;
    printf("enter any number: ");
    scanf("%d",&x);
    printf("sum of all the individul digits of %d is: %d",x,digit_sum(x));
}