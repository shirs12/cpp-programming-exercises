#include<iostream>
using namespace std;
#include<math.h>

int main() {
	// 1
	cout << "Hello World!\n" << endl;

	// 2
	int nFirstNum;
	int nSecondNum;

	cout << "Enter first number: ";
	cin >> nFirstNum;

	cout << "\nEnter second number: ";
	cin >> nSecondNum;

	if (cin.fail())
	{
		cin.clear(); // clears the stream
		cout << -1;
	}
	else {

		cout << "\nSum = " << nFirstNum + nSecondNum << "\n";

		cout << "Sub = " << abs(nFirstNum - nSecondNum) << "\n";

		cout << "Mul = " << nFirstNum * nSecondNum << "\n";

		cout << "Sub = " << nFirstNum % nSecondNum << "\n" << endl;
	}

	// 3
	int nHeight;
	int nWidth;

	cout << "Enter height: ";
	cin >> nHeight;

	cout << "\nEnter width: ";
	cin >> nWidth;

	if (cin.fail())
	{
		cin.clear(); // clears the stream
		cout << -1;
	}
	else {
		cout << "\nArea: " << nHeight * nWidth;

		cout << "\nPerimeter: " << (nHeight * 2) + (nWidth * 2);
	}

	// 4
	int nFirstNumber;
	int nSecondNumber;
	int nThirdNumber;

	cout << "\nEnter first number: ";
	cin >> nFirstNumber;

	cout << "\nEnter second number: ";
	cin >> nSecondNumber;

	cout << "\nEnter third number: ";
	cin >> nThirdNumber;

	if (cin.fail())
	{
		cin.clear();
		cout << -1;
	}
	else {
		cout << "Average: " << (nFirstNumber + nSecondNumber + nThirdNumber) / 3;
	}

	// 5
	int nRadius;
	const float PI = 3.14159265359;

	cout << "\nEnter radius: ";
	cin >> nRadius;

	if (!cin)
	{
		cin.clear();
		cout << -1;
	}
	else {
		cout << "\nPerimeter: " << 2 * PI * nRadius;
		cout << "\nArea: " << PI * nRadius * nRadius;
	}




}