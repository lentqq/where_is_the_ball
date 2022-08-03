/* Where is the ball - a simple C game
We have three ball positions. The computer shuffles the positions and the player has to guess which position the ball is in.
The player has a certain amount and on each shuffle of the positions bets a part of this amount.
If he guesses the position of the ball, the amount he has bet is doubled, and if he does not guess he loses the amount he has bet.
The game is played until the player runs out of the total amount or until he decides to end the game.
*/

#include <stdio.h>
#include <stdlib.h>

void play(int bet);// function declaration
int cash = 20; // global varaible to holds cash of the player

int main()
{
    int bet;

    while (cash > 0)
    {
        printf("\nWhat is your bet? $");
        scanf("%d", &bet);

        if (bet == 0 || bet > cash)
        {
            printf("You don't have enough money in your account!!!");
            break;
        }

        play(bet);// call function to play
    }

    return 0;
}

void play(int bet) // function inizialization to shuffles positions
{
  
}