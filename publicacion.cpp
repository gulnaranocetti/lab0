#include "publicacion.h"
#include "DTFecha.h"

Publicacion::Publicacion() {

};

//se asumen definidas setDia, setMes y setAnio, y el nombre getAnio en lugar de getAño
Publicacion::Publicacion(std::string DOI, std::string titulo, DTFecha fecha) {
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha.setDia(fecha.getDia());
    this->fecha.setMes(fecha.getMes());
    this->fecha.setAnio(fecha.getAnio());
};

void Publicacion::setDOI(std::string DOI) {
    this->DOI = DOI;
};

void Publicacion::setTitulo(std::string titulo) {
    this->titulo = titulo;
};

void Publicacion::setFecha(DTFecha fecha) {
    this->fecha.setDia(fecha.getDia());
    this->fecha.setMes(fecha.getMes());
    this->fecha.setAnio(fecha.getAnio());
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

Publicacion::~Publicacion() {

};