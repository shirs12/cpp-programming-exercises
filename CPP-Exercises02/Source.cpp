#include<iostream>
#include<algorithm>
using namespace std;

// binary function
bool cmp(int x, int y) {
	return (x < y);
}

void maxNumber() {
	int nFirstNumber;
	int nSecondNumber;
	int nThirdNumber;

	int nMax;

	cout << "Enter three numbers: " << endl;
	cin >> nFirstNumber;
	cin >> nSecondNumber;
	cin >> nThirdNumber;

	cout << max({ nFirstNumber, nSecondNumber, nThirdNumber }, cmp) << endl;
}

void numName() {
	int nNumber;
	string numberNames[10] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten" };

	cout << "Enter a number (1-10): " << endl;
	cin >> nNumber;

	if (nNumber < 1 || nNumber > 10)
	{
		cout << "Wrong input" << endl;
	}
	else
	{
		cout << numberNames[nNumber - 1] << endl;
	}

}

void securityAdmission() {
	int nAge;
	int nHeight;

	cout << "Enter age: " << endl;
	cin >> nAge;

	cout << "Enter height: " << endl;
	cin >> nHeight;

	if (((nAge >= 20 && nAge <= 30) || (nAge >= 40 && nAge <= 50)) && (nHeight > 180))
	{
		cout << "Qualified" << endl;
	}
	else
	{
		cout << "Not qualified" << endl;
	}

}

void sevenBoom() {
	int nNumber;

	cout << "Enter a number (1-999): " << endl;
	cin >> nNumber;

	if ((nNumber < 1 || nNumber > 999))
	{
		cout << "Number is out of bounds" << endl;
	}
	else if ((nNumber % 7 == 0) || (nNumber % 10 == 7) || (nNumber / 100 == 7) || (((nNumber / 10) % 10) == 7))
	{
		cout << "BOOM" << endl;
	}
}

int main() 
{
	// 19
	//maxNumber();

	// 20
	//numName();

	// 21
	//securityAdmission();

	// 22
	sevenBoom();

}



