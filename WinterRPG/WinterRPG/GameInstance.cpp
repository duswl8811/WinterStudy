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

	//Board->Render();
}

void CGameInstance::Update()
{

	int input = _kbhit();
	key = 0;
	if (input)
	{
		key = _getch();
	}
	cout << key << endl;
}

void CGameInstance::Render()
{
	system("cls");

	//Objects[1]->Render();

	for (CObject* Object : Objects)
	{
		Object->Render();
	}

	//for (int i = 1; i < Objects.size(); ++i)
	//{
	//	Objects[i]->Render();
	//}

	//for (vector<CObject*>::iterator iter = Objects.begin() + 1; iter != Objects.end(); ++iter)
	//{
	//	(*iter)->Render();
	//}
}

void CGameInstance::Destroy()
{
}
