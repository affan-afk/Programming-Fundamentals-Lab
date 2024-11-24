#include <stdio.h>
int rec_linear_search(int arr[],int size,int key,int index){
    if (index >= size){
        return -1;
    }
    else{
        if (arr[index] == key){
            return index;
        }
        return(rec_linear_search(arr,size,key,index+1));
    }
}
int main(){
    int arr[30] = {56, 32, 71, 8, 19, 4, 62, 29, 51, 85, 11, 47, 78, 39, 94, 22, 53, 91, 63, 16, 48, 34, 27, 70, 55, 92, 40, 10, 66, 87};
    printf("%d\n",rec_linear_search(arr,30,56,0));
    printf("%d\n",rec_linear_search(arr,30,87,0));
    printf("%d\n",rec_linear_search(arr,30,23,0));
    printf("%d",rec_linear_search(arr,30,94,0));
}