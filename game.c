#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{   start: printf("\n");
    int gamemode;
    printf("\nClick 1 if you want to play with computer\nClick 2 if you want to play with Another player\nClick 3 to quit the program\n");
    scanf("%d", &gamemode);
    switch (gamemode)
    {
    case 3:
        printf("Quiting the Program\n");
        goto end;
        break;
    case 1:
        printf("You are playing with computer\n");
        int number;
        srand(time(NULL));
        number = (rand() % 3) + 1;
        printf("Your turn\tChoose 1 for Stone\tChoose 2 for Paper\tChoose 3 for Scissor\n");
        int choose;
        scanf("%d", &choose);

        if (number == choose)
        {
            printf("The game is tie\n");
        }
        else if (number == 1)
        {
            if (choose == 2)
            {
                printf("You won! Congratulation\n");
                printf("Computer choosed %d", number);
            }
            else if (choose == 3)
            {
                printf("Computer Won! Better luck Next time\n");
                printf("Computer choosed %d", number);
            }
        }
        else if (number == 2)
        {
            if (choose == 1)
            {
                printf("Computer Won! Better luck Next time\n");
                printf("Computer choosed %d", number);
            }
            else if (choose == 3)
            {
                printf("You won! Congratulation\n");
                printf("Computer choosed %d", number);
            }
        }
        else if (number == 3)
        {
            if (choose == 1)
            {
                printf("You won! Congratulation\n");
                printf("Computer choosed %d", number);
            }
            else if (choose == 2)
            {
                printf("Computer Won! Better luck Next time\n");
                printf("Computer choosed %d", number);
            }
        }
        break;
    case 2:
        printf("You are playing with another player\n");
        printf("Player 1 turn\n");
        printf("Choose 1 for Stone\tChoose 2 for Paper\tChoose 3 for Scissor\n");
        int player1,player2;
        scanf("%d",&player1);
        printf("Player 2 turn\n");
        printf("Choose 1 for Stone\tChoose 2 for Paper\tChoose 3 for Scissor\n");
        scanf("%d",&player2);
        if (player1 == player2)
        {
            printf("The game is tie\n");
        }
        else if (player1 == 1)
        {
            if (player2 == 2)
            {
                printf("player2 won! Congratulation\n");
                printf("player1 choosed %d\n", player1);
                printf("player2 choosed %d\n", player2);
            }
            else if (player2 == 3)
            {
                printf("player1 Won! Congratulation\n");
                printf("player1 choosed %d\n", player1);
                printf("player2 choosed %d\n", player2);
            }
        }
        else if (player1 == 2)
        {
            if (player2 == 1)
            {
                printf("player1 Won! Congratulation\n");
                printf("player1 choosed %d\n", player1);
                printf("player2 choosed %d\n", player2);
            }
            else if (player2 == 3)
            {
                printf("player2 won! Congratulation\n");
                printf("player1 choosed %d\n", player1);
                printf("player2 choosed %d\n", player2);
            }
        }
        else if (player1= 3)
        {
            if (player2 == 1)
            {
                printf("player2 won! Congratulation\n");
                printf("player1 choosed %d\n", player1);
                printf("player2 choosed %d\n", player2);
            }
            else if (player2 == 2)
            {
                printf("player1 Won! Congratulation\n");
                printf("player1 choosed %d\n", player1);
                printf("player2 choosed %d\n", player2);
            }
        }
        break;
    }
goto start;
end:
    return 0;
}
