#include "DTFecha.h"

DTFecha::DTFecha(){
    this->Dia = 0;
    this->Mes = 0;
    this->Anio = 0;
}

DTFecha::DTFecha(int d,int m,int a){
    this->Dia = d;
    this->Mes = m;
    this->Anio = a;
}

DTFecha::~DTFecha(){;}

int DTFecha::getDia(){ return this->Dia; }

int DTFecha::getAnio(){ return this->Anio; }

int DTFecha::getMes(){ return this->Mes; }

int DTFecha::comparar(DTFecha& f2){

    if (this->Anio > f2.getAnio()){ return 1; }

    if (this->Anio < f2.getAnio()){ return -1; }

    if (this->Mes > f2.getMes()){ return 1; }

    if (this->Mes < f2.getMes()){ return -1; }

    if (this->Dia > f2.getDia()){ return 1; }

    if (this->Dia < f2.getDia()){ return -1; }

    return 0;
}

std::string DTFecha::toString() { return std::to_string(this->Dia) + '/' + std::to_string(this->Mes) + '/' + std::to_string(this->Anio); }

/*bool DTFecha::operator==(const DTFecha& f) const { return this->comparar(f) == 0; }

bool DTFecha::operator!=(const DTFecha& f) const { return this->comparar(f) != 0; }

bool DTFecha::operator>(const DTFecha& f) const { return this->comparar(f) == 1; }

bool DTFecha::operator<(const DTFecha& f) const { return this->comparar(f) == -1; }

DTFecha& DTFecha::operator=(const DTFecha& f){
    
    if (this != f){

        this->Dia = f.getDia();
        this->Mes = f.getMes();
        this->Anio = f.getAnio();

    }
        return *this;
}*/