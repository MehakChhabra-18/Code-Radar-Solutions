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
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '/':
        if (b==0)
        {
            printf("error\n");
        }
        else
        {
            printf("%d\n",a/b);
        }
       
        break;
        default:
        printf("error\n");
    
      
    }
    return 0;
}