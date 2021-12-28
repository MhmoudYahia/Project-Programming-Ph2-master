#pragma once

#include "GameObject.h"

class Snake: public GameObject
{
	CellPosition endCellPos;
public:
	Snake(const CellPosition & startCellPos, const CellPosition & endCellPos);
	virtual void Draw(Output* pOut) const;
	virtual void Apply(Grid* pGrid, Player* pPlayer);
	CellPosition GetEndPosition() const; 
	void Save(ofstream &OutFile, GameObjectEnum g);
	void Load(ifstream &Infile, GameObjectEnum g);
	virtual ~Snake(); 

};

