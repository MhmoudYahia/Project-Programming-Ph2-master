#include "SaveGridAction.h"

SaveGridAction::SaveGridAction(ApplicationManager *pApp) : Action(pApp)
{
	// Initializes the pManager pointer of Action with the passed pointer
}

void SaveGridAction::ReadActionParameters() {
	Grid* pGrid=this->pManager->GetGrid();
	pGrid->GetOutput()->PrintMessage(" Enter file name ...clic to continue");
	this->fn = pGrid->GetInput()->GetSrting(pManager->GetGrid()->GetOutput());

}

void SaveGridAction::Execute()
{

	this->ReadActionParameters();
	ofstream outfile;
	outfile.open(fn, ios::out);
	outfile<<this->pManager->GetGrid()->GetLaddersNum()<<endl;
	this->pManager->GetGrid()->SaveAll(outfile, ladder);

	outfile << this->pManager->GetGrid()->GetsnakesNum() << endl;
	this->pManager->GetGrid()->SaveAll(outfile, snake);

	outfile << this->pManager->GetGrid()->GetCardsNum() << endl;
	this->pManager->GetGrid()->SaveAll(outfile, card);
	outfile.close();

}

SaveGridAction::~SaveGridAction()
{
}
