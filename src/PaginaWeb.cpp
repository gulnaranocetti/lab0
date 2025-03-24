#include "../include/PaginaWeb.h"

PaginaWeb::~PaginaWeb(){}

void PaginaWeb::setUrl(std::string url){
    this->url = url;
}

void PaginaWeb::setCont(std::string contenido){
    this->contenidoExtraido = contenido;
}

std::string PaginaWeb::getUrl() {
    return this->url;
}

std::string PaginaWeb::getCont() {
    return this->contenidoExtraido;
}

PaginaWeb::PaginaWeb(std::string doi, std::string titulo, DTFecha fecha, std::string url, std::string contenidoExtraido) : Publicacion(doi, titulo, fecha) {
    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
} 

bool PaginaWeb::contienePalabra(std::string palabra) const {
    return this->contenidoExtraido.find(palabra) != std::string::npos;
}
