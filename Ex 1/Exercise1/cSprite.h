#pragma once
#ifndef CSPRITE_H
#define CSPRITE_H

#include "cEntity.h"


class cSprite : public cEntity
{
private:
	string _sNombreArchivo = " ";

public:
	cSprite(int nPosX, int nPosY, string NombreArchivo);
	void vDrawFig() const override;

	string sGetFileName() const;
	void vSetFilename(string NombreArchivo);
};

#endif