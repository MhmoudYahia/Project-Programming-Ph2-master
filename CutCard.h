#pragma once
#include "Action.h"
#include"Grid.h"
#include"Card.h"
class CutCard :public Action
{

	CellPosition SelectedCell;
public:

	CutCard(ApplicationManager *pApp);
	virtual void ReadActionParameters();

	virtual void Execute();
	virtual ~CutCard();
};

