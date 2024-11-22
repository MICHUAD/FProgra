#include "cText.h"


cText::cText(int nPosX, int nPosY, string sTextContent): cEntity(nPosX, nPosY), _sTextContent(sTextContent){}

void cText::vDrawFig() const 
{
	//Aqui dibujaremos cuando se implemente SDL o una libreria grafica
	std::cout << "Dibujando un Texto en (" << nGetPosX << ", " << nGetPosY << ") con la siguiente info:" << _sTextContent << std::endl;
}

string cText::sGetFileName() const
{
	return _sTextContent;
}

void cText::vSetFilename(string sTextContent)
{
	_sTextContent = sTextContent;
}
