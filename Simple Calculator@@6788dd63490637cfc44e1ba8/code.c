#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    char w;
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