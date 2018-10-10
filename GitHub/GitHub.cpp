// GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <time.h>

int N_O_G = 0; // Tally for the number of guesses the user has left... 
int G; // Stand in for user guess/ input...
int A; // Randomly picked number the computer has chosen between 1 and 100...

bool win = false;
bool lose = false;

int main()
{
	// Seed to randomly generate 
	srand(time(NULL));
	A = rand() % 100 + 1; // Generates a random number between 1 and 100...

	std::cout << "Hello I have picked out a number at random between 1 and 100 and you have 5 try's to guess";

	// while the use user has not used 5 guesses and the game has not been won or lost, keep going...
	while (!N_O_G == 5 && !win||lose == true) { 
		
		std::cin >> (G);
			if (G > A) {
				std::cout << "Lower...";
				N_O_G++;
			else if (G < A) {
				std::cout << "Higher...";
				N_O_G++;
				}
			}


	// Once the user has used up all guesses then end the program...
		if (N_O_G == 5) {
			lose = true;
			std::cout << "sorry ran out of guesses... Better luck next time ;)";
			return 0;
		}
	}
    return 0;
}

