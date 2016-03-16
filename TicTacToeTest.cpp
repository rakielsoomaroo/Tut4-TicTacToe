#include "TicTacToe.h"

#include<iostream>

using namespace std;

int main()
{
	char grid[3][3];
	
	//TicTacToe obj;

	TicTacToe obj();

	obj.reset();
	int r, c;
	cout << "enter a row to move" << endl;
	cin >> r ;
	cout << "enter a column to move" << endl;
	cin >> c;
	bool move = obj.move(r, c);
	obj.print();
	char w = obj.over();
	cout << "the winner is " << w << endl;
}
