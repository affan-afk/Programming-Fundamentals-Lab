#include <stdio.h>
int main(){
    int rows,columns,i,j;
    printf("enter rows for matrix: ");
    scanf("%d",&rows);
    printf("enter columns for matrix: ");
    scanf("%d",&columns);
    int matrix[rows][columns],transpose[columns][rows];
    for ( i = 0; i < rows; i++)
    {
       for ( j = 0; j < columns; j++)
       {
        printf("enter value for row %d and column %d: ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
       }
       
    }
    for ( i = 0; i < columns; i++)
    {
       for ( j = 0; j < rows; j++)
       {
        transpose[i][j] = matrix[j][i];
       }
    }
    printf("transpose is: \n");
    for ( i = 0; i < columns; i++)
    {
       for ( j = 0; j < rows; j++)
       {
        printf("%d ",transpose[i][j]);
       }
       printf("\n");
    }
    return 0;
    
}
