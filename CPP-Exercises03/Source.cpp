#include<iostream>
using namespace std;

void evenNumbers() {
	for (int i = 0; i < 101; i += 2)
	{
		cout << i << endl;
	}
}

void countdown() {
	for (int i = 10; i >= 1; i--)
	{
		cout << i << endl;
	}
}

void calcSum() {
	int nNumber;
	int nSum = 0;

	cout << "Enter a number to calculate the sum: ";
	cin >> nNumber;

	if (nNumber < 0)
	{
		for (int i = nNumber; i < 0; i++)
		{
			nSum += i;
		}
	}
	else
	{
		for (int i = 0; i <= nNumber; i++)
		{
			nSum += i;
		}
	}

	cout << nSum << endl;
}

void indexValueFibonacci() {
	int nNumber;
	long nValue = 1;

	long nFirstNumber = 1;
	long nSecondNumber = 1;

	cout << "Enter index in fibonacci series: ";
	cin >> nNumber;

	if (nNumber == 1 || nNumber == 2)
	{
		cout << "Value: 1" << endl;
	}
	else
	{
		for (int i = 2; i < nNumber; i++)
		{
			nValue = nFirstNumber + nSecondNumber;
			nFirstNumber = nSecondNumber;
			nSecondNumber = nValue;
		}

		cout << "Value: " << nValue << endl;
	}
}

bool isPrime() {
	int nNumber;

	cout << "Enter a number: ";
	cin >> nNumber;

	if (nNumber == 2)
	{
		cout << nNumber << " number is a prime number " << endl;
		return true;
	}
	else
	{
		for (int i = 2; i < nNumber; i++)
		{
			if (nNumber % i == 0) {
				cout << nNumber << " number is NOT a prime number " << endl;
				return false;
			}
		}

		cout << nNumber << " number is a prime number " << endl;
		return true;
	}

	return false;
}

bool isPrime(int nNumber) {
	if (nNumber == 2)
	{
		return true;
	}
	else
	{
		for (int i = 2; i < nNumber; i++)
		{
			if (nNumber % i == 0) {
				return false;
			}
		}
		return true;
	}

	return false;
}

int numPrime() {
	int nNumber;
	int nCount = 0;

	cout << "Enter a number: ";
	cin >> nNumber;

	if (nNumber < 10)
	{
		cout << "Invalid input, the number should be greater than 10." << endl;
	}
	else
	{
		for (int i = 2; i < nNumber; i++)
		{
			if (isPrime(i)) {
				nCount++;
			}
		}

		cout << "There are " << nCount << " prime numbers below this number" << endl;
	}

	return nCount;
}

void printAsterisk() {
	int nNumber;

	cout << "Enter a number: ";
	cin >> nNumber;

	for (int i = 0; i < nNumber; i++)
	{
		cout << "*";
	}
}

void printSquare() {
	int nNumber;

	cout << "Enter a number: ";
	cin >> nNumber;

	for (int i = 0; i < nNumber; i++)
	{
		for (int j = 0; j < nNumber; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void printChessBoard() {
	int nNumber;

	cout << "Enter a number: ";
	cin >> nNumber;

	for (int i = 0; i < nNumber; i++)
	{
		for (int j = 0; j < nNumber; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void calcSum2() {
	int nNumber;
	int nSum = 0;

	cout << "Enter numbers (-999 to stop): " << endl;
	cin >> nNumber;

	while (nNumber != -999)
	{
		nSum += nNumber;
		cin >> nNumber;
	}
	cout << "Sum: " << nSum << endl;
}

void calcDigits() {
	int nNumber;
	int nSum = 0;

	cout << "Enter a number greater than 100: ";
	cin >> nNumber;

	if (nNumber < 100)
	{
		cout << "Error! input must be greater than 100" << endl;
	}
	else
	{
		while (nNumber > 0)
		{
			nSum += nNumber % 10;
			nNumber /= 10;
		}
		cout << nSum << endl;
	}

}

void avgNumbers() {
	int nNumber = 0;
	int nCountPositive = 0;
	int nCountNegative = 0;
	int nSum = 0;

	cout << "Enter numbers until there are three times negative numbers "
		"enterd more than positive : " << endl;

	while ((nCountPositive != (nCountNegative / 3)) || nCountPositive == 0 || nCountNegative == 0)
	{
		cin >> nNumber;
		if (nNumber > 0)
		{
			nCountPositive++;
		}
		else if (nNumber < 0)
		{
			nCountNegative++;
		}

		nSum += nNumber;
	}

	cout << "Average: " << (double)(nSum / (nCountPositive + nCountNegative));
}

//int reverseNum(int nNumber) {
//	string result;
//
//	while (nNumber != 0)
//	{
//		
//	}
//
//	return result;
//}

void methodsMenu() {
	int nChoice = 0;
	int nNumber;
	int nFirstNumber;
	int nSecondNumber;

	while (nChoice != 3)
	{
		cout << "\nMenu:"
			"\n1. to reverse order of digits"
			"\n2. to append number to another"
			"\n3. Exit"
			"\nEnter your choice: ";
		cin >> nChoice;

		if (nChoice > 3 || nChoice < 1)
		{
			cout << "Wrong choice." << endl;
		}

		switch (nChoice)
		{
		case(1):
			cout << "Enter a number: ";
			cin >> nNumber;

			cout << "Reversed: ";
			while (nNumber != 0)
			{
				cout << nNumber % 10;
				nNumber /= 10;
			}
			cout << endl;

			break;

		case(2):
			cout << "Enter two numbers: " << endl;
			cin >> nFirstNumber;
			cin >> nSecondNumber;

			cout << "Appended: " << nFirstNumber << nSecondNumber << endl;

			break;

		case(3):

			break;

		default:
			break;
		}
	}
}

int main() {
	// 23
	//evenNumbers();

	// 24
	//countdown();

	// 25
	//calcSum();

	// 26
	//indexValueFibonacci();

	// 27
	// cout << isPrime() << endl;

	// 28
	//cout << numPrime() << endl;

	// 29
	//printAsterisk();

	// 30
	//printSquare();

	// 31
	//printChessBoard();

	// 32
	//calcSum2();

	// 33
	//calcDigits();

	// 34
	//avgNumbers();

	// 35
	methodsMenu();
}

