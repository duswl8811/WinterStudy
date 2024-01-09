#include "Board.h"


CBoard::CBoard()
{
	X = 15;
	Y = 15;
}

CBoard::~CBoard()
{
}

void CBoard::Update()
{
}

void CBoard::Render()
{
	gotoxy(0, 0);

	for (int i = 0; i < Y; ++i) {
		for (int j = 0; j < X; ++j) {
			if (i == 0 || j == 0 || i == Y - 1 || j == X - 1) {
				std::cout << "бс";
			}
			else
				std::cout << "  ";
		}
		std::cout << std::endl;
	}
}
