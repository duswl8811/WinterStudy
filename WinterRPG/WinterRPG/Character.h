#pragma once
#include "Object.h"

class CCharacter : public CObject
{
public:
	CCharacter();
	~CCharacter();

protected:
	// CObject을(를) 통해 상속됨
	virtual void Tick() override;
	virtual void Render() override;

};