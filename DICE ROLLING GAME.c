#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*           - DICE ROLLER GAME -

Roll two dice
7 or 11 on first throw, player wins
2, 3, or 12 on first throw, player loses
Continue stage
4, 5, 6, 8, 9, 10 - value becomes player's "point"
Player must roll his point before rolling 7 to win
If player rolls 7, player loses.
                                                   */
int roll(void);
int main()
{
    int sum,point,cont,process;
    srand( time( NULL ) );
    printf("Dices are rolling...\n");
    sum = roll();
       switch (sum)
       {
        case 7:
            printf("\nWINNER AT THE FIRST TIME!\n");
            break;
        case 11:
            printf("\nWINNER AT THE FIRST TIME!\n");
            break;


        case 2:
            printf("\nLOSER AT THE FIRST TIME!\n");
            break;
        case 3:
            printf("\nLOSER AT THE FIRST TIME!\n");
            break;
        case 12:
            printf("\nLOSER AT THE FIRST TIME!\n");
            break;

        default:
            process=1;
            point=sum;
            printf("\nKeep continue to roll dices\n");
            printf("\nMy point is %d. Dices must be %d to win.\n\n",point,point);

            break;
       }
        if(process==1)
        {
                while(1)
                {
                    cont = roll();
                    if(cont==point)
                    {
                        printf("\nYOU HAVE FINALLY WON!\n");
                        break;
                    }

                    if(cont==7)
                    {
                        printf("\nYOU LOSE AGAIN...\nYOU ARE THE KING OF THE LOSERS!\n");
                        break;
                    }
                }
        }
}


int roll(void) // function roll
{
    int first,second,rollsum;
    first = 1+( rand() % 6);
    second =1+( rand() % 6);
    rollsum=first+second;
    printf("Dices rolled %d %d = %d\n",first,second,rollsum);
    return rollsum;

}// end function
