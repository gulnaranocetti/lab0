#include "DTRefer.h"

DTRefer::DTRefer(){
    this->DOI = ' ';
    this->titulo = ' ';
    this->fecha = DTFecha();
}

DTRefer::DTRefer(std::string codigo, std::string title, DTFecha f, std::set<std::string> autors): DOI(codigo), titulo(title), fecha(f), autores(autors) { //constructor por parametros
    /*this->DOI = codigo;
    this->titulo = title;
    this->fecha = DTFecha(f.getDia(), f.getMes(), f.getAnio());
    this->autores = autors;*/
}

DTRefer::~DTRefer(){;}

std::string DTRefer::getDOI(){ return this->DOI; } //devuelve el codigo DOI de la publicacion referida

std::string DTRefer::getTitulo(){ return this->titulo; }

DTFecha DTRefer::getFecha(){ return this->fecha; }

std::set<std::string> DTRefer::getAutores(){ return this->autores; }

std::string DTRefer::getAutoresString() {
    std::string setString = "";
    for (auto it = this->autores.begin(); it != this->autores.end(); it++) {
        if (*it == *this->autores.rbegin())
            setString += *it;
        else
            setString += *it + ',';
    }
    return setString;
}

std::ostream &operator<<(std::ostream &os, DTRefer &refer) {
    os << refer.getDOI() << "->" << refer.getTitulo() << "(" << (refer.getFecha()).toString() << ")/" << refer.getAutoresString();
    return os;
}
