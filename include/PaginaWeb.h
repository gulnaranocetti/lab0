#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include <iostream>
#include <string>
#include <vector>
#include "../include/Publicacion.h"	

class PaginaWeb : public Publicacion {
    private:
    std::string url, contenidoExtraido;

    public:
        ~PaginaWeb();

        PaginaWeb(std::string, std::string, DTFecha, std::string, std::string);

        bool contienePalabra(std::string) const override;

        void setUrl(std::string);
        void setCont(std::string);
        std::string getUrl();
        std::string getCont();
}; 

#endif