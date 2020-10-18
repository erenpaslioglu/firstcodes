#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mod (int i)    //mod2 almayi fonksiyon haline çevirdim
{
    return i%2;
}


int main()
{
    int i,n;
    int sum = 0;

    for(n=1;n<=8;n++)
    {
    printf("%d.istediginiz degeri giriniz: ",n);
    scanf("%d",&i);

        if (i>=0)
        {
        printf(" --> Bit degeri %d\n",mod(i));
            if(mod(i)==1)
            {
                sum = sum + pow(2,n-1);
                printf("Su anki bit toplami= %d \n",sum);
            }

        }
        else
        {
        printf("lutfen pozitif deger girin \n"); n--;
        }

        }


    return 0;
    }
