#pragma once
#ifndef CFIGURA_H
#define CFIGURA_H

#include "cEntity.h"

class cFigura : public cEntity {
public:
	//Constructor heredado.
	cFigura(int nPosX, int nPosY) : cEntity(nPosX, nPosY){}

	//Funcion calculo Area
	virtual float fGetArea()const = 0;

};
#endif

#ifndef CCIRCULO_H
#define CCIRCULO_H


class cCirculo : public cFigura {
private:
	float _fRadio = 0.0f;
public:
	cCirculo(int nPosX, int nPosY, float fRadio);

	float fGetRadio() const;
	void vSetRadio(float Radio);

	void vDrawFig() const override;
	float fGetArea() const override;

};

#endif

#ifndef CRECTANGULO_H
#define CRECTANGULO_H


class cRectangulo : public cFigura {
private:
	int _nWidth = 0;
	int _nHeigth = 0;

public:
	cRectangulo(int nPosX, int nPosY, int nWidth, int _nHeigth);

	int nGetWidth() const;
	void vSetWidth(int nWidth);

	int nGetHeigth() const;
	void vSetHeigth(int nHeigth);

	void vDrawFig() const override;
	float fGetArea() const override;

};

#endif