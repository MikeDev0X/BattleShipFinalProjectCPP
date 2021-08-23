# include <iostream>
# include <string>
using namespace std;
#pragma once 

class Barco 
{
public:
  Barco();
  Barco(int,int,string);
  virtual ~Barco();

  int getLargo();
  int getOrientacion();
  string getNombre();

  void setLargo(int);
  void setOrientacion(int);
  void setNombre(string);

private:
  int largo;
  int orientacion;
  string nombre;
};