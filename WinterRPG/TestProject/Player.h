#pragma once
#include "Object.h"

class CDog : public CAnimal
{
public:
	CDog();
	~CDog();

public:
	// CObject��(��) ���� ��ӵ�
	virtual void Update();
	virtual void ���() override;

};