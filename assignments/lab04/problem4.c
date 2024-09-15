#include <stdio.h>
int main(){
int cost,discount;
printf("Enter the cost of shopping \n");
scanf("%d",&cost);
if (cost >= 500 && cost<2000){
  discount = cost*0.05;
}
else if (cost >= 2000 && cost<4000){
  discount = cost*0.1;
}
else if (cost >= 4000 && cost<6000){
  discount = cost*0.2;
}
else if (cost >= 6000){
  discount = cost*0.35;
}
else{
discount = 0;
}
printf("Your cost before discount is %d \n",cost);
printf("Your Discount Amount is %d \n",discount);
printf("Your cost after Discount is %d \n",cost - discount);
}