#include <stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (k=1;k<=i;k++)
        {
            printf("%d",k);
        }

        for (j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}