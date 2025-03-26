#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"

#include <set>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class Libro : public Publicacion {
    private:

        std::string editorial;
        std::set<std::string> palabrasDestacadas;
        
    public:

        Libro();
        Libro(std::string, DTFecha, std::string, std::string);

        ~Libro();

        std::string getEditorial();
        std::set<std::string> getPalabrasDestacadas();
        void setEditorial(std::string);
        void setPalabrasDestacadas(std::set<std::string>);

        bool contienePalabra(std::string) const;
};

#endif // LIBRO_H