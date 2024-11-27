/*

Tite: Chapter 6 Exercise 24 - Rock Paper Scissors
File name:Chapter6Ex24_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 11/27/2024
Requirements:

Write a program that lets the user play the game of Rock, Paper, Scissors against the computer. The program should work as follows:

1. When the program begins, a random number in the range of 1 through 3 is generated. If the number is 1, then the computer has chosen rock.
If the number is 2, then the computer has chosen paper. If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)

2. The user enters his or her choice of “rock”, “paper”, or “scissors” at the keyboard. (You can use a menu if you prefer.)

3. The computer’s choice is displayed.

4. A winner is selected according to the following rules:

  • If one player chooses rock and the other player chooses scissors, then rock wins. (The rock smashes the scissors.)

  • If one player chooses scissors and the other player chooses paper, then scissors wins. (Scissors cuts paper.)

  • If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)

  • If both players make the same choice, the game must be played again to determine the winner.

Be sure to divide the program into functions that perform each major task.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNum();
int userChoice();
void computerChoice(int randNum);
void winner(int compNum, int userNum);


int main()
{
    int randomNumber = randomNum();
    int userNumber = userChoice();

    computerChoice(randomNumber);
    winner(randomNumber, userNumber);
}

int randomNum() {
    srand(time(0));
    int lower = 1;
    int upper = 3;

    int random = lower + rand() % (upper - lower +1);

    return random;
}

int userChoice() {
    int userNum = -1;
    while (userNum < 1 || userNum > 3) {
        cout << "Make a choice: \n";
        cout << "1. Rock\n2. Paper\n3. Scissors\n";
        cin >> userNum;
    }

    return userNum;
    
}

void computerChoice(int randNum) {
    if (randNum == 1) {
        cout << "Computer choose Rock\n";
    }
    else if (randNum == 2) {
        cout << "Computer choose Paper\n";
    }
    else cout << "Computer choose Scissors\n";
}

void winner(int compNum, int userNum) {
    if (compNum == userNum) {
        cout << "Draw";
    }
    else if (compNum == 1 && userNum == 2) {
        cout << "You won!";
    }
    else if (compNum == 2 && userNum == 1) {
        cout << "Computer won!";
    }
    else if (compNum == 3 && userNum == 1) {
        cout << "You won!";
    }
    else if (compNum == 3 && userNum == 2) {
        cout << "You won!";
    }
    else if (compNum == 2 && userNum == 3) {
        cout << "Computer won!";
    }
    else if (compNum == 1 && userNum == 3) {
        cout << "Computer won!";
    }
    
}
