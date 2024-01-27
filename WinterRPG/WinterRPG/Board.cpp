#include "Board.h"


CBoard::CBoard()
{
	Position.X = 15;
	Position.Y = 15;
}

CBoard::~CBoard()
{
}

void CBoard::Tick()
{
}

void CBoard::Render()
{
	gotoxy(0, 0);

	for (int i = 0; i < Position.Y; ++i) {
		for (int j = 0; j < Position.X; ++j) {
			if (i == 0 || j == 0 || i == Position.Y - 1 || j == Position.X - 1) {
				std::cout << "бс";
			}
			else
				std::cout << "  ";
		}
		std::cout << std::endl;
	}
}
