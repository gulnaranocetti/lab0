#include <iostream>
#include <list>
#include <map>
#include "Publicacion.h"
#include "Investigador.h"
#include "Libro.h"
#include "ArticuloRevista.h"
#include "PaginaWeb.h"
#include "DTRefer.h"
#include "DTFecha.h"


std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}

void parte_a(){
	std::string revista1 = "Programación Avanzada";
	std::string extracto1 = "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.";
	DTFecha fecha1 = DTFecha(15, 5, 2023);
	std::string titulo1 = "Fundamentos de POO";
	std::string DOI1 = "10.1234/abc123";
	ArticuloRevista* primero =  new ArticuloRevista(revista1, extracto1, fecha1, titulo1, DOI1);
	coleccion_guardarPublicacion(primero);

	std::string revista2 = "Modelado de Software";
	std::string extracto2 = "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.";
	DTFecha fecha2 = DTFecha(10, 2, 2024);
	std::string titulo2 = "Utilidad de diagramas UML";
	std::string DOI2 = "10.4567/jkl012";
	ArticuloRevista* segundo = new ArticuloRevista(revista2, extracto2, fecha2, titulo2, DOI2);
	coleccion_guardarPublicacion(segundo);
}

void parte_b(){
	std::string editorial3 = "Software Design";
	DTFecha fecha3 = DTFecha(20, 8, 2022);
	std::string titulo3 = "Patrones de Diseno en c++";
	std::string DOI3 = "10.2345/def456";
	std::set<std::string> keyWords3 = {"Diseno", "OOP", "Class"};
	Libro* tercero = new Libro(editorial3, fecha3, titulo3, DOI3);
	tercero->setPalabrasDestacadas(keyWords3);
	coleccion_guardarPublicacion(tercero);

	std::string editorial4 = "IEEE";
	DTFecha fecha4 = DTFecha(20, 8, 2022);
	std::string titulo4 = "Guia de UML";
	std::string DOI4 = "10.5678/mno345";
	std::set<std::string> keyWords4 = {"Diagramas", "UML", "Software", "Modelado"};
	Libro* cuarto = new Libro(editorial4, fecha4, titulo4, DOI4);
	cuarto->setPalabrasDestacadas(keyWords4);
	coleccion_guardarPublicacion(cuarto);
}

void parte_c(){
	std::string DOI5 = "10.3456/ghi789";
	std::string titulo5 = "Diagramas para Principiantes";
	DTFecha fecha5 = DTFecha(20, 10, 2024);
	std::string url5 = "www.umlparaprincipiantes.com";
	std::string contenido5 = "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.";
	PaginaWeb* quinto = new PaginaWeb(DOI5, titulo5, fecha5, url5, contenido5);
	coleccion_guardarPublicacion(quinto);
}

void parte_d(){
	std::string DOIs[5] = {"10.1234/abc123", "10.4567/jkl012", "10.2345/def456", "10.5678/mno345", "10.3456/ghi789"};

	for(int i = 0; i < 5; i++){
		DTRefer temp = coleccion_getPublicacion(DOIs[i])->getDT();
		std::cout << temp << std::endl;
		// std::cout << coleccion_getPublicacion(DOIs[i])->getDT() << std::endl; (no dejaba hacerlo) falta ver si pierde memoria por aca
	}
}

void parte_e(){
	std::string ORCID1 = "0000-0003-1234-5678 ";
	std::string nombre1 = "Carla Oliveri";
	std::string institucion1 = "Universidad de la Republica";
	Investigador* primero = new Investigador(ORCID1, nombre1, institucion1);
	coleccion_guardarInvestigador(primero);

	std::string ORCID2 = "0000-0001-8765-4321";
	std::string nombre2 = "Alberto Santos";
	std::string institucion2 = "Instituto Tecnico";
	Investigador* segundo = new Investigador(ORCID2, nombre2, institucion2);
	coleccion_guardarInvestigador(segundo);
}

void parte_f(){
	//Imprimir en consola el resultado de ejecutar la operación toString para cada uno de los objetos Investigador creados.
	for(std::list<Investigador*>::iterator it = investigadores.begin(); it != investigadores.end(); it++){
		(*it)->toString();
	}
}

void parte_g(){
	Investigador* carla = coleccion_getInvestigador("0000-0003-1234-5678");
	Investigador* alberto = coleccion_getInvestigador("0000-0001-8765-4321");

	Publicacion* fundamentosPOO = coleccion_getPublicacion("10.1234/abc123");
	Publicacion* utilidad_diagramasUML = coleccion_getPublicacion("10.4567/jkl012");
	Publicacion* guíaUML = coleccion_getPublicacion("10.5678/mno345");
	Publicacion* diagramasPrincipiantes = coleccion_getPublicacion("10.3456/ghi789");
	Publicacion* patronesDiseno = coleccion_getPublicacion("10.2345/def456");

	Publicacion* publicacionesCarla[4] = {fundamentosPOO, utilidad_diagramasUML, guíaUML, diagramasPrincipiantes};
	Publicacion* publicacionesAlberto[3] = {fundamentosPOO, patronesDiseno, utilidad_diagramasUML};

	for(int i = 0; i < 4; i++){
		carla->setPublicacion(publicacionesCarla[i]);
        publicacionesCarla[i]->setInvestigador(carla); 
	}
	
	for(int i = 0; i < 3; i++){
		alberto->setPublicacion(publicacionesAlberto[i]);
		publicacionesAlberto[i]->setInvestigador(alberto); 
	}
}

void parte_h(){
	Investigador* carla = coleccion_getInvestigador("0000-0003-1234-5678");
	DTFecha desde(10,12,2023);
	std::list<std::string> publicacionesCarla = carla->listarPublicaciones(desde,"UML");

	for(std::list<std::string>::iterator it = publicacionesCarla.begin(); it != publicacionesCarla.end(); it++){
		std::cout << (coleccion_getPublicacion(*it))->getDOI() << std::endl;
	}

}

void parte_i(){
    std::string doi = "10.4567/jkl012";
    publicacion* eliminar = coleccion_getPublicacion(doi);
    coleccion_eliminarPublicacion(eliminar);
    //delete eliminar; no se si es correcto hacerle delete
}

void parte_j(){
	/*Invocar la operación listarPublicaciones(1/1/2020,“UML”) para la
	investigadora 0000-0003-1234-5678 (Carla Oliveri) e imprimir el resultado en consola
	(un string por línea).*/

	// creo que necesito que Carla este creada para poder usarla para invocar a la funcion
}

void parte_k(){
	/*std::string DOIs[] = {};

	for(int i = 0; i < ; i++){
		std::cout << coleccion_getPublicacion(DOIs[i])->getDT() << std::endl;
	}*/
}

//esto lo tenemos que hacer?? (si) lo agregamos nosotros
void cleanUp() {

}


int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}
