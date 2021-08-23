# include <iostream>
# include <string>
using namespace std;
#pragma once 

class Jugador{
  public:

  Jugador();
  Jugador(string,int);

  string getNombre();
  int getId();
  int getPuntaje();

  void setNombre(string); 
  void setId(int);
  void setPuntaje(int);

  private:
  string nombre;
  int id, puntaje;


};