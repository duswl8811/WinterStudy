#include "Object.h"
#include <iostream>
using namespace std;


CAnimal::CAnimal()
{
	cout << "CAnimal Create : " << Id << endl;
}

CAnimal::~CAnimal()
{
	cout << "CAnimal Delete : " << Id << endl;
}

void CAnimal::Update()
{
	cout << "CAnimal Update : " << Id << endl;
}

void CAnimal::���()
{
	cout << "CAnimal ��� : " << Id << endl;
}
