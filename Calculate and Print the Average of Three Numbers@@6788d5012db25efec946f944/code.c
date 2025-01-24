#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f\t%f\t%f",&a,&b,&c);
    float e;
    e=(a+b+c)/3;
    printf("Average: %.2f",e);
    return 0;
}