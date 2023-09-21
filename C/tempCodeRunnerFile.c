#include<stdio.h>
#include<limits.h>
int main(){
   int m, n, sum = 0;
   printf("
Enter the order of the matrix : ");
   scanf("%d %d",&m,&n);
   int i, j;
   int mat[m][n];
   printf("
Input the matrix elements
");
   for(i = 0; i<m; i++){
      for(j = 0; j<n; j++)
      scanf("%d",&mat[i][j]);