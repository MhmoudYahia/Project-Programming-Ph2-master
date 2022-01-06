#include "Snake.h"


Snake::Snake(const CellPosition & startCellPos, const CellPosition & endCellPos) : GameObject(startCellPos)
{
	
	if (endCellPos.HCell() == startCellPos.HCell() && endCellPos.VCell() > startCellPos.VCell() && endCellPos.IsValidCell())
		this->endCellPos = endCellPos;
	                                                              // äÓíÈ Çávalidation  ááÇÎÑ äßæä ÝåãäÇ 

}
void Snake::Draw(Output* pOut) const
{
	pOut->DrawLadder(position, endCellPos);
}

void Snake::Apply(Grid* pGrid, Player* pPlayer)
{
	int x, y;

	
	pGrid->GetOutput()->PrintMessage("You have reached a Snake. Click to continue ...");
	pGrid->GetInput()->GetPointClicked(x, y);
	pGrid->UpdatePlayerCell(pPlayer, endCellPos);
	pGrid->UpdateInterface();          //M
}
CellPosition Snake::GetEndPosition() const
{
	return endCellPos;
}
void Snake::Save(ofstream &OutFile, GameObjectEnum g) {
	if (g == snake) {
		
		OutFile << this->GetPosition().GetCellNum() << " " << this->GetEndPosition().GetCellNum() << endl;
		
	}
}
void Snake::Load(ifstream &Infile, GameObjectEnum g) {
	if (g == snake) {

	

	}
}
Snake::~Snake()
{
}
