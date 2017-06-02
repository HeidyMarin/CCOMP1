#ifndef TORRE_H
#define TORRE_H
#include "Avion.h"

class Torre
{
private:
	vector<Avion *> aviones;
public:
	void enviarMsj();
	void agregar(Avion *);
};


#endif // TORRE_H
