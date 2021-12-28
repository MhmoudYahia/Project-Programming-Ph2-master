#include "DeleteGameObject.h"

DeleteGameObject::DeleteGameObject(ApplicationManager * pApp):Action(pApp)
{

}

void DeleteGameObject::ReadActionParameters()//using input class functions to read the cliced cell
{
	Grid* pGrid = this->pManager->GetGrid();
	pGrid->GetOutput()->PrintMessage("select any cell..... ");
	this->SelectedCell=pGrid->GetInput()->GetCellClicked();
}

void DeleteGameObject::Execute()
{
	int x, y;
	Grid* pGrid = this->pManager->GetGrid();
	this->ReadActionParameters();
	bool po=pGrid->RemoveObjectFromCell(SelectedCell);//remove the cliced cell by by Grid's func. remove...
	if (po == false) {
		pGrid->GetOutput()->PrintMessage(" NOT VALID CELL.....Try again ");//case of not valid cell cliced
		pGrid->GetInput()->GetPointClicked(x, y);
	}

}

DeleteGameObject::~DeleteGameObject()
{
}
