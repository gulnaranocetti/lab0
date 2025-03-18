#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Publicacion.h"

class ArticuloRevista : public Publicacion {
    private:

        std::string revista, extracto;

    public:
    
        ArticuloRevista();
        ArticuloRevista(std::string, std::string, DTFecha, std::string, std::string); //(revista, extracto, fecha, titulo, DOI)

        ~ArticuloRevista();

        std::string getRevista();
        std::string getExtracto();
        void setRevista(std::string);
        void setExtracto(std::string);

        bool contienePalabra(std::string) const override;
};

#endif // ARTICULOREVISTA_H