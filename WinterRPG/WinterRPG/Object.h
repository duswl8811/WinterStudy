#pragma once
#include "Common.h"

struct SPosition
{
	int X = 0; int Y = 0;

	SPosition() {}
	SPosition(int InX, int InY) : X(InX), Y(InY) {}
};

class CComponent;

class CObject abstract
{
public:
	CObject();
	virtual ~CObject();

public:
	virtual void Tick() = 0;
	virtual void Render() = 0;

public:
	void AddComponent(const CComponent* InComponent);
	void ClearComponents();

protected:
	SPosition Position;
	int Id = None_Id;
	string Shape;

	bool IsCanTick = true;

	map<string, CComponent*> Components;
};