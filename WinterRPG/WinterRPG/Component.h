#pragma once
#include "Common.h"

class CComponent
{
public:
	CComponent();
	virtual ~CComponent();

public:
	inline	string	GetName() const { return string(typeid(this).name()); }
};