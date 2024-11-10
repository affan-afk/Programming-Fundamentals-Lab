#include <stdio.h>
float product(){
    float a,b,result;
    printf("enter number 1: ");
    scanf("%f",&a);
    printf("enter number 2: ");
    scanf("%f",&b);
    result = a*b;
    return result;
}
int main(){
    float answer;
    answer = product();
    printf("product of the two numbers is: %.2f",answer);

    return 0;
}
