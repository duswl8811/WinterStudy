#include "Player.h"


CPlayer::CPlayer()
{
	X = 5;
	Y = 5;
}

CPlayer::~CPlayer()
{
}

void CPlayer::Update()
{
}

void CPlayer::Render()
{
	//부모를 호출한다...

	gotoxy(X, Y);

	std::cout << "▣";
}
