#include <string>
#include <iostream>
#include <list>
#include "DTFecha.h"
//#include "Publicacion.h"



#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

class Publicacion;

class Investigador{
    private:
      std::string ORCID;
      std::string nombre;
      std::string institucion;
      std::list<Publicacion*> publicaciones; //lista de punteros a publicaciones
    
    public:
      Investigador(std::string, std::string, std::string);

      void setORCID(std::string);
      void setNombre(std::string);
      void setInstitucion(std::string);
      void setPublicacion(Publicacion*);

      std::string getORCID();
      std::string getNombre();
      std::string getInstitucion();

      std::list<std::string> listarPublicaciones(DTFecha, std::string); //lista de string con doi de publicaciones
      void toString();

      ~Investigador();

};

#endif