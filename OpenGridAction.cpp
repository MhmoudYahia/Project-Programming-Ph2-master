#include "OpenGridAction.h"

OpenGridAction::OpenGridAction(ApplicationManager *pApp) : Action(pApp)
{
	// Initializes the pManager pointer of Action with the passed pointer
}
 void OpenGridAction::ReadActionParameters() {
	Grid* pGrid = this->pManager->GetGrid();
	pGrid->GetOutput()->PrintMessage(" Enter file name ...clic to continue");
	 this->fn =pGrid->GetInput()->GetSrting(pManager->GetGrid()->GetOutput());

}
                                                     // ÇÊÔß ÇÓã ÇáãáÝ ãæÌæÏ æáÇ
 void OpenGridAction::Execute()
 {
	 int numOfLadders, numOfSnakes, numOfcards;
	 ifstream infile;
	 this->ReadActionParameters();
	 infile.open(fn, ios::in);
	 GameObject * pObj;
	 infile >> numOfLadders;
	 for (int i = 0; i < numOfLadders; i++) {
		 Ladder*L;
		// this->pManager->GetGrid()->AddObjectToCell()
	 }
	 /*this->pManager->GetGrid()->OpenAll(infile, ladder);
	 this->pManager->GetGrid()->OpenAll(infile, snake);
	 this->pManager->GetGrid()->OpenAll(infile, card);*/
	 infile.close();
 }

 OpenGridAction::~OpenGridAction()
 {

	 
 }
