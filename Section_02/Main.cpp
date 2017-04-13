#include <iostream>
#include <string>
#include "Main.h"

using namespace std;

bool AskToPlayAgain();

int main(int argc, const char * argv[]) {
	
	bool playAgain = true;
	while (playAgain == true) {
		PrintIntro();
		GameLoop();
		playAgain = AskToPlayAgain();
	}
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

bool AskToPlayAgain()
{
	bool playagain;
	string playAnswer = "";
	cout << "Do you want to play again, y/n?" << endl;
	getline(cin, playAnswer);
	
	if (playAnswer == "y") {
		return playagain = true;
	}
	else if(playAnswer =="n") {
		return playagain = false;
	}
	else {
		return playagain = false;
	}
	
}
