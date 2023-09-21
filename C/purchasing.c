#include<stdio.h>
int main()
{
    int purchase;
    printf("enter amount purchasing");
    scanf("%d",&purchase);
    if (purchase>=2000)
    {
        printf("hey! you get 20% disccount");
    }
    else
    {
        printf(" no discount");
    }
    return 0;
}
