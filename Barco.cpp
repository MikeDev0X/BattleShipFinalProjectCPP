# include <iostream>
# include <string>
#include "Barco.h"
using namespace std;


Barco::Barco(){
  largo=0;
  orientacion=1;//0--horizontal  1--vertical
  nombre=" ";
}

Barco::Barco(int lar,int ori, string name){
  largo=lar;
  orientacion=ori;//0--horizontal  1--vertical
  nombre=name;
}
Barco::~Barco(){}

int Barco::getOrientacion(){
    return orientacion;
}
  
int Barco::getLargo(){
  return largo;
}

string Barco::getNombre(){
  return nombre;
}

void Barco::setLargo(int lar){
  largo = lar;
}
void Barco::setOrientacion(int ori){
  orientacion = ori;
}
void Barco::setNombre(string nom){
  nombre = nom;
}
