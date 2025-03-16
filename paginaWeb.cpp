#include "paginaWeb.h"

paginaWeb::~paginaWeb(){}

void paginaWeb::setUrl(std::string url){
    this->url = url;
}

void paginaWeb::setCont(std::string contenido){
    this->contenidoExtraido = contenido;
}

std::string paginaWeb::getUrl();{
    return this->url;
}

std::string paginaWeb::getCont();{
    return this->contenidoExtraido;
}

paginaWeb::paginaWeb(std::string doi, std::string titulo, DTFecha fecha, std::string url, std::string contenidoExtraido){
    Publicacion(doi, titulo, fecha);
    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
} 

bool paginaWeb::contienePalabra(std::string palabra){
    return this->contenidoExtraido.find(palabra) != std::string::npos;
}