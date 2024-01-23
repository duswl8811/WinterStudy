#pragma once
#include "Object.h"

class CPlayer : public CObject
{
public:
	CPlayer();
	~CPlayer();

private:


	// CObject을(를) 통해 상속됨
	virtual void Update() override;
	virtual void Render() override;

private:
	int inputkey = 0;
};