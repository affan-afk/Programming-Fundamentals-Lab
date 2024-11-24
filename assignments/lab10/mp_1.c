#include <stdio.h>
void print_array(int arr[],int size){
    if (size < 0){
        return;
    }
    else{
        print_array(arr,size-1);
        printf("%d ",arr[size]);
    }
}
int main(){
    int size;
    printf("enter number of elements you want to enter: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }   
    print_array(arr,sizeof(arr)/sizeof(int)-1);
    return 0;
}