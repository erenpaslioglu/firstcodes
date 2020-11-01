#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
English//
Create a 10x10 matrix that the values are selected randomly
and find the maximum value,
where is the maximum value (in rows and columns)
how many times the max value changes through the whole code,
how many times the maximum value is repeated.

Turkish//
Rastgele degerlerle olusturulacak 10×10’luk matrisi önce yazdýran ve program içerisinde
bu iþlemi yaparken kaç kere deðiþtirme iþlemi yapýldýðýný,en büyük rakamý,nerede olduğunu
ve kaç tane olduðunu ekrana yazdýran program kodunu yazýnýz.


*/
int main()
{
    int i,j,k,x,max,maxalert,change;
    int matrix[10][10];

    srand(time(NULL)); //to create random values

    max=0;
    maxalert=0;
    change=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            x=rand()%100;
            matrix[i][j]=x;
            printf("%6d",matrix[i][j]);
            if(max<matrix[i][j])
            {
                max=matrix[i][j];
                change++;
            }
        }
        printf("\n\n");
    }
    printf("\tThe maximum value changes %d times.\n",change);
    printf("\tThe maximum value of the matrix=%d\n\n",max);

    for(i=0;i<10;i++)           //To find out how many times the code uses the max value in the matrix.
    {
        for(j=0;j<10;j++)
        {
            if(max==matrix[i][j])
            {
                maxalert++;
                printf("\tThe value used %d times in the matrix\n",maxalert);
                printf("\tThe max value on the %d.row %d.column\n\n",i+1,j+1);
            }
        }
    }


    return 0;
}
