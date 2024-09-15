#include <stdio.h>
int main(){
  float a,b;
  char x;
  printf("enter two numbers\n");
  scanf("%f %f",&a,&b);
  printf("enter a operator\n");
  scanf(" %c",&x);

  switch (x){
    case '+':
	printf("addition of two numbers was %f",a+b);
	break;
    case '-':
	printf("difference of two numbers was %f",a-b);
	break;
    case '/':
	printf("division of two numbers was %f",a/b);
	break;
    case '*':
	printf("multiplication of two numbers was %f",a*b);
	break;
    default:
	printf("enter valid operator");
  }
}
