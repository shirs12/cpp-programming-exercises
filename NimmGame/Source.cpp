#include<iostream>
using namespace std;

int main() {

	int nChoice = 0;
	int nFirstStackChoise = 0;
	int nSecondStackChoise = 0;

	int nAStack;
	int nBStack;
	int nCStack;

	int nFirstPlayer;
	int nSecondPlayer;

	int nFirstCoins;
	int nSecondCoins;

	while (nChoice != 2)
	{
		cout << "Menu:"
			"\n1. start the game"
			"\n2. Exit"
			"\nEnter your choice: ";
		cin >> nChoice;

		if (nChoice > 2 || nChoice < 1)
		{
			cout << "Wrong choice." << endl;
		}

		switch (nChoice)
		{
		case(1):
			cout << "\nYou chose to play!\n" << endl;

			nAStack = 0;
			nBStack = 0;
			nCStack = 0;

			nFirstPlayer = 0;
			nSecondPlayer = 0;

			cout << "Enter number of coins in A stack: ";
			cin >> nAStack;
			cout << "Enter number of coins in B stack: ";
			cin >> nBStack;
			cout << "Enter number of coins in C stack: ";
			cin >> nCStack;

			cout << "\nplayer 1"
				"\nchoose a stack: "
				"\n1. A"
				"\n2. B"
				"\n3. C"
				"\nEnter your choice: ";
			cin >> nFirstStackChoise;

			while (nFirstStackChoise < 0 || nFirstStackChoise > 3)
			{
				cout << "There is no such stack, please enter 1, 2, or 3";
				cin >> nFirstStackChoise;
			}

			switch (nFirstStackChoise)
			{
			case(1):
				nFirstPlayer = nAStack;
				break;
			case(2):
				nFirstPlayer = nBStack;
				break;
			case(3):
				nFirstPlayer = nCStack;
				break;
			default:
				break;
			}

			cout << "\nplayer 2"
				"\nchoose a stack: "
				"\n1. A"
				"\n2. B"
				"\n3. C"
				"\nEnter your choice: ";
			cin >> nSecondStackChoise;

			while (nSecondStackChoise < 0 || nSecondStackChoise > 3)
			{
				cout << "There is no such stack, please enter 1, 2, or 3";
				cin >> nFirstStackChoise;
			}

			while (nSecondStackChoise == nFirstStackChoise)
			{
				cout << "\nPlayer 1 already chose this stack, try again: ";
				cout << "\nplayer 2"
					"\nchoose a stack: "
					"\n1. A"
					"\n2. B"
					"\n3. C"
					"\nEnter your choice: ";
				cin >> nSecondStackChoise;
			}

			switch (nSecondStackChoise)
			{
			case(1):
				nSecondPlayer = nAStack;
				break;
			case(2):
				nSecondPlayer = nBStack;
				break;
			case(3):
				nSecondPlayer = nCStack;
				break;
			default:
				break;
			}

			while (nFirstPlayer > 0 && nSecondPlayer > 0)
			{
				cout << "\nPlayer 1, enter a number of coins to take from the stack: ";
				cin >> nFirstCoins;

				nFirstPlayer -= nFirstCoins;

				if (nFirstPlayer <= 0 && nSecondPlayer > 0)
				{
					cout << "\nPlayer 2 won!\n" << endl;
				}
				else
				{
					cout << "\nPlayer 2, enter a number of coins to take from the stack: ";
					cin >> nSecondCoins;

					nSecondPlayer -= nSecondCoins;
				}

				if (nSecondPlayer <= 0 && nFirstPlayer > 0)
				{
					cout << "\nPlayer 1 won!\n" << endl;
				}
			}

			break;

		case(2):
			cout << "\nYou chose to exit the game..." << endl;
			break;

		default:
			break;
		}

	}
}

