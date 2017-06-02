#ifndef AVION_H
#define AVION_H
#include <iostream>
#include<vector>
using namespace std;

class Avion
{
protected:
	int ID;
	string mensaje;
public:
	virtual int getID() const = 0;
	virtual string getMensaje() = 0;
	virtual void setMensaje(string) = 0;
};

#endif // AVION_H
