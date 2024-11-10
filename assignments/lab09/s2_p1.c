#include <stdio.h>
#include <string.h>
int main(){
    char src_str[100],des_str[100];
    int n;
    printf("enter integer n: ");
    scanf("%s",&n);
    printf("enter source string: ");
    scanf("%s",&src_str);
    printf("enter destination string: ");
    scanf("%s",&des_str);
    strncat(des_str, src_str, n);
    printf("%s",des_str);
    return 0;
}