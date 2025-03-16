#include <iostream>
#include <string>
#include <vector>
#ifndef PAGINAWEB.h
#define PAGINAWEB.h

class paginaWeb : public Publicacion {
    private:
    std::string url, contenidoExtraido;

    public:
        ~paginaWeb();

        paginaWeb(std::string, std::string, DTFecha, std::string, std::string)

        bool contienePalabra(std::string);

        void setUrl(std::string);
        void setCont(std::string);
        std::string getUrl();
        std::string getCont();
}; #endif