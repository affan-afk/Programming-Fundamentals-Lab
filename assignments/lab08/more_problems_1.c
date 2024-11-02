#include <stdio.h>
int main(){
    int start,end,i,j,prime;
    printf("enter start of range: ");
    scanf("%d",&start);
    printf("enter end of range: ");
    scanf("%d",&end);
    if(start == 1){
        start = 2;
    }
    for ( i = start; i < end; i++)
    {
        prime = 1;
        for(j = 2; j < i/2;j++){
            if (i%j == 0){
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d ",i);
        }
        
    }
    
}