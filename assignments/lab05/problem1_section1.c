#include <stdio.h>
int main(){
int age;
printf("ENTER AGE\n");
scanf("%d",&age);
if (age >= 18){
  if (age >= 65){
    printf("PERSON IS A SENIOR CITIZEN");
    }
  else if (age ==18){
    printf("PERSON IS AN TEEN ADULT"); 
    }
  else{
    printf("PERSON IS AN ADULT");
    }
  }
else{
  if (age >= 13){
    printf("PERSON IS A TEENAGER");
    }
  else{
    printf("PERSON IS A CHILD UNDER THE AGE OF 13"); 
    }
  }
}










