#include "cFigura.h"

#define PI 3.14159


//Circulo
cCirculo::cCirculo(int nPosX, int nPosY, float fRadio) : cFigura(nPosX, nPosY), _fRadio(fRadio) {}

float cCirculo::fGetRadio() const 
{
	return _fRadio;
}

void cCirculo::vSetRadio(float Radio)
{
	if (Radio && Radio != _fRadio)
		_fRadio = Radio;
}

float cCirculo::fGetArea()const
{
	return PI * _fRadio * _fRadio;
}

void cCirculo::vDrawFig() const
{
	//Aqui dibujaremos cuando se implemente SDL o una libreria grafica
	std::cout << "Dibujando un circulo en (" << nGetPosX << ", " << nGetPosY << ") Con un radio de" << _fRadio << std::endl;
}

//Rectangle
cRectangulo::cRectangulo(int nPosX, int nPosY, int nWidth, int _nHeigth) : cFigura(nPosX, nPosY), _nWidth(nWidth), _nHeigth(_nHeigth) { }

int cRectangulo::nGetWidth()const
{
	return _nWidth;
}

void cRectangulo::vSetWidth(int nWidth)
{
	 _nWidth = nWidth;
}

int cRectangulo::nGetHeigth()const
{
	return _nHeigth;
}

void cRectangulo::vSetHeigth(int nHeigth)
{
	_nHeigth = nHeigth;
}

void cRectangulo::vDrawFig() const
{
	//Aqui dibujaremos cuando se implemente SDL o una libreria grafica
	std::cout << "Dibujando un Rectangulo en (" << nGetPosX << ", " << nGetPosY << ") Con una altura de" << _nHeigth <<" y un ancho de" << _nWidth << std::endl;
}

float cRectangulo::fGetArea() const
{
	return _nWidth * _nHeigth;
}