#include "../include/ArticuloRevista.h"

ArticuloRevista::ArticuloRevista() {
    revista = "";
    extracto = "";
}

ArticuloRevista::ArticuloRevista(std::string _revista, std::string _extracto, DTFecha fecha, std::string titulo, std::string DOI) : Publicacion(DOI, titulo, fecha) {
    revista = _revista;
    extracto = _extracto;
}

std::string ArticuloRevista::getRevista() {
    return revista;
}

std::string ArticuloRevista::getExtracto() {
    return extracto;
}

void ArticuloRevista::setRevista(std::string _revista) {
    revista = _revista;
}

void ArticuloRevista::setExtracto(std::string _extracto) {
    extracto = _extracto;
}

bool ArticuloRevista::contienePalabra(std::string palabra) const {
    return (titulo.find(palabra) != std::string::npos || revista.find(palabra) != std::string::npos || extracto.find(palabra) != std::string::npos);
}

ArticuloRevista::~ArticuloRevista() {
   ; // Destructor
}