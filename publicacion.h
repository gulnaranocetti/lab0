#include <iostream>
#include <string>
#include <vector>
#include "DTFecha.h"
//que es esto? abajo
#ifndef PUBLICACION.h
#define PUBLICACION.h


class Publicacion {
    private:
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

        ~Publicacion();
};

#endif