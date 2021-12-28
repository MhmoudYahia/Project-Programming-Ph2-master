#include "PasteCard.h"

PasteCard::PasteCard(ApplicationManager * pApp):Action(pApp)
{
}

void PasteCard::ReadActionParameters()//M
{

	Grid* pGrid = this->pManager->GetGrid();
	pGrid->GetOutput()->PrintMessage("click on the destination cell.....");
	this->SelectedCell = pGrid->GetInput()->GetCellClicked();
}

void PasteCard::Execute()//M
{

	Grid* pGrid = this->pManager->GetGrid();
	this->ReadActionParameters();
	Card* SavedCard = pGrid->GetClipboard(); //get the card saved
    bool bo=pGrid->AddObjectToCell(SavedCard);// then add it if valid
	if (bo)
		pGrid->UpdateInterface();      // if added update the interface
	//else pGrid->GetOutput()->PrintMessage("Clic on another Cell.....");
}

PasteCard::~PasteCard()
{
}
