#pragma once
#include "Common.h"

class CObject abstract
{
public:
	CObject();
	virtual ~CObject();

public:
	virtual void Update() = 0;
	virtual void Render() = 0;

protected:
	int X;
	int Y;

	int Id;
	int Speed;

	string Shape;
};