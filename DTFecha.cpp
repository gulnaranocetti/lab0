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

int DTFecha::getDia(){ return this->Dia; }

int DTFecha::getAnio(){ return this->Anio; }

int DTFecha::getMes(){ return this->Mes; }

int DTFecha::comparar(DTFecha f2){

    if (this->Anio > f2.getAño()){ return 1; }

    if (this->Anio < f2.getAño()){ return -1; }

    if (this->Mes > f2.getMes()){ return 1; }

    if (this->Mes < f2.getMes()){ return -1; }

    if (this->Dia > f2.getDia()){ return 1; }

    if (this->Dia < f2.getDia()){ return -1; }

    return 0;
}

std::string DTFecha::toString(){ return this->Dia + '/' + this->Mes + '/' + this->Anio; }