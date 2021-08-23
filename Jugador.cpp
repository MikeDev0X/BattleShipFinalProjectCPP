# include <iostream>
# include <string>
#include "Jugador.h"
using namespace std;


  Jugador::Jugador(){
    nombre = "";
    id = 0;
    puntaje = 0;
    
  }
  Jugador::Jugador(string nam,int _id){
    nombre=nam;
    id=_id;
    puntaje=0;
  }

  string Jugador::getNombre(){
    return nombre;
  }
  
  
  int Jugador::getId(){
    return id;
  }
  
  int Jugador::getPuntaje(){
    return puntaje;
  }


  void Jugador::setNombre(string nom){
    nombre = nom;
  } 
  void Jugador::setId(int _id){
    id = _id;
  }
  void Jugador::setPuntaje(int pun){
  puntaje = pun;
  }