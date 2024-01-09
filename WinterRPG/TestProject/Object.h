#pragma once

class CAnimal // 추상 클래스
{
public:
	CAnimal();
	//~CObject();
	virtual ~CAnimal();

public:
	void Update();
	virtual void 울다() = 0; // ?
	
protected:
	int Id;
};