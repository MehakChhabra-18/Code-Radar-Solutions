#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",j-1);
        }
        printf("\n");
    }
    return 0;
}