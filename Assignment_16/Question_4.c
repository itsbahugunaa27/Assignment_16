#include<stdio.h>
int main()
{
 int a[3][3],sum=0,i,j;
 printf("Enter the elements of array\n");
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         if(i==j)
         {
             sum=sum+a[i][j];
         }
     }
 }
 printf("Sum of Right Diagonals = %d" ,sum);
return 0;
}

