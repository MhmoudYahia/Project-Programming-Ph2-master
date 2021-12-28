#include "GameObject.h"


GameObject::GameObject(const CellPosition & pos)
{
	if(pos.IsValidCell)  //M
	position = pos; // Sets Position
}

CellPosition GameObject::GetPosition() const
{
	return position;
}

GameObject::~GameObject()
{
}