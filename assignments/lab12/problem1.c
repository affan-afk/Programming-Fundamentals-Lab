#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
    char name[30];
    float marks;
}students;
int main(){
    int n; 
    float total = 0.0;
    printf("enter number of students in class: " );
    scanf("%d",&n);
    while (getchar()!= '\n'); 
    students*class = malloc(sizeof(students)*n);
    for (int i = 0; i < n; i++)
    {
        printf("enter student %d name: ",i+1);
        fgets(class[i].name,sizeof(class[i].name),stdin);
        class[i].name[strcspn(class[i].name,"\n")] = '\0';
        printf("enter marks for student %s: ",class[i].name);
        scanf("%f",&class[i].marks);
        while (getchar()!= '\n');
        total += class[i].marks;
    }
        printf("the average marks for the class are: %.2f",total/n);
        free(class);
}