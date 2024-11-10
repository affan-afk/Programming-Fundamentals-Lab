#include <stdio.h>
#include <string.h>
int main(){
    char palindrome[5][20];
    int i,j,flag;
    for ( i = 0; i < 5; i++)
    {
        printf("enter a word: ");
        scanf("%s",&palindrome[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        flag = 1;
        for ( j = 0; j < strlen(palindrome[i]); j++)
        {
            if(palindrome[i][j] != palindrome[i][strlen(palindrome[i])-(j+1)]){
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%s is a palindrome \n",palindrome[i]);
        }
        else
        {
            printf("%s is not a palindrome \n",palindrome[i]);
        }
        
    }
}