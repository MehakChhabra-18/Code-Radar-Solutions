#include <stdio.h>
int main()
{
    char name[10];
    scanf("%s",&name);
    int age;
    scanf("%d",&age);
    char hobby[20];
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;

}