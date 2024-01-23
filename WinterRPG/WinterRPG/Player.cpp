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

	// 준하가 열심히 플레이어 개발 중

	// 어쩌고 예쁘게 만드는 중
}
