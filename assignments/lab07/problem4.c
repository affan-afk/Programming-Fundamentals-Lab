#include <stdio.h>
int main(){
    int size,repeat = 0;
    printf("enter number of elements you want to add in array: ");
    scanf("%d",&size);
    int arr[size], repeated[size];
    for(int i = 0 ; i<size ; i++){ 
        printf("enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    } 
    
    for(int i = 0 ; i<size ; i++){
        repeated[i] = 0;
    }
    
    for (int i = 0; i < size; i++)
    {
        repeated[arr[i]]+=1;
    }
    printf("repeated numbers are: ");
     for (int i = 0; i < size; i++){
       if (repeated[i] > 1){
           printf("%d ",i);
           repeat = 1;
       }  
     }
     if (repeat == 0){
         printf("none");
     }
    return 0;
}
