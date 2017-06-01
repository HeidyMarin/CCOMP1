#ifndef INGRESOS_H
#define INGRESOS_H
#include <sstream>

class Ingresos
{
    protected:
        int ingresos, egresos;
    public:
        Ingresos(const int &myingresos, const int &myegresos)
        : ingresos(myingresos), egresos(myegresos){}
        Ingresos(Ingresos &i){ingresos = i.ingresos; egresos = i.egresos;}
        string ingr_total(){
            int total = ingresos - egresos;
        stringstream ss;
                ss<<total;
            return ss.str();
        }
};

#endif // INGRESOS_H
