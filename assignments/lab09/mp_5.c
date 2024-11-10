#include <stdio.h>
#include <string.h>
void revstr(char* start);
int main(){
    char string[100];
    char *reversed;
    printf("enter a string to reverse: ");
    fgets(string, 100, stdin);  
    revstr(string);
    printf("reversed string is: %s",&string);
}
void revstr(char* start){
    char reversed[100];
    int i,length = strlen(start);
    for ( i = 0; i <length ; i++)
    {
        reversed[i] = start[length-(i+1)];
    }
    strcpy(start,reversed);
    return;
}