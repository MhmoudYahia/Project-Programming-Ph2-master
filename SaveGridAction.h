#pragma once
#include "Action.h"
#include "Grid.h"
#include<fstream>
class SaveGridAction : public Action
{
	string fn;

public:
	SaveGridAction(ApplicationManager *pApp); 

	virtual void ReadActionParameters(); 

	virtual void Execute(); 

	virtual ~SaveGridAction(); 
};



