#pragma once
#ifndef CENTITY_H
#define CENTITY_H
#include "std_lib_facilities.h"

class cEntity {
//nivel de acceso para las variables como privado
private:
	int _nPosX = 0;
	int _nPosY = 0;

public:
	//constructor default en posision 0,0
	cEntity(int nPosX = 0, int nPosY = 0);

	//setters y getters de las variables privadas.
	int nGetPosX() const;
	void vSetPosX(int PosX);

	int nGetPosY() const;
	void vSetPosY(int PosY);

	//funcion de movimiento
	void vMoveObjFromPos(int nMovX, int nMovY);
	void vMoveObjToPos(int nMovX, int nMovY);

	//funcion virtual de dibujo
	virtual void vDrawFig() const = 0;
};

#endif