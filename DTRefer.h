#include <iostream>
#include <string>
#include "DTFecha.h"
#include <set>
#ifndef DTREFER_h
#define DTREFER_h

class DTRefer{

    private:

        std::string DOI, titulo;

        DTFecha fecha;

        std::set<std::string> autores;

    public:

    DTRefer();

    DTRefer(std::string, std::string, DTFecha, std::set); //constructor por parametros

    std::string getDOI(); //devuelve el codigo DOI de la publicacion referida

    std::string getTitulo();

    DTFecha getFecha();

    std::set getAutores();  //devuelve el set de los autores relacionados a la publicacion
};

#endif