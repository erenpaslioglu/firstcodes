#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,j,n;
   printf("Size of matrix:");
   scanf("%d",&n);
   int matrix[n][n];

    for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
            if(i==j)
        {
           matrix[i][j]=1;
        }
            else
            matrix[i][j]=0;
        }
   }


   printf("The identity matrix is\n\n");
   for(i=0;i<n;i++)
   {    printf("\0.7t");
       for(j=0;j<n;j++)
       {
           printf("%3d",matrix[i][j]);
       }
       printf("\n");
   }
}
