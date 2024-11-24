#include <stdio.h>
#define cov_fact 0.001
int converter(float * value){
    static int frq = 0;
    frq++;
    *value = *value*cov_fact;
    return frq;
}
int main(){
    float metres[5] = {231312.0,32323.0,44323.0,4444.0,233.43};
    int called = 0;
    for (int i = 0; i < 5; i++)
    {
       printf("%.2f m =",metres[i]);
       called = converter(&metres[i]);
       printf(" %.2f km\n",metres[i]);
    }
    printf("function was called %d times",called);
}