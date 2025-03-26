#include <iostream>
#include <string>
#ifndef DTFECHA_h
#define DTFECHA_h

class DTFecha {

    private:

    int Dia, Mes, Anio;

    public:

    DTFecha(); //constructor devuelve la fecha 0/0/0
    DTFecha(int,int,int); //constructor por parametros recibe dia, mes y año en ese orden devolviendo dia/mes/año como fecha
    DTFecha(DTFecha&); //constructor por parametros que copia un DTFecha 

    int getDia();
    int getAnio();
    int getMes();

    int comparar(DTFecha& f2); //Devuelve 1 si fecha es > f2, 0 si fecha == f2 o -1 si fecha < f2
    std::string toString(); //devuelve un string de fecha en el formato XX/XX/XXXX

    DTFecha operator=(DTFecha&);

    bool operator==(DTFecha&);

    void operator!=(DTFecha&);
        
};

#endif