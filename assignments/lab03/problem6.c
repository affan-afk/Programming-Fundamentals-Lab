#include <stdio.h>
int main() {
float x1,y1,x2,y2,slope;
printf("ENTER X1: \n");
scanf("%f",&x1);
printf("ENTER Y1: \n");
scanf("%f",&y1);
printf("ENTER X2: \n");
scanf("%f",&x2);
printf("ENTER Y2: \n");
scanf("%f",&y2);
slope = (y2-y1)/(x2-x1) ;
printf("THE SLOPE OF ENTERED POINTS IS: %0.3f",slope);
}