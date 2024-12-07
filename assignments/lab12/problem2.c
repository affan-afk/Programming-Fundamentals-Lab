#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int **creatmat(int x, int y);
void input(int **mat1,int x,int y);
void multiplymat(int **mat1,int **mat2,int x,int y);
int main(){
    int m,n;
    printf("enter rows and columns for matrix (m,n): ");
    scanf("%d,%d",&m,&n);
    
   int **mat1 = creatmat(m,n);
   input(mat1,m,n);
   int **mat2 = creatmat(n,m);
   input(mat2,n,m);
   multiplymat(mat1,mat2,m,n);
   free(mat1);
   free(mat2);
}
int**creatmat(int m ,int n){
    int **tmp = malloc(sizeof(int)*m);
    for (int i = 0; i < m; i++)
    {
        tmp[i] = malloc(sizeof(int)*n);
    }
    return tmp;
}
void input(int **mat,int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("enter value for element[%d][%d]: ",i+1,j+1);
        scanf("%d",&mat[i][j]);
        }
        
    }
}
void multiplymat(int **mat1,int **mat2,int m,int n){
    int tmpmat[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            tmpmat[i][j] = 0;
            for (int k = 0; k < n; k++) {
                tmpmat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("matrice 1:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
        printf("matirce 2:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    printf("multiplication of the matrices:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",tmpmat[i][j]);
        }
        printf("\n");
    }
    
}

