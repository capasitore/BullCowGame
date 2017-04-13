#include <iostream>
#include <string>
#include "Main.h"

using namespace std;



int main(int argc, const char * argv[]) {
	PrintIntro();
	GameLoop();

	return 0;
}

void GameLoop()
{
	int gameOver = 0;

	while (gameOver != 1) {
		string guess = GetGuess();
		gameOver = CheckAnswer(guess);
	}
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 6;
	cout << "Welcome to guessing game, guess a " << WORD_LENGTH << " letter word" << endl;
}

string GetGuess() {
	string guess = "";
	cout << "Enter your guess\n";
	getline(cin, guess);

	return guess;
}

int CheckAnswer(string guess) {
	string correctWord = "monkey";
	if (guess == correctWord) {
		cout << "You guessed correctly" << endl;
		return 1;
	}
	else {
		cout << "You guessed wrong, try again" << endl;
		return 0;
	}
}