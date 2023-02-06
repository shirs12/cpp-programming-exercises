#include<iostream>
using namespace std;

void primes(int nNumber) {
	int i = 2;

	while (nNumber > 1)
	{
		if (nNumber % i == 0)
		{
			cout << i;
			nNumber /= i;
		}
		else
		{
			i++;
		}
	}
}

void secretCode(int nKey) {
	int nNumber;
	nNumber = nKey;

	while (nNumber > 0)
	{
		nNumber = nKey % 100;
		nKey /= 100;

		primes(nNumber);
	}

}

int main() {
	int nNumber;

	cout << "Enter key number: " << endl;
	cin >> nNumber;

	secretCode(nNumber);

}