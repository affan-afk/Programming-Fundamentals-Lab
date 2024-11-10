#include <stdio.h>
void arithmetic_operation(float x, float y,char op);
int main(){
    float x,y;
    char op;
    printf("enter first number: ");
    scanf("%f",&x);
    printf("enter second number: ");
    scanf("%f",&y);
    printf("enter operation to perform (+, -, *, /): ");
    scanf(" %c",&op);
   arithmetic_operation(x,y,op);
}
void arithmetic_operation(float x, float y,char op){
    switch (op)
    {
    case '+':
        printf("Addition of %.2f and %.2f is: %.2f ",x,y,x+y);
        break;
    case '-':
        printf("Difference of %.2f and %.2f is: %.2f ",x,y,x-y);
        break;    
    case '*':
        printf("Product of %.2f and %.2f is: %.2f ",x,y,x*y);
        break; 
    case '/':
        printf("Division of %.2f and %.2f is: %.2f ",x,y,x/y);
        break;     
    default:
        printf("invalid operator");
        break;
    }
    return;
}
