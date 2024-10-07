#include <stdio.h>
int main(){
int num, count = 0;
printf("ENTER A NUMBER : ");
scanf("%d",&num);
if (num < 0){
    num = num*(-1);
} 
while(count < num && count <= 10){
    count+=1;
}
if (count < 10){
    printf("SINGLE DIGIT NUMBER!");
}
else{
    printf("MULTIPLE DIGIT NUMBER!");
} 
}