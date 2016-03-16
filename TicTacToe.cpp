#include "TicTacToe.h"
#include <iostream>

using namespace std;




TicTacToe::TicTacToe()
{
	grid[3][3] = { { ' ', ' ', ' ' },
	               { ' ', ' ', ' ' },
	               { ' ', ' ', ' ' } };
}


TicTacToe::~TicTacToe()
{
}

void TicTacToe :: reset()
{
	grid[3][3] = { { ' ', ' ', ' ' },
	               { ' ', ' ', ' ' },
	               { ' ', ' ', ' ' } };
}

bool TicTacToe::move(int row, int column)
{
	if (row >= 0)
	{
		if (row <= 2)
		{
			return true;
		}
		else
			return false;
	}
	else
		return false;

}

void TicTacToe::print()
{
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cout << grid[r][c] << endl;
		}
	}
}

char TicTacToe::over()
{

	char winner;
	char player1 = 'x', player2 = 'o';

	for (int r = 0; r < 3; r++)
	{
		if ((asc(grid[r][0]) == asc(grid[r][1])) && (asc(grid[r][1]) == asc(grid[r][2])) && (asc(grid[r][2]) == asc('x')))
		{
			winner = player1;

		}
		else if ((asc(grid[r][0]) == asc(grid[r][1])) && (asc(grid[r][1]) == asc(grid[r][2])) && (asc(grid[r][2]) == asc('o')))
		{
			winner = player2;
		}

	}

	for (int c = 0; c < 3; c++)
	{
		if ((asc(grid[0][c]) == asc(grid[1][c])) && (asc(grid[1][c]) == asc(grid[2][c])) && (asc(grid[2][c]) == asc('x')))
		{
			winner = player1;
		}
		else if ((asc(grid[r][0]) == asc(grid[r][1])) && (asc(grid[r][1]) == asc(grid[r][2])) && (asc(grid[r][2]) == asc('o')))
		{
			winner = player2;
		}
	}

	for (int d = 0; d < 3; d++)
	{
		if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[2][2] == 'x')
		{
			winner = player1;
		}
		else if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[2][2] == 'o')
		{
			winner = player2;
		}

	}

	if (winner == ' ')
	{
		cout << "draw" << endl;
	}

	return winner;
}