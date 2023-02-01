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

	// 6
	char cLetter;
	cout << "\nEnter a lower-case letter: ";
	cin >> cLetter;

	if (int(cLetter) < 97 || int(cLetter) > 122)
	{
		cin.clear();
		cout << -1;
	}
	else {
		cout << "\nUppercase: " << char(toupper(cLetter));
	}
	
	// 7
	float nPrice;
	int nDisksNumber;

	cout << "\nEnter price of a disk: ";
	cin >> nPrice;
	cout << "\nEnter number of disks: ";
	cin >> nDisksNumber;

	if (!nPrice || !nDisksNumber)
	{
		cin.clear();
		cout << -1;
	}
	else {
		int result = floor(nPrice * nDisksNumber);
		cout << "\nPay " << result << " NIS";

	// 8
		cout << "\nPay " << ((result / 5) * 5) << " NIS";
	}

	

	// 9
	int nFirstN;
	int nSecondN;
	int nThirdN;

	bool bIsIncremental;

	cout << "\nEnter three numbers: " << endl;
	cin >> nFirstN;
	cin >> nSecondN;
	cin >> nThirdN;

	bIsIncremental = (nFirstN < nSecondN) && (nSecondN < nThirdN);

	cout << "Is incremental: " << bIsIncremental;
	

	// 10
	int nCenterX;
	int nCenterY;
	int nRadiusNum;

	int nX;
	int nY;

	bool bOnCircle;

	cout << "\nEnter center point (x,y): " << endl;
	cin >> nCenterX;
	cin >> nCenterY;

	cout << "\nEnter radius: " << endl;
	cin >> nRadiusNum;

	cout << "\nEnter another point (x,y): " << endl;
	cin >> nX;
	cin >> nY;

	bOnCircle = (sqrt(nCenterX - nX) + sqrt(nCenterY - nY)) < sqrt(nRadiusNum);

	cout << "\nIs on circle: " << bOnCircle << endl;
	

	// 11
	char cChar;
	bool bIsLetter;

	cout << "\nEnter a character: " << endl;
	cin >> cChar;

	bIsLetter = (int(cChar) > 64 && int(cChar) < 91) || (int(cChar) > 96 && int(cChar) < 123);

	cout << "Is English: " << bIsLetter << endl;
	
	// 12
	int nFNumber;
	int nSNumber;

	bool bIsDiv;

	cout << "\nEnter two numbers: " << endl;
	cin >> nFNumber;
	cin >> nSNumber;

	bIsDiv = (nFNumber % nSNumber) == 0 || (nSNumber % nFNumber) == 0;

	cout << "Divisable: " << bIsDiv << endl;
	


}