#include "CopyCard.h"

CopyCard::CopyCard(ApplicationManager * pApp):Action(pApp)
{

}

void CopyCard::ReadActionParameters()//M
{
	Grid* pGrid=this->pManager->GetGrid();
	pGrid->GetOutput()->PrintMessage("click on the source cell.....");
	this->SelectedCell=pGrid->GetInput()->GetCellClicked();

}

void CopyCard::Execute()//M
{
	Grid* pGrid=this->pManager->GetGrid();
	this->ReadActionParameters();
	Card* CRD = pGrid->CheckACard(SelectedCell);//check if this pos. has card or not
	if (CRD = NULL)
		return;
	pGrid->SetClipboard(CRD);
}

CopyCard::~CopyCard()
{
}
