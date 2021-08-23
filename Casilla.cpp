#include "Casilla.h"

Casilla::Casilla() {
	Fila = ' ';
	Columna = 0;
	casilla_status = false;
}

Casilla::Casilla(char fila, int columna,bool stat) {
	Fila = fila;
	Columna = columna;
	casilla_status = stat;
}

Casilla::~Casilla(){}

char Casilla::getFila() {
	return Fila;
}

int Casilla::getColumna() {
	return Columna;
}

bool Casilla::getStatus() {
	return casilla_status;
}

void Casilla::setFila(char f_) {
	Fila = f_;
}

void Casilla::setColumna(int c_) {
	Columna = c_;
}

void Casilla::setStatus(bool b_) {
	casilla_status = b_;
}