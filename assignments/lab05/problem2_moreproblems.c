#include <stdio.h>
int main() {
int attendance;
float assignmentScore,examScore; 
printf("Enter attendance percentage (0-100): ");
scanf("%d", &attendance);
printf("Enter average assignment score (0-100): ");
scanf("%f", &assignmentScore);
printf("Enter exam score (0-100): ");
scanf("%f", &examScore);
if (attendance < 75){
  printf("F");
  }
else{
  if (assignmentScore < 40){
    printf("F");
    }
  else{
    if(examScore < 50){
      printf("F");
      }
    else{
      if(examScore >= 95){ 
        printf("A+");
        }
      else if(examScore >= 90){ 
        printf("A");
        }
      else if(examScore >= 80){ 
        printf("B");
        }
      else if(examScore >= 70){ 
        printf("C");
        }
      else if(examScore >= 60){ 
        printf("D");
        }
      else if(examScore >= 50){ 
        printf("E");
        }
      }
    }
  }
}
