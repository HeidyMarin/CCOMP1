#ifndef AVION_2_H
#define AVION_2_H
#include "Avion.h"

class Avion_2 : public Avion
{
public:
	Avion_2(){ ID = 2; mensaje = "Avion 2";}
	int getID()const;
	string getMensaje();
	void setMensaje(string);
};

#endif // AVION_2_H
