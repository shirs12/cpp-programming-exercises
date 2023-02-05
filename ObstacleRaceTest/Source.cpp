#include<iostream>
using namespace std;

int main()
{
	int nMaxSpeed;
	double nFinalSpeed = 0.0;
	int nDefences;
	int nObstacle;

	int DISTANCE = 50000;
	int MINUTES = 20;

	cout << "To start the obstacle race test, please enter: " << endl;

	cout << "Maximum car speed (Meters per Minute) -> " << endl;
	cin >> nMaxSpeed;

	cout << "Number of car defences (1 - 5) -> " << endl;
	cin >> nDefences;

	if (nDefences < 1 || nDefences > 5)
	{
		cout << "A car cannot finish the race with 0 defences,"
			" and cannot have more than 5 defences" << endl;
		exit(10);
	}

	cout << "To start the test pick an obstacle the car will face"
		"\n1 - Oil Pod\n2 - Metal Ball\n3 - Ignite Turbo\n4 - Land Rocket\n--> " << endl;
	cin >> nObstacle;

	switch (nObstacle)
	{
	case(1):
		nFinalSpeed = (double)nMaxSpeed / 2;
		nDefences--;
		
		break;

	case(2):
		nFinalSpeed = (double)nMaxSpeed / 3;
		nDefences -= 3;

		break;

	case(3):
		nFinalSpeed = (double)pow(nMaxSpeed, 2);

		break;

	case(4):
		nFinalSpeed = 0.0;
		nDefences = 0;

		break;

	default:
		cout << "Code picked was incorrect" << endl;
		exit(10);

		break;
	}

	if (nDefences <= 0 || nMaxSpeed <= 0 || nFinalSpeed <= 0 
		|| ((((DISTANCE / 2) / nMaxSpeed) + ((DISTANCE / 2) / nFinalSpeed)) >= MINUTES))
	{
		cout << "The driver has finished the track unsuccessfully..." << endl;
	}

	else
	{
		cout << "The driver has finished the track successfully!" << endl;
	}




}

