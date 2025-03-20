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
        void setInvestigador(Investigador*);
        std::string getDOI();
        std::string getTitulo();
        DTFecha& getFecha(); //agregue & pq habia un problema en getDT al pasar al constructor de DTfecha un parametro por valor en vez de por referencia

        DTRefer getDT();
        virtual bool contienePalabra(std::string) const = 0; //no se implementa

        ~Publicacion();
};

#endif