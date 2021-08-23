#pragma once
class Casilla
{
public:
	Casilla();
	Casilla(char, int,bool);
  virtual ~Casilla();

	char getFila();
	int getColumna();
	bool getStatus();

	void setFila(char);
	void setColumna(int);
	void setStatus(bool);

private:
	char Fila;
	int Columna;
	bool casilla_status;

};