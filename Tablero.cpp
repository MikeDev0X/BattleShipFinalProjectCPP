#include "Tablero.h"
#include <iostream>
using namespace std;

Tablero::Tablero() {
	
	for (int u = 0; u < 10; u++) {
		
		//Fila
		int itF = u;
		char lett = ' ';

		if (u == 0) {
			lett = 'A';
		}
		else if (u == 1) {
			lett = 'B';
		}
		else if (u == 2) {
			lett = 'C';
		}
		else if (u == 3) {
			lett = 'D';
		}
		else if (u == 4) {
			lett = 'E';
		}
		else if (u == 5) {
			lett = 'F';
		}
		else if (u == 6) {
			lett = 'G';
		}
		else if (u == 7) {
			lett = 'H';
		}
		else if (u == 8) {
			lett = 'I';
		}
		else if (u == 9) {
			lett = 'J';
		}

		for (int r = 0; r < 10; r++) {
			//Columna
			warzone[u][r].setFila(lett);
			warzone[u][r].setColumna(r + 1);
			warzone[u][r].setStatus(false);
		}

	}

}

bool Tablero::obtenerEstatusCasilla(char _fila, int _columna){
  for(int x=0;x<10;x++){
    for(int y=0;y<10;y++){
      if(warzone[x][y].getColumna() == _columna && warzone[x][y].getFila() == _fila){
      return warzone[x][y].getStatus();
      }
    }
  }
}

void Tablero::cambiarEstatusCasilla(char _fila, int _columna){
  bool a;
  for(int x=0;x<10;x++){
    for(int y=0;y<10;y++){
      if(warzone[x][y].getColumna() == _columna && warzone[x][y].getFila() == _fila){
      a = warzone[x][y].getStatus();
      warzone[x][y].setStatus(!(a));
      }
    }
  }
}


void Tablero::printTab(){
for (int x=0; x<10;x++){

  for (int y=0;y<10; y++){
    if(warzone[x][y].getStatus()){
      cout<<"0";
    } else {
      cout << "-";
    }
  }
  cout<<endl;

  }
}

int Tablero::chartoint(char _row){
  if(_row == 'A'){
    return 0;
  }
  else if(_row == 'B'){
    return 1;
  }
  else if(_row == 'C'){
    return 2;
  }
  else if(_row == 'D'){
    return 3;
  }
  else if(_row == 'E'){
    return 4;
  }
  else if(_row == 'F'){
    return 5;
  }
  else if(_row == 'G'){
    return 6;
  }
  else if(_row == 'H'){
    return 7;
  }
  else if(_row == 'I'){
    return 8;
  }
  else if(_row == 'J'){
    return 9;
  }
}

char Tablero::inttochar(int _row){

  if(_row == 0){
    return 'A';
  }
  else if(_row == 1){
    return 'B';
  }
  else if(_row == 2){
    return 'C';
  }
  else if(_row == 3){
    return 'D';
  }
  else if(_row == 4){
    return 'E';
  }
  else if(_row == 5){
    return 'F';
  }
  else if(_row == 6){
    return 'G';
  }
  else if(_row == 7){
    return 'H';
  }
  else if(_row == 8){
    return 'I';
  }
  else if(_row == 9){
    return 'J';
  } 

}