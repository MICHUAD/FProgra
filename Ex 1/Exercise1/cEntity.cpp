#include "cEntity.h"

//Constructor con parametros 
cEntity::cEntity(int nPosX, int nPosY) : _nPosX(nPosX),	_nPosY(nPosY){}

int cEntity::nGetPosX() const
{
	return _nPosX;
}
void cEntity::vSetPosX(int PosX)
{
	if (PosX && PosX != _nPosX)
		_nPosX = PosX;
}

int cEntity::nGetPosY() const
{
	return _nPosY;
}
void cEntity::vSetPosY(int PosY)
{
	if (PosY && PosY != _nPosY)
		_nPosY = PosY;
}
//funcion de movimiento a partir de la posicion actual del objeto
void cEntity::vMoveObjFromPos(int nMovX, int nMovY)
{
	_nPosX += nMovX;
	_nPosY += nMovY;
}

//Funcion de movimiento a la posicion indicada.
void cEntity::vMoveObjToPos(int nMovToX, int nMovToY)
{
	_nPosX = nMovToX;
	_nPosY = nMovToY;
}



