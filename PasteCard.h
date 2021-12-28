#pragma once
#include "Action.h"
#include"Grid.h"
#include"Card.h"
class PasteCard :
	public Action
{
	CellPosition SelectedCell;
public:

	PasteCard(ApplicationManager *pApp);
	virtual void ReadActionParameters();


	virtual void Execute();
	virtual ~PasteCard();

};

