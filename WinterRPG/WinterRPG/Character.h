#pragma once
#include "Object.h"

class CCharacter : public CObject
{
public:
	CCharacter();
	~CCharacter();

protected:
	// CObject��(��) ���� ��ӵ�
	virtual void Tick() override;
	virtual void Render() override;

};