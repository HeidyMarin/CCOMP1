#ifndef COMPLEJO_H
#define COMPLEJO_H
#include<math.h>
#include <iostream>

using namespace std;


class Complejo
{
    private:
        int x,y;
    public:
        Complejo(int x_=0, int y_=0) : x(x_), y(y_){}
        Complejo(Complejo &punto){this->x=punto.x; this->y=punto.y;}
        int getX(){return x;}
        int getY(){return y;}
        void setX(int x_){ x = x_;}
        void setY(int y_){ y = y_;}

        bool operator <(Complejo &);
        Complejo operator +(Complejo &);
        Complejo operator -(Complejo &);
        Complejo operator *(Complejo &);
        Complejo productEscalar(int &);
};

#endif // COMPLEJO_H
