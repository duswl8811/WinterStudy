#include <iostream>
#include "Player.h"
#include "Bird.h"
#include "Cat.h"

using namespace std;

int main()
{
	//CAnimal Object(1);
	
	CDog* Player = new CDog();
	delete Player;

	cout << endl;

	CAnimal* Player2 = new CCat(); // Upcasting
	cout << endl;

	Player2->Update();
	Player2->¿ï´Ù();
	
	cout << endl;
	delete Player2;



}