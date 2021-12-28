#pragma once
#include "Action.h"
#include "Grid.h"


class DeleteGameObject: public Action
{
	CellPosition SelectedCell;
	
public:
	DeleteGameObject(ApplicationManager *pApp);



	virtual void ReadActionParameters() ; 
											

	virtual void Execute() ; 

	virtual ~DeleteGameObject();
};


