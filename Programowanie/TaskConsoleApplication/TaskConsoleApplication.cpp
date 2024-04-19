#include <iostream>
#include <windows.h>
#include <conio.h>

//Pojawienie siê gwiazdki znikniêcie i znowu pojawienie siê jej w innym miejscu 


void setCursor(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void showConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

void getConsolResolution(int& consoleWidth, int& consoleHeight)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left;
	consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top;
}

int main()
{
	srand(time(0));
	int consoleWidth = 55;
	int consoleHeight = 34;
	
	getConsolResolution(consoleWidth, consoleHeight);
	showConsoleCursor(false);
	srand(time(0));
	
	while (true)
	{
		int x = rand() % consoleWidth;
		int y = rand() % consoleHeight;

		setCursor(x, y);
			std::cout << "*";

			Sleep(700);
			setCursor(x, y);
			std::cout << " ";
		
	}
}

