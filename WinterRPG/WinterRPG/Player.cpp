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
	//�θ� ȣ���Ѵ�...

	gotoxy(X, Y);

	std::cout << "��";
}
