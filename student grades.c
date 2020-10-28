#include <stdio.h>
#include <stdlib.h>
//60+40............. if the sum equals to 500, stop the loop
int main()
{
    int n,i=0,sum=0;
    printf("How many students are there in the class?\n");
    scanf("%d",&n);
    int grade[n];
    while(i<n)
    {
        printf("Student grade:\n");
        scanf("%d",&grade[i]);
        sum=sum+grade[i];
        if(sum>=500)
        {
            printf("We reach 500 points at %d.student.",i+1);
            break;
        }
    i++;
    }


    return 0;
}
