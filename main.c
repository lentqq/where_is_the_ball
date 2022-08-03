/* Where is the ball - a simple C game
We have three ball positions. The computer shuffles the positions and the player has to guess which position the ball is in.
The player has a certain amount and on each shuffle of the positions bets a part of this amount.
If he guesses the position of the ball, the amount he has bet is doubled, and if he does not guess he loses the amount he has bet.
The game is played until the player runs out of the total amount or until he decides to end the game.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SHUFFLE 5 // number of position rotations

void play(int bet); // function declaration
int cash;           // global varaible to holds cash of the player

int main()
{
    int bet;
    printf("\n*** Welcome to the game ***\n");
    printf("\nPlease enter the cash you wish to play with: ");
    scanf("%d", &cash);
    printf("\nTotal cash is = $%d\n", cash);

    while (cash > 0)
    {
        printf("\nWhat is your bet? $");
        scanf("%d", &bet);

        if (bet == 0 || bet > cash)
        {
            printf("\nYou don't have enough money in your account!!!\n");
            break;
        }

        play(bet); // call function to play
        printf("\n************************************************************\n");
    }

    return 0;
}

void play(int bet) // function inizialization to shuffles positions
{
    /* array of chars to hold positions of the ball
    and dynamically  allocated memory for each of the positions*/
    char *positions = (char *)malloc(3 * sizeof(char));
    positions[0] = 'X';
    positions[1] = 'O';
    positions[2] = 'X';

    printf("\nShuffling positions...\n");

    srand(time(NULL)); // seeding random number generator

    for (int i = 0; i < SHUFFLE; i++)
    {
        // using random() function to shuffles positions
        int x = rand() % 3;
        int y = rand() % 3;

        // swap characters at positions x and y
        int temp = positions[x];
        positions[x] = positions[y];
        positions[y] = temp;
    }

    int playerGuess; // varaible to holds which position the player has chosen
    printf("\nWhat`s the position of the ball - 1st, 2nd or 3rd? ");
    scanf("%d", &playerGuess);

    if (positions[playerGuess - 1] == 'O')
    {
        cash += 2 * bet;
        printf("You Guessed!!! Positions are: [%c] [%c] [%c] Total Cash = $%d\n", positions[0], positions[1], positions[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You Loose!!! Positions are: [%c] [%c] [%c] Total Cash = $%d\n", positions[0], positions[1], positions[2], cash);
    }
    free(positions); // deallocate memory
}