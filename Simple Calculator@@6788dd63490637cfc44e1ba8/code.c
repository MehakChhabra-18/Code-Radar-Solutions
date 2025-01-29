#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    char c;
    scanf("%c",&c);
    switch(c)
    {
        case '+':
        printf("%.2lf",a+b);
        break;
        case '-':
        printf("%%.2lf",a-b);
        break;
        case '*':
        printf("%.2lf",a*b);
        break;
        case '/':
        printf("%.2lf",a/b);
        break;
    
      
    }
    return 0;
}