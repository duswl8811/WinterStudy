#include "Player.h"
#include "Component.h"

CPlayer::CPlayer()
{
	Position.X = 5;
	Position.Y = 5;

	Shape = "P";

	// Add Test (lotus 2024-01-27-12:45)
	//CComponent* Component = new CComponent;
	//AddComponent(Component);
}

CPlayer::~CPlayer()
{
}