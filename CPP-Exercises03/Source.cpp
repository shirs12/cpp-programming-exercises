#include<iostream>
using namespace std;

void evenNumbers() {
	for (int i = 0; i < 101; i+=2)
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
}