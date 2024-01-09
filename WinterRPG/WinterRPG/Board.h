#pragma once
#include "Object.h"

class CBoard : public CObject
{
public:
	CBoard();
	~CBoard();

private:


	// CObject을(를) 통해 상속됨
	virtual void Update() override;

	virtual void Render() override;

};