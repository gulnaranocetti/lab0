#include "DTRefer.h"

DTRefer::DTRefer(){
    this->DOI = ' ';
    this->titulo = ' ';
    this->fecha = DTFecha();
}

DTRefer::DTRefer(std::string codigo, std::string title, DTFecha f, std::set<std::string> autors){ //constructor por parametros
    this->DOI = codigo;
    this->titulo = title;
    this->fecha = DTFecha(f.getDia(), f.getMes(), f.getAnio());
    this->autores(autors);
}
std::string DTRefer::getDOI(){ return this->DOI; } //devuelve el codigo DOI de la publicacion referida

std::string DTRefer::getTitulo(){ return this->titulo; }

DTFecha DTRefer::getFecha(){ return this->fecha; }

std::set DTRefer::getAutores(){ return this->autores; }