#include "Investigador.h"
#include "Publicacion.h"

Investigador::Investigador(std::string ORCID, std::string nombre, std::string institucion) : ORCID(ORCID), nombre(nombre), institucion(institucion){
}

void Investigador::setORCID(std::string orc){
    ORCID = orc;
}

void Investigador::setNombre(std::string nom){
    nombre = nom;
}

void Investigador::setInstitucion(std::string ins){
    institucion = ins;
}

void Investigador::setPublicacion(Publicacion *pub){ 
    this->publicaciones.push_back(pub);
}
 
std::string Investigador::getORCID(){
    return ORCID;
}
std::string Investigador::getNombre(){
    return nombre;
}
std::string Investigador::getInstitucion(){
    return institucion;
}

std::list<std::string> Investigador::listarPublicaciones(DTFecha desde, std::string palabra){
    std::list<std::string> res;
    for(std::list<Publicacion*>::iterator it = publicaciones.begin(); it != publicaciones.end(); it++){
        if((*it)->getFecha().comparar(desde) == 1 && (*it)->contienePalabra(palabra)){
            res.push_back((*it)->getDOI());
        } 
    }
    return res;
}

void Investigador::toString(){
   std::cout << ORCID << "->" << nombre << "/" << institucion << "."<< std::endl;
}

Investigador::~Investigador(){
    publicaciones.clear();
}
