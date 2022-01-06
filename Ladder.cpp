#include "Ladder.h"

Ladder::Ladder(const CellPosition & startCellPos, const CellPosition & endCellPos) : GameObject(startCellPos)
{

	if(endCellPos.HCell()== startCellPos.HCell()&& endCellPos.VCell() > startCellPos.VCell()&&endCellPos.IsValidCell())
	this->endCellPos = endCellPos;

	///TODO: Do the needed validation 
}
//
//Ladder::Ladder()
//{
//	CellPosition def(23);      //default end pos
//	this->endCellPos = def;
//}

void Ladder::Draw(Output* pOut) const
{
	pOut->DrawLadder(position, endCellPos);
}

void Ladder::Apply(Grid* pGrid, Player* pPlayer) 
{
	int x, y;

	///TODO: Implement this function as mentioned in the guideline steps (numbered below) below


	// == Here are some guideline steps (numbered below) to implement this function ==
	
	// 1- Print a message "You have reached a ladder. Click to continue ..." and wait mouse click

	// 2- Apply the ladder's effect by moving the player to the endCellPos
	//    Review the "pGrid" functions and decide which function can be used for that
	pGrid->GetOutput()->PrintMessage("You have reached a ladder. Click to continue ...");
	pGrid->GetInput()->GetPointClicked(x,y);
	pGrid->UpdatePlayerCell(pPlayer, endCellPos);
	pGrid->UpdateInterface();          //M
}

void Ladder::setendposition(CellPosition c)
{
	endCellPos = c;
}

CellPosition Ladder::GetEndPosition() const
{
	return endCellPos;
}
void Ladder::Save(ofstream &OutFile, GameObjectEnum g) {
	if (g == ladder) {
		
		OutFile << this->GetPosition().GetCellNum() << " " << this->GetEndPosition().GetCellNum() << endl;
		
	}
}
 void Ladder::Load(ifstream &Infile) {
	 int a, b;
	 Infile >> a >> b;
	 CellPosition strtp(a), endp(b);
	 this->SetPostion(strtp);
	 this->setendposition(endp);
 }
Ladder::~Ladder()
{
}
