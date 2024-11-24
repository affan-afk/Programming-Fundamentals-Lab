#include <stdio.h>
#define max_temp 100.0
int compare(float temp){
    static int frequency = 0;
    if (temp > max_temp)
    {
        frequency++;
    }
    return frequency;
}
int main(){
    int days,exceeded;
    printf("enter how many days you want to enter temperature for: ");
    scanf("%d",&days);
    float temps[days];
    for (int i = 0; i < days; i++)
    {
    printf("enter temperature for day %d: ",i+1);
    scanf("%f",&temps[i]);
    }
    for (int i = 0; i < days; i++)
    {
        exceeded = compare(temps[i]);
    }
    printf("The temperature exceeded the limit of %.1f Celcius on %d out of %d days.",max_temp,exceeded,days);
    return 0;
}