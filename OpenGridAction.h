#pragma once
#include "Action.h"
#include<fstream>

#include "Grid.h"
class OpenGridAction :
	public Action
{
	string fn;
	
public:
	
	OpenGridAction(ApplicationManager *pApp);

	virtual void ReadActionParameters();

	virtual void Execute();

	virtual ~OpenGridAction();
};

