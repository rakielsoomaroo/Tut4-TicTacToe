#pragma once

class TicTacToe
{

private:
	char grid[3][3];

public:
	
	TicTacToe();
	~TicTacToe();
	void reset();
	bool move(int row, int column);
	void print();
	char over();

};

