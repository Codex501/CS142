//********************************************
//
// Luis Ayala
// 2/4/20
// Guessing Game
//*******************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "time.h"
using namespace std;

int randber (int a , int b) {
	while (a != b) {
		if (a > b) {
			cout<< " Your guess is too high you slim"<<endl;
			cout << " Enter your guess:";
			cin>> a;
		}
		if (a < b )	{
			cout<< " Too Low dummy "<<endl;
			cout << " Enter your guess:";
			cin>> a;
		}
	}
	if (a == b){
		cout<<" Correct!"<<endl;
	}
	return b;
}

int main () {
	int numberguessed = 0;
	int randnum = 0;
	int playagain = 0;
	cout<< " Welcome to the guessing game" << endl;
	while (playagain != -1)	{
		srand(time(NULL));
		randnum= rand();
		randnum = 1 + rand() %100;
		cout<< "I have a number between 1 and 100. Can you guess it?" << endl;
		cout << " Enter your guess:";
		cin>> numberguessed;
		cout << randber(numberguessed ,randnum) << endl;
		cout << "Would you like to play again??" << " Press 1 to play again or press -1 to end "<<endl;
		cin>> playagain;
	}
	return 0;
}