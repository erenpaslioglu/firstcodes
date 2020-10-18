#include <stdio.h>
#include <stdlib.h>
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
int main()
{   int a,i,j,n;
    printf("How many steps do you want on your number ladder?\n");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        { printf("%3d",a);
          a=a+1;
        }
        printf("\n");
    }
}
