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
         if((i+j)==2)
         {
             sum=a[i][i]+sum;
         }
     }
 }
 printf("Sum of Left Diagonals = %d" ,sum);
return 0;
}


