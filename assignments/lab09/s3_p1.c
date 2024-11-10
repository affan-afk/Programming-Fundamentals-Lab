#include <stdio.h>
#include <string.h>
int main(){
    char words[16][10] = {"lavender","maple","nettle","oak","pine","quince","rose","sage","tulip","upas","tree","violet","willow","xanthosoma","yew","zinnia"};
    char b[10],user_word[20];
    printf("enter word: ");
    scanf("%s",user_word);
    int i;
    for(i=0;i<16;i++){
        strcpy(b,words[i]);
        if (strcmp(b,user_word) == 0){
            printf("found at row: %d ",i+1);
            return 0;
    }
    }
    printf("not found");
    return 0;
}