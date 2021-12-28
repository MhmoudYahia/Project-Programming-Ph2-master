#pragma once
#include "Card.h"
class Card12 :	public Card
{
public:
	Card12(const CellPosition & pos); 

	virtual void ReadCardParameters(Grid * pGrid);

	virtual void Apply(Grid* pGrid, Player* pPlayer); 

	virtual ~Card12(); // A Vir
};

