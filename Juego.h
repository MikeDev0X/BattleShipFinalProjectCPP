# include <iostream>
# include <string>
#include "Tablero.h"
#include "Jugador.h"
#include "Barco.h"
using namespace std;



class Juego{
  public:
  Juego();
  void inicio();

  

  private:
  int turnos,porcentaje;
  Tablero Ta1,Ta2;
  Jugador ju1,ju2;
  Barco b,b1,b2,b3,b4;
  Barco bb,b11,b22,b33,b44,BarcoPrueba;

  
};