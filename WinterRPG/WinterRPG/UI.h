#pragma once
#include "Object.h"

class CUI : public CObject
{
private:
	// CObject��(��) ���� ��ӵ�
	virtual void Tick() override;
	virtual void Render() override;
};

