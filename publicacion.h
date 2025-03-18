//evitar multiples inclusiones
#ifndef PUBLICACION_H //Si no esta definido
#define PUBLICACION_H //Define

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "DTFecha.h"
#include "DTRefer.h"

class Investigador;

class Publicacion {
    private:
        std::string DOI;
        std::string titulo;
        DTFecha fecha;
        std::list<Investigador*> investigadores;

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
        bool contienePalabra(std::string); //no se implementa

        ~Publicacion();
};

#endif