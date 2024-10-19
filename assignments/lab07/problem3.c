#include <stdio.h>
int main(){
    int max = 0,min = 0,count = 1,arr[] = {4,1,6,8,10,21,8,9,2,6};   
    max = min = arr[0];
    do
    { 
        if (arr[count]>max){
            max = arr[count];
        }
        if (arr[count]<min){
            min = arr[count];
        }
        count++;
    } while (count<(sizeof(arr)/sizeof(arr[0])));
    printf("maximum value is: %d\n",max);
    printf("minimum value is: %d\n",min);
    return 0;
}
