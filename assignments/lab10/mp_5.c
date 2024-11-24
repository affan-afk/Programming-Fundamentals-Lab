#include <stdio.h>
void rec_bubble_sort(int arr[],int size){
    if (size < 1) {
        return;
    }
    else{
        if (arr[size] < arr[size-1]) {
            int temp = arr[size -1];
            arr[size-1] = arr[size];
            arr[size] = temp;
        }
        rec_bubble_sort(arr,size-1);
    }
}
int main(){
   int arr[30] = {56, 32, 71, 8, 19, 4, 62, 29, 51, 85, 11, 47, 78, 39, 94, 22, 53, 91, 63, 16, 48, 34, 27, 70, 55, 92, 40, 10, 66, 87};

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        rec_bubble_sort(arr,sizeof(arr)/sizeof(int)-1);
    }
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf("%d ",arr[i]);
    }
    

}