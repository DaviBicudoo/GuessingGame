#include <iostream>
using namespace std; // Don't need to write std::method, but only method

int main()
{
	const int SECRET_NUMBER = 20;
	int userTry;
	short int attempts = 0;

	cout << " *********************************" << endl;
	cout << "** Welcome to the guessing game! **" << endl;
	cout << " *********************************" << endl;

	cout << "The secret number is: " << SECRET_NUMBER << "\n" << endl;

	while (true)
	{
		attempts++;

		cout << attempts << "st Try) What's your guess? ";
		cin >> userTry;
		cout << "**********************************************************************" << endl;
		

		bool equals = userTry == SECRET_NUMBER;
		bool bigger = userTry > SECRET_NUMBER;

		if (equals)
		{
			cout << "You guessed the secret number! It's " << userTry << endl;
			cout << "**********************************************************************" << endl;
			break;
		}
		else if (bigger)
		{
			cout << "Your guess was bigger than secret number! Try a smaller number!" << endl;
			cout << "**********************************************************************" << endl;
		}
		else
		{
			cout << "Your guess was smaller than secret number! Try a bigger number! " << endl;
			cout << "**********************************************************************" << endl;
		}
	}

	cout << "You guessed the secret number: " << SECRET_NUMBER << " in " << attempts << " attempts!" << endl;
	
	return 0;
}