#include <stdio.h>
void even_or_odd(int x){
    if (x%2==0){
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    even_or_odd(num);
    return 0;
}