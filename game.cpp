#include "game.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


Game::Game()
{
	gameON = true;
	createMenu();
}

Game::~Game()
{

}

void Game::createMenu()
{
	int choix;
	while (gameON) {
		system("cls");
		cout << "Main menu";
		cout << "\n\n\n\n";
		cout << "Please choose between the following options" << endl;
		cout << "1: New game" << endl;
		cout << "2: Load game" << endl;
		cout << "3: Options" << endl;
		cout << "4: Exit" << endl;

	
		cin >> choix;

		switch (choix)
		{
		case 1:
			//createNewGame();
			error();
			break;
		case 2:
			//loadSavedGame();
			error();
			break;
		case 3:
			//openOptions();
			error();
			break;
		case 4:
			closeApp();
			break;
		default:
			system("cls");
			cout << "This option is invalid" << endl;
			cout << "Press any key to return to the main menu";
			//system("pause");
			_getch();
		}
	}
}

void Game::createNewGame()
{

}

void Game::loadSavedGame()
{

}

void Game::openOptions()
{

}

void Game::closeApp()
{
	gameON = false;
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