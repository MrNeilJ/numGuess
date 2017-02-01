/*********************************************
** Author: Neil Johnson
**
** Date: 1.20.17
**
** Description: Program prompts the player
** to guess a random number.  If they guess
** too high it will display "too high" and
** if they guess too low it will state
** "too low".  Program repeats till they
** get it correct.
*******************************************/

#include<iostream>

int main()
{
    // Variables used for the program
    int guess,
        answer,
        counter = 0;

    // Prompt the user for an integer as their guess.
    std::cout << "Enter the number for the player to guess" << std::endl;
    std::cin >> answer;

    // Ask the question once, keep asking until they are correct;
    do
    {
        std::cout << "Enter your guess." << std::endl;
        std::cin >> guess;

        if(guess > answer)
        {
            std::cout << "Too high - try again." << std::endl;
        }
        else if (guess < answer)
        {
            std::cout << "Too low - try again." << std::endl;
        }

        counter++;

    } while(guess != answer);


    // Return how many tries it took the user to guess the number
    if (counter < 2)
    {
        std::cout << "You guessed it in " << counter << " try." << std::endl;
    }
    else
    {
        std::cout << "You guessed it in " << counter << " tries." << std::endl;
    }
    return 0;
}

