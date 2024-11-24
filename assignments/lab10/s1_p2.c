#include <stdio.h>
#include <string.h>
void rev_string(char*string,int first,int last){
    if (first >= last){
        return;
    }
    else{
        char x;
        x = string[first];
        string[first] = string[last];
        string[last] = x;
        rev_string(string,first+1,last-1);
    }
    
}
int main(){
    char string[100];
    printf("enter a string: ");
    fgets(string,100,stdin);
    string[strlen(string)+1] = '\0';
    rev_string(string,0,strlen(string)-1);
    printf("%s",string);
}