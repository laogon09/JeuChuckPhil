#include <stdlib.h>
#include <iostream>
#include "game.h"

using namespace std;



int main()
{
	Game gameInterface;
	if (gameInterface.gameON)
	{
		cout << "Hello world" << endl;
	}
	else
	{
		return 0;
	}

	return 0;
}
