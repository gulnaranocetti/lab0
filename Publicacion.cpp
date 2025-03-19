#include "Publicacion.h"
#include "DTFecha.h"

Publicacion::Publicacion() {

};

Publicacion::Publicacion(std::string DOI, std::string titulo, DTFecha fecha): DOI(DOI), titulo(titulo), fecha(fecha) {};

void Publicacion::setDOI(std::string DOI) {
    this->DOI = DOI;
};

void Publicacion::setTitulo(std::string titulo) {
    this->titulo = titulo;
};

void Publicacion::setFecha(DTFecha fecha) {
    this->fecha = fecha;
};

std::string Publicacion::getDOI() {
    return this->DOI;
};

std::string Publicacion::getTitulo() {
    return this->titulo;
};

DTFecha Publicacion::getFecha() {
    return this->fecha; //esto funciona???
};

DTRefer Publicacion::getDT() {
    std::set<std::string> autor = {};
    DTFecha f = DTFecha( this->getFecha() );
    std::string doi = this->getDOI();
    std::string title = this->getTitulo();

    std::list<Investigador*>::iterator iter = this->investigadores.begin(); //defino un iterador para la lista de investigadores

    for ( iter ; iter != this->investigadores.end(); iter++ ){ autor.insert(*iter.getNombre()); }

    DTRefer res = DTRefer(doi, title, f, autor);

    return res;
};


Publicacion::~Publicacion() {
    
};
