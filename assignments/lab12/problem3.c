#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,sum=0;
    printf("enter number of integers u wanna add: ");
    scanf("%d",&n);
    while (n<=0)
    {
        printf("error! enter a number greater than 0: ");
        scanf("%d",&n);
    }
    
    int *numbers = malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        printf("enter integer %d: ",i+1);
        scanf("%d",&numbers[i]);
        sum += numbers[i];
    }
    printf("sum of %d integers entered is: %d",n,sum);
    free(numbers);
}