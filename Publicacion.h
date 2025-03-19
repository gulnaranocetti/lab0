//evitar multiples inclusiones
#ifndef PUBLICACION_H //Si no esta definido
#define PUBLICACION_H //Define

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include "DTFecha.h"
#include "DTRefer.h"
//#include "Investigador.h"

class Investigador;

class Publicacion {
    private: 
        std::list<Investigador*> investigadores;

    protected:
        std::string DOI;
        std::string titulo;
        DTFecha fecha;

    public:
        Publicacion();
        Publicacion(std::string, std::string, DTFecha);
        void setDOI(std::string);
        void setTitulo(std::string);
        void setFecha(DTFecha);
        std::string getDOI();
        std::string getTitulo();
        DTFecha getFecha();

        DTRefer getDT();
        virtual bool contienePalabra(std::string) const = 0; //no se implementa

        ~Publicacion();
};

#endif