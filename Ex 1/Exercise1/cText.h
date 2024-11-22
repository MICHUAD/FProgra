#pragma once
#ifndef CTEXT_H
#define CTEXT_H

#include "cEntity.h"

class cText : public cEntity
{
private:
	string _sTextContent = " ";

public:
	cText(int nPosX, int nPosY, string sTextContent);
	void vDrawFig() const override;

	string sGetFileName() const;
	void vSetFilename(string sTextContent);
};

#endif