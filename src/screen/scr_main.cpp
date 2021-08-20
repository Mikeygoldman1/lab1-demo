// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6};
	myScreen.clear(' ');
	myScreen.home();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.move(2,2);
	myScreen.set('*');
	myScreen.move(3,3);
	myScreen.set('*');
	myScreen.move(3,4);
	myScreen.set('*');
	myScreen.move(2,5);
	myScreen.set('*');
	myScreen.move(1,6);
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	

	myScreen.display();
	cout << endl;




	return 0;
}

