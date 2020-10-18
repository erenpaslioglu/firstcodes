#include <stdio.h>
#include <stdlib.h>
/*          1!/1kare - 2!/2kare + 3!/3kare ...........N!/Nkare -1üzeri2 -1zeri3
        kare almak = i*i


*/
int main()
{   int a;
    printf("Bir deger giriniz:");
    scanf("\n%d",&a);
    int kare;
    int i;
    int fak=1;
    int artieksi=(-1);
    float sonuc;
    float sum;
    for(i=1;i<=a;i++)
    {
        fak=(fak)*(i);
        kare=i*i;
        artieksi=artieksi*(-1);
        sonuc=artieksi*((float)fak/kare);
        sum=sum+sonuc;
    }

    printf("%d\n",fak);
    printf("\n%d\n",kare);
    printf("%.2f \n",sonuc);
    printf("TOPLAM SONUC %.2f",sum);
    return 0;
}
