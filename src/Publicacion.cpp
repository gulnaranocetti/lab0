#include "../include/Publicacion.h"
#include "../include/Investigador.h"
#include "../include/DTFecha.h"

Publicacion::Publicacion() {

};

Publicacion::Publicacion(std::string DOI, std::string titulo, DTFecha fecha): DOI(DOI), titulo(titulo), fecha(fecha) {;};

void Publicacion::setDOI(std::string DOI) {
    this->DOI = DOI;
};

void Publicacion::setTitulo(std::string titulo) {
    this->titulo = titulo;
};

void Publicacion::setFecha(DTFecha f) {
    DTFecha aux(f.getDia(), f.getMes(), f.getAnio());
    this->fecha = aux;
};

void Publicacion::setInvestigador(Investigador* inv){
    this->investigadores.push_back(inv);
}

void Publicacion::unsetInvestigador(Investigador* inv){
    this->investigadores.remove(inv);
}

std::string Publicacion::getDOI() {
    return this->DOI;
};

std::string Publicacion::getTitulo() {
    return this->titulo;
};

DTFecha& Publicacion::getFecha() {
    return this->fecha; //esto funciona???
};

DTRefer Publicacion::getDT() {
    std::set<std::string> autor;
    DTFecha f(this->getFecha());
    std::string doi = this->getDOI();
    std::string title = this->getTitulo();

    //std::list<Investigador*>::iterator iter = this->investigadores.begin(); //defino un iterador para la lista de investigadores

    for ( std::list<Investigador*>::iterator iter = this->investigadores.begin(); iter != this->investigadores.end(); iter++ ){ 
        std::string aux = (*iter)->getNombre();
        autor.insert(aux);
    }

    DTRefer res(doi, title, f, autor);

    return res;
};


Publicacion::~Publicacion() {
    this->investigadores.clear();
};
