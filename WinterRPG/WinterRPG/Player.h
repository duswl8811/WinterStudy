#pragma once
#include "Object.h"

class CPlayer : public CObject
{
public:
	CPlayer();
	~CPlayer();

private:


	// CObject��(��) ���� ��ӵ�
	virtual void Update() override;
	virtual void Render() override;

private:
	int inputkey = 0;
};