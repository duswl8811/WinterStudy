#pragma once
#include <vector>

const int Key_ESC = 27;

class CObject;

class CGameInstance
{
public:
	CGameInstance();
	~CGameInstance();

public:
	void Init();
	void Update();
	void Render();
	void Destroy();

	bool IsNeedDestroy() { return key == Key_ESC; };

private:
	int key = 0;

	std::vector<CObject*> Objects;

};

