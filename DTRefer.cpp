#include <DTRefer.h>

DTRefer(){
    this->DOI = '';
    this->titulo = '';
    this->fecha = DTFecha();
}

DTRefer(std::string codigo, std::string title, DTFecha f, std::set<std::string> autors){ //constructor por parametros
    this->DOI = codigo;
    this->titulo = title;
    this->fecha = DTFecha(f.getDia(), f.getMes(), f.getAño());
    this->autores(autors);
}
std::string getDOI(){ return this->DOI; } //devuelve el codigo DOI de la publicacion referida

std::string getTitulo(){ return this->titulo; }

DTFecha getFecha(){ return this->fecha; }

std::set getAutores(){ return this->autores; }