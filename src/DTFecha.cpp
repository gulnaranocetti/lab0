#include "../include/DTFecha.h"

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

DTFecha::DTFecha(DTFecha& f){
    this->Dia = f.getDia();
    this->Mes = f.getMes();
    this->Anio = f.getAnio();
}

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

std::string DTFecha::toString() { 
    std::ostringstream oss;
    oss << this->Dia << '/' << this->Mes << '/' << this->Anio;
    return oss.str(); 
}

/*bool DTFecha::operator==(const DTFecha& f) const { return this->comparar(f) == 0; }

bool DTFecha::operator!=(const DTFecha& f) const { return this->comparar(f) != 0; }

bool DTFecha::operator>(const DTFecha& f) const { return this->comparar(f) == 1; }

bool DTFecha::operator<(const DTFecha& f) const { return this->comparar(f) == -1; }*/

DTFecha DTFecha::operator=(DTFecha& f){
    
    if (this->comparar(f) != 0){

        this->Dia = f.getDia();
        this->Mes = f.getMes();
        this->Anio = f.getAnio();

    }
        return *this;
}