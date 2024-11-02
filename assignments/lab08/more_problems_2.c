#include <stdio.h>
int main(){
    int start,i,j;
    printf("enter starting number: ");
    scanf("%d",&start);
    if (start%2 == 0)
    {
        start--;
    }
    
    for ( i = start; i >= 1; i-=2)
    {
    for ( j = start; j > i; j-=2)
    {
       printf(" ");
    }
        printf("%d \n",i);
    }
    
    

    return 0;
}