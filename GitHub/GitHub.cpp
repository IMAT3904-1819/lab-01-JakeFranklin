// GitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <time.h>

using namespace std;

int main()
{
	int N_O_G = 0; // Tally for the number of guesses the user has left... 
	int G; // Stand in for user guess/ input...
	int A; // Randomly picked number the computer has chosen between 1 and 100...

	// Seed to randomly generate 
	srand(time(NULL));
	A = rand() % 1000 + 1; // Generates a random number between 1 and 100...

	std::cout << "Hello I have picked out a number at random number between 1 and 100" << endl; 
	std::cout << "you have 8 try's to guess" << endl;

	// while the use user has not used 8 guesses and the game has not been won or lost, keep going...
	while (N_O_G != 8) { 
		
		// Get the user input and compare with the awnser to see if it is higher, lower or matches...
		// If the guess does not match add 1 to the N_O_G talley...
		std::cout << " please enter a number" << std::endl;
		std::cin >> G;
		if (G > A) {
			std::cout << "Lower...";
			N_O_G++;
		}
		else if (G < A) {
			std::cout << "Higher...";
			N_O_G++;
		}

	// Once the user has used up all guesses...
	// Reveal the awnser and then end the program...
		if (N_O_G == 8) {
			std::cout << "sorry ran out of guesses..." << "the correct awnser was..." << A << endl;
			std::cout << "Better luck next time;)";
			return 0;
		}

	// If the User guesses the random number correctly... 
		if (G == A) {
			
			std::cout << "CONGRATULATIONS!";
		}
	}
	system("pause");
    return 0;
}

