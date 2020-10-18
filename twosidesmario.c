#include <stdio.h>
#include <stdlib.h>
/*
   *    1yildiz 6bosluk    n-1 kadar bosluk
  ***   3yildiz 4 bosluk
 *****  5* 2 bosluk
******* 7

*/
int main()
{   int i,j,n,a;
    printf("How many steps do you want on your ladder?:\n");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
        printf(" ");

        }
        for(a=n;a>n-i;a--)
            {
                printf("*");
            }
        if(i>1)
        {
            for(a=n+1;a<n+i;a++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

}
