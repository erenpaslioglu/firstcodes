#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n;
    printf("Enter a value\n");
    scanf("%d",&n);
    int array[n];
    int sum=0;
    float avg;
    int positive=0;
    for(a=1;a<=n;a++)
    {
        printf("%d.value of your array is ",a);
        scanf("%d",&array[n]);
        if(array[n]>0)
        {
        sum=sum+array[n];
        positive++;
        }
    }
    printf("sum = %d\n",sum);
    printf("number of positive = %d\n",positive);
    printf("number of negative = %d\n",n-positive);
    avg=(float)sum/positive;
    printf("average is %.3f\n",avg);

    return 0;
}
