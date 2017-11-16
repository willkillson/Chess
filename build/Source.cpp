
#include <iostream>
#include <Windows.h>
#include "Board.h"
#include "Piece.h"



void MoveCursor(int x, int y) 
{
//This function moves the console cursor to the cordinates x,y where 0,0 is the top left
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = x;
	Position.Y = y;
	SetConsoleCursorPosition(hOut, Position);


	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}


int main()
{

	std::cout << "Hello world!" << std::endl;

	MoveCursor(5, 5);
	std::cout << "Hello world!" << std::endl;
}