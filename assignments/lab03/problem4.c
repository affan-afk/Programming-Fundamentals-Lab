#include <stdio.h>
int main() {
float fuelavg,fuelconsumed,fuelcost;
int distance;
while(fuelavg<1){
  printf("ENTER FUEL AVERAGE OF CAR IN KILOMETRE/LITRE: ");
  scanf("%f",&fuelavg);
}
fuelconsumed = (1207*2)/fuelavg;
fuelcost = (118*(fuelconsumed/2)) + (123*(fuelconsumed/2));
printf("TOTAL FUEL CONSUMED IN LITRES WAS: %0.1f \n",fuelconsumed);
printf("TOTAL FUEL COST WAS: %0.1f",fuelcost);
}
