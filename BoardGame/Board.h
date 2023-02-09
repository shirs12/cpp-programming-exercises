#include <iostream>
using namespace std;

#pragma once
class Board
{
	private:

		// TODO: change matrix to 31x31 dimensions.
		char matrix[11][11] = {};

		const int SIZE = sizeof(matrix[0]);

	public:

		// constructor
		Board() {

			// initialize top border of board game
			for (int i = 0; i < sizeof(matrix[i]); i++)
			{
				matrix[0][i] = '#';
			}

			// initialize left border of board game
			for (int i = 0; i < sizeof(matrix[i]); i++)
			{
				matrix[i][0] = '#';
			}

			// initialize bottom border of board game
			for (int i = 0; i < sizeof(matrix[i]); i++)
			{
				matrix[sizeof(matrix[i]) - 1][i] = '#';
			}

			// initialize right border of board game
			for (int i = 0; i < sizeof(matrix[i]); i++)
			{
				matrix[i][sizeof(matrix[i]) - 1] = '#';
			}

			// initialize center of board game
			for (int i = 1; i < sizeof(matrix[i]) - 1; i++)
			{
				for (int j = 1; j < sizeof(matrix[j]) - 1; j++)
				{
					matrix[i][j] = ' ';
				}
			}

		}

		// methods:

		// initialize player's point on board
		void initPlayer(char num, int row, int col) {
			if (row < 1 || row > (SIZE - 2) || col < 1 || col > (SIZE - 2))
			{
				cout << "Out of border." << endl;
			}
			else
			{
				matrix[row][col] = num;
				cout << "player placed on board successfully." << endl;
			}
		}

		// initialize winning-mat on board
		void initWinningMat(int row, int col, int height, int width) {
			if (row < 1 || row > (SIZE - 2) || col < 1 || col > (SIZE - 2)
				|| (row + height) > (SIZE - 1) || (col + width) > (SIZE - 1))
			{
				cout << "Out of border." << endl;
			}
			else
			{
				for (int i = 0; i < height; i++)
				{
					for (int j = 0; j < width; j++)
					{
						matrix[row + i][col + j] = '*';
					}
				}
				cout << "Winning-mat placed on board successfully." << endl;
			}
		}

		//checks if one of the players won
		bool isOnWinningMat(int row, int col) {
			if (matrix[row][col] == '*')
			{
				return true;
			}
			return false;
		}

		// print matrix
		void printBoard() {
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					cout << matrix[i][j] << " ";
				}
				cout << endl;  // Newline for new row
			}
		}
};

