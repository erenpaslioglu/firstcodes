#include <stdio.h>
#include <stdlib.h>
//N x M boyutlu matristeki en büyük elemaný ve bu elemanýn satýr ve sütün adresini bulan C programý.
int main()
{
    int n,m,i,j,min,max,maxi,maxj,mini,minj;
    printf("Matrisinizin formatini giriniz.\n");
    scanf("%d %d",&n,&m);
    printf("Matrisinizin formu %dx%d\n",n,m);
    int array[n][m];
    max=0;
    min=array[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d.satir %d.sutun elemani girin:\n",i+1,j+1);
            scanf("%d",&array[i][j]);
            if(max<array[i][j])
            {
                max=array[i][j];
                maxi=i+1;
                maxj=j+1;
            }
            if(min>array[i][j])
            {
                min=array[i][j];
                mini=i+1;
                minj=j+1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3d",array[i][j]);
        }
        printf("\n");
    }
    printf("Max=%d",max);
    printf(" Bulundugu yer %d.satir %d.sutun\n",maxi,maxj);
    printf("Min=%d",min);
    printf(" Bulundugu yer %d.satir %d.sutun",mini,minj);
    return 0;
}
