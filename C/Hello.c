#include<stdio.h>
int main()
{
    int no, i=1,fact=1;
    printf("enter any no\n");
    scanf("%d",&no);
    while(i<=no)
   { 
    fact=fact*i;
    i++;
   }
   printf("factorial of give no=%d" ,fact);
   return 0;
    
}

  