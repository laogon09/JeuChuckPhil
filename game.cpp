#include "game.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "hero.h"
using namespace std;


Game::Game()
{
	mapName = "";
	menuON = true;
	gameON = false;
	createMenu();
}

Game::~Game()
{
	//delete game;
}

void Game::createMenu()
{
	int choix;
	while (menuON) {
		//system("cls");
		cout << "Main menu";
		cout << "\n\n\n\n";
		cout << "Please choose between the following options" << endl;
		cout << "1: New game" << endl;
		cout << "2: Load game" << endl;
		cout << "3: Options" << endl;
		cout << "4: Exit" << endl;
		//cout << "5: test hero" << endl;

	
		cin >> choix;

		switch (choix)
		{
		case 1:
			system("cls");
			createNewGame();
			//error();
			break;
		case 2:
			//system("cls");
			//loadSavedGame();
			error();
			break;
		case 3:
			//system("cls");
			//openOptions();
			error();
			break;
		case 4:
			closeApp();
			break;
		/*case 5:
		{
			Hero hero1;
			hero1.afficher();
			hero1.addAttack("iceball");
			hero1.addAttack("thunderbolt");
			hero1.set_costume("naked");
			hero1.afficher();
		}
			break;*/
		default:
			system("cls");
			cout << "This option is invalid" << endl;
			cout << "Press any key to return to the main menu";
			//system("pause");
			_getch();
		}
	}
	while (gameON)
	{
		cout << "c'est ca a date" << endl;
		system("pause");
	}
}

void Game::createNewGame()
{
	menuON = false;
	gameON = true;
	mapName = "mapTest.txt";
	Map presentMap(mapName);
	presentMap.afficherGrid();
}

void Game::loadSavedGame()
{

}

void Game::openOptions()
{

}

void Game::closeApp()
{
	menuON = false;
}

int Game::get_state()
{
	return state;
}

void Game::set_state(int etat)
{
	state = etat;
}

void Game::error() {
	system("cls");
	cout << "THIS OPTION IS CURRENTLY UNAVAILABLE      :(" << endl;
	cout << "Press any key to return to the menu";
	//system("pause");
	_getch();
}