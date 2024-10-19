#include <stdio.h>
int main(){
    int size,count = 0;
    printf("enter number of elements you want to add in array: ");
    scanf("%d",&size);
    int arr[size];
    do
    { 
        printf("enter element %d: ",count+1);
        scanf("%d",&arr[count]);
        count++;
    } while (count<size);
    count = 0;
    do
    { 
        printf("%d, ",arr[(sizeof(arr)/sizeof(arr[0]))-count]);
        count++;
    } while (count<size);
    return 0;
}
