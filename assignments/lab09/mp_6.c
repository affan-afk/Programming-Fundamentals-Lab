#include <stdio.h>
void maxmin(int * intarray, int *max, int *min,int size);
int main(){
    int n,i,max,min;
    printf("enter number of elements you need in array: ");
    scanf("%d",&n);
    int numbers[n];
    for ( i = 0; i < n; i++)
    {
        printf("enter value number %d: ",i+1);
        scanf("%d",&numbers[i]);
    }
    maxmin(numbers,&max,&min,n);
    printf("max number entered was %d and minimum number entered was %d ",max,min);
}
void maxmin(int * intarray, int *max, int *min,int size)
{
    *max = intarray[0];
    *min = intarray[0];
    for (int i = 1; i < size; i++) {
        if (intarray[i] > *max) {
            *max = intarray[i];  
        }
        if (intarray[i] < *min) {
            *min = intarray[i]; 
        }
    }
}

