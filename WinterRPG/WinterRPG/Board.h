#pragma once
#include "Object.h"

class CBoard : public CObject
{
public:
	CBoard();
	~CBoard();

private:


	// CObject��(��) ���� ��ӵ�
	virtual void Tick() override;

	virtual void Render() override;

};