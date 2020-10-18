#include <stdio.h>
#include <stdlib.h>
/*

*
* *
* * *
* * * *
* * * * *

*/
int main()
{
    int i,j,a,n;  // a = space
    printf("How many steps do you want on the ladder: \n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
            printf("* ");
            }

            printf("\n");
    }

for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
            {
            printf("* ");
            }

            printf("\n");
    }
}

