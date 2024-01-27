#include "Object.h"
#include "Component.h"

CObject::CObject()
{
}

CObject::~CObject()
{
	ClearComponents();
}

void CObject::Tick()
{
	if (IsCanTick == false)
	{
		return;
	}
}

void CObject::Render()
{
	gotoxy(Position.X, Position.Y);
	cout << "¡¡";
	
	gotoxy(Position.X, Position.Y);
	cout << Shape;
}

void CObject::AddComponent(const CComponent* InComponent)
{
	Components.emplace(InComponent->GetName(), const_cast<CComponent*>(InComponent));
}

void CObject::ClearComponents()
{
	for (auto Component : Components)
	{
		delete Component.second;
		Component.second = nullptr;
	}
	Components.clear();
}
