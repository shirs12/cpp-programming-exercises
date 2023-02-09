#include <iostream>
using namespace std;

#pragma once
class Player
{
	public:
		char cNumber = '0';
		int nStartPointRow = 0;
		int nStartPointCol = 0;
		int nCurrentPointRow = 0;
		int nCurrentPointCol = 0;

		Player(char num, int row, int col){
			cNumber = num;

			if (row < 0 || col < 0)
			{
				cout << "Out of border." << endl;
				return;
			}

			nStartPointRow = row;
			nStartPointCol = col;
			nCurrentPointRow = row;
			nCurrentPointCol = col;
		}



		void moveUp() {
			if (nCurrentPointRow-- < 0)
			{
				cout << "Out of border." << endl;
			}
			else
			{
				nCurrentPointRow--;
			}
		}

		void moveDown() {
			nCurrentPointRow++;
		}

		void moveLeft() {
			if (nCurrentPointCol-- < 0)
			{
				cout << "Out of border." << endl;
			}
			else
			{
				nCurrentPointCol--;
			}
		}

		void moveRight() {
			nCurrentPointCol++;
		}


};

