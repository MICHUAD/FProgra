#include "cSprite.h"
cSprite::cSprite(int nPosX, int nPosY, string NombreArchivo) : cEntity(nPosX, nPosY), _sNombreArchivo(NombreArchivo) {}

void cSprite::vDrawFig() const
{
	//Aqui dibujaremos cuando se implemente SDL o una libreria grafica
	std::cout << "Dibujando un sprite en (" << nGetPosX << ", " << nGetPosY << ") " << std::endl;
}


string cSprite::sGetFileName() const
{
	return _sNombreArchivo;
}
void cSprite::vSetFilename(string NombreArchivo)
{
	_sNombreArchivo = NombreArchivo;
}