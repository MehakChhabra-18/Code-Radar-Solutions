#include <stdio.h>
int main()
{
    int a,b;
    char w;
    scanf("%d%d",&a,&b);
    scanf("%c",&w);
    switch(w)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("error");
    
      
    }
    return 0;
}