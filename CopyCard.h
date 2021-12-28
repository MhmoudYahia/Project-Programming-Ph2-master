#pragma once
#include"Action.h"
#include"Grid.h"
#include"Card.h"
class CopyCard:public Action
{
	CellPosition SelectedCell;
public:

	CopyCard(ApplicationManager *pApp);
	virtual void ReadActionParameters(); 
											 

	virtual void Execute();  
	virtual ~CopyCard();
};

