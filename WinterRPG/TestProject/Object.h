#pragma once

class CAnimal // �߻� Ŭ����
{
public:
	CAnimal();
	//~CObject();
	virtual ~CAnimal();

public:
	void Update();
	virtual void ���() = 0; // ?
	
protected:
	int Id;
};