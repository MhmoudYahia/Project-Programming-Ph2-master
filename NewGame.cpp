#include "NewGame.h"




NewGame::NewGame(ApplicationManager * pApp):Action(pApp)
{

}

void NewGame::ReadActionParameters()
{
	//no
}

void NewGame::Execute()
{
	this->pManager->GetGrid()->set_New_Info_Players();//M  class Res.
	this->pManager->GetGrid()->SetCurrPlayer(0);
	this->pManager->GetGrid()->UpdateInterface();

		// turn returns to player 0
}

NewGame::~NewGame()
{

}
