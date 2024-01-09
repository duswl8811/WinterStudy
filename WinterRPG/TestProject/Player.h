#pragma once
#include "Object.h"

class CDog : public CAnimal
{
public:
	CDog();
	~CDog();

public:
	// CObject을(를) 통해 상속됨
	virtual void Update();
	virtual void 울다() override;

};