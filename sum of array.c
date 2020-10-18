#include <stdio.h>
#include <stdlib.h>
int main()
{   int i,j,n,sums=0;
    printf("How many values do you want on your array?\n");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("Enter values for array.\n");
        scanf("%d",&array[i]);
        sums=array[i]+sums;
        printf("\nThe sum of the array = %d\n\n",sums);
    }



}
