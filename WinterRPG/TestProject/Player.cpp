#include "Player.h"

#include <iostream>
using namespace std;

CDog::CDog()
{
	cout << "CDog Create" << endl;
}

CDog::~CDog()
{
	cout << "CDog Delete : " << Id << endl;
}

void CDog::Update()
{
	cout << "CDog Update : " << Id << endl;
}

void CDog::���()
{
	cout << "CDog ��� : �۸� " << Id << endl;
	//CObject::Render();
}
