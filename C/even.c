#include<stdio.h>
int main()
{
    int a;
    printf("enter any number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}