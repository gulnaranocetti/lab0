#include "Libro.h"

Libro::Libro() {
    editorial = "";
}

Libro::Libro(std::string _editorial, DTFecha fecha, std::string titulo, std::string DOI) : Publicacion(DOI, fecha, titulo) {
    editorial = _editorial;
}

std::string Libro::getEditorial() {
    return editorial;
}

std::set<std::string> Libro::getPalabrasDestacadas() {
    return palabrasDestacadas;
}

void Libro::setEditorial(std::string _editorial) {
    editorial = _editorial;
}

void Libro::setPalabrasDestacadas(std::set<std::string> _palabrasDestacadas) {
    palabrasDestacadas = _palabrasDestacadas;
}

bool Libro::contienePalabra(std::string palabra) {
    return (titulo.find(palabra) != std::string::npos || editorial.find(palabra) != std::string::npos || std::find(palabrasDestacadas.begin(), palabrasDestacadas.end(), palabra) != palabrasDestacadas.end());
}

Libro::~Libro() {
    // Destructor
}