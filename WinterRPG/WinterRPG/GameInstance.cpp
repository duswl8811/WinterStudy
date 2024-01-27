#include "GameInstance.h"
#include "Common.h"
#include "Player.h"
#include "Board.h"

CGameInstance::CGameInstance()
{
}

CGameInstance::~CGameInstance()
{
}

void CGameInstance::Init()
{
	CObject* Board = new CBoard();
	Objects.emplace_back(Board);

	CObject* Player = new CPlayer();
	Objects.emplace_back(Player);
}

void CGameInstance::Tick()
{
	if (_kbhit())
	{
		key = _getch();
	}

	for (CObject* Object : Objects)
	{
		Object->Tick();
	}
}

void CGameInstance::Render()
{
	for (CObject* Object : Objects)
	{
		Object->Render();
	}
}

void CGameInstance::Destroy()
{
}
