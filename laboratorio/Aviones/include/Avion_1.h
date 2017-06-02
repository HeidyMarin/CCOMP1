#ifndef AVION_1_H
#define AVION_1_H
#include "Avion.h"

class Avion_1 : public Avion
{
public:
	Avion_1(){ID = 1; mensaje = "Avion 1";}
	int getID ()const;
	string getMensaje();
	void setMensaje(string);
};


#endif // AVION_1_H
