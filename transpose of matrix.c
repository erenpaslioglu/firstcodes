#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,n,m;
   printf("Size of matrix:");
   scanf("%d%d",&n,&m);
   int matrix[n][m];

   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           printf("%d.Row %d.Column element=",i+1,j+1);
           scanf("%d",&matrix[i][j]);
       }
   }
   printf("The matrix is\n");
   for(i=0;i<n;i++)
   {    printf("\0.5t");
       for(j=0;j<m;j++)
       {
           printf("%3d",matrix[i][j]);
       }
       printf("\n");
   }

    printf("\nThe transpose of the matrix is\n");
    for(i=0;i<m;i++)
   {    printf("\t");
       for(j=0;j<n;j++)
       {
           printf("%3d",matrix[j][i]);
       }
       printf("\n");
   }
}
