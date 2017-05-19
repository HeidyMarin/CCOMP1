#include "Complejo.h"

bool Complejo::operator<(Complejo &c)
{
    float distPX, distPY;
	distPX = sqrt(pow(c.getX(),2) + pow(c.getY(),2));
	distPY = sqrt(pow(x,2) + pow(y,2));

	return distPX < distPY;
}

Complejo Complejo::operator +(Complejo &c)
{
    Complejo suma;
    suma.setX(c.getX() + x);
    suma.setY(c.getY() + y);
    return suma;
}

Complejo Complejo::operator-(Complejo &c)
{
    Complejo resta;
    resta.setX(c.getX() - x);
    resta.setY(c.getY() - y);
    return resta;
}

Complejo Complejo::operator*(Complejo &c)
{
    Complejo multi;
    multi.setX(c.getX() * x);
    multi.setY(c.getY() * y);
    return multi;
}

Complejo Complejo::productEscalar(int &v)
{
    Complejo ProducE;
    ProducE.setX(v * x);
    ProducE.setY(v * y);
    return ProducE;
}
