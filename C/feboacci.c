#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i=1;
    printf("enter any no\n");
    scanf("%d\n",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    c=a+b;
    printf("%d",c);
    while(i<=n-3)
    {
    a=b;
    b=c;
    c=a+b;
    printf("%d\n",c);
    i++;
    }
return 0;
}