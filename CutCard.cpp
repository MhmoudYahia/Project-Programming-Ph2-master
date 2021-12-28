#include "CutCard.h"

CutCard::CutCard(ApplicationManager * pApp):Action(pApp)
{

}

void CutCard::ReadActionParameters()//M
{
	Grid* pGrid = this->pManager->GetGrid();
	pGrid->GetOutput()->PrintMessage("click on the source cell.....");
	this->SelectedCell = pGrid->GetInput()->GetCellClicked();
}

void CutCard::Execute()//M
{
	Grid* pGrid = this->pManager->GetGrid();
	this->ReadActionParameters();
	Card* CRD = pGrid->CheckACard(SelectedCell);//check if this pos. has card or not
	if (CRD = NULL)
		return;
	pGrid->SetClipboard(CRD);
	pGrid->RemoveObjectFromCell(SelectedCell);//remove it
	pGrid->UpdateInterface();
}

CutCard::~CutCard()
{
}
