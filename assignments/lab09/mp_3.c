#include <stdio.h>
void checkprime(int x);
int main(){
    int num;
    do
    {
        printf("Enter a number to check whether its prime or not, or enter 0 to exit: ");
        scanf("%d",&num);
        checkprime(num);
    } while (num != 0);
}
void checkprime(int x){ 
    int i;
    if (x <= 1) {
        printf("%d is not prime\n",x);  
        return;
    }
    else
    {
        for (int i = 2; i * i <= x; i++)
    {  
        if (x % i == 0)
        {
             printf("%d is not prime\n",x);
             return;
        }
    }
    }
    printf("%d is a prime\n",x);  
}

