#include <iostream>
#include <string>
#ifndef DTFECHA_h
#define DTFECHA_h

class DTFecha {

    private:

    int Dia, Mes, Año;

    public:

    DTFecha(); //constructor devuelve la fecha 0/0/0

    DTFecha(int,int,int); //constructor por parametros recibe dia, mes y año en ese orden devolviendo dia/mes/año como fecha

    int getDia();

    int getAño();

    int getMes();

    int comparar(DTFecha f2); //Devuelve 1 si fecha es > f2, 0 si fecha == f2 o -1 si fecha < f2

    std::string toString(); //devuelve un string de fecha en el formato XX/XX/XXXX
};

#endif