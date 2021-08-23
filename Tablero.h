#pragma once
#include "Casilla.h"

const int MAX = 10;

class Tablero {
public:
	Tablero();
  bool obtenerEstatusCasilla(char, int);
  void cambiarEstatusCasilla(char, int);
  void printTab();
//funcion aparte
  int chartoint(char);
  char inttochar(int);

  //------

private:
	Casilla warzone[MAX][MAX];
};