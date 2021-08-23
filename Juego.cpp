# include <iostream>
# include <string>
#include "Juego.h"
#include "Barco.h"
#include "Tablero.h"
#include <cstdlib> 

using namespace std;

Juego::Juego(){
  turnos = 0;
  porcentaje = 0;

  ju1.setNombre("Kitten");
  ju2.setNombre("CatDestroyer");
  ju1.setId(1);
  ju2.setId(2);
  ju1.setPuntaje(0);
  ju2.setPuntaje(0);
}
void Juego::inicio(){
  int nt,ph;
  string name1,name2;
  cout<<"Configuración de la partida"<<endl;
  cout<<"Número de turnos: ";
  cin>>nt;
  cout<<"Porcentaje de hundimientos para ganar: ";
  cin>>ph;
  cout<<"  "<<endl;
  cout<<"Introduce el nombre del Jugador 1: ";
  cin>>name1;
  cout<<"Introduce el nombre del Jugador 2: ";
  cin>>name2;
  ju1.setNombre(name1);
  ju2.setNombre(name2);
  

  cout << "Introduce una coordenada válida: renglón(entre A y J), espacio, columna(1 y 10); o <S> en renglón, espacio, <0> en columna para finalizar la partida y salir del juego." << endl;
  cout << "Si la partida termina, no habrá ganador" << endl;
//Colocacion de barcos-------------------

int numerox,numeroy,numori,numorifor;

int ix=0;
int tabTurn=1;
bool absControl=false;

while (ix<5){

  //Coordenadas random
    for(int c=0; c<35;c++){
      numorifor=rand()%2;
      numori=numorifor;
    }
    

  //Comprobación de espacio para la construcción de los barcos por medio del status

  char intToCharx=' ',intToChary=' '; //variables  para tranformar la coordenada x y a caracteres
  char fijoY=' ';
  //int fijoX=0;
  int next=0;

  //características de los BARCOS para ambos tableros

  if (ix==0){
      
    if(numori==0){//Horizontal
      for(int c=0; c<35;c++){//Al utilizar rand, se descubrio que por alguna razon da el mismo numero cada vez que se genera. Por lo tanto se eligio generarlo 35 veces para que sea verdaderaente aleatorio.
      numeroy=rand()%5;//0-4 en y
      }
        numerox=0;//0 en x
        b.setLargo(5);
        b.setOrientacion(numori);
        b.setNombre("Portaaviones");

        bb.setLargo(5);
        bb.setOrientacion(numori);
        bb.setNombre("Portaaviones");

        next=b.getLargo();

    }
    else if(numori==1){//Vertical

      for(int c=0; c<35;c++){
      numerox=rand()%5;//0-4 en x
      }
      numeroy=0;//o en y

        b.setLargo(5);
        b.setOrientacion(numori);
        b.setNombre("Portaaviones");

        bb.setLargo(5);
        bb.setOrientacion(numori);
        bb.setNombre("Portaaviones");
        
        next=b.getLargo();
    }
    
  }
  else if (ix==1){

    if(numori==0){//Horizontal
    
      for(int c=0; c<35;c++){
      numerox=(rand()%2)+5;
      numeroy=rand()%5;
      }
      
        b1.setLargo(4);
        b1.setOrientacion(numori);
        b1.setNombre("Barco de Guerra");

        b11.setLargo(4);
        b11.setOrientacion(numori);
        b11.setNombre("Barco de Guerra");



        next=b1.getLargo();

    }
    else if(numori==1){//Vertical

      for(int c=0; c<35;c++){
      numerox=(rand()%5)+5;
      numeroy=(rand()%2);
      }

        b1.setLargo(4);
        b1.setOrientacion(numori);
        b1.setNombre("Barco de Guerra");

        b11.setLargo(4);
        b11.setOrientacion(numori);
        b11.setNombre("Barco de Guerra");

        next=b1.getLargo();

    }
  }
  else if (ix==2){
    
    if(numori==0){//Horizontal

      for(int c=0; c<35;c++){
      numerox=rand()%2;// 0 o 1 en x
      numeroy=(rand()%5)+5;//5-9 en y
      }
      
        b2.setLargo(3);
        b2.setOrientacion(numori);
        b2.setNombre("Submarino");

        b22.setLargo(3);
        b22.setOrientacion(numori);
        b22.setNombre("Submarino");

        next=b2.getLargo();
  
    }
    else if(numori==1){//Vertical

      for(int c=0; c<35;c++){
      numerox=rand()%4;//0 a 3 en x
      numeroy=(rand()%3)+5;//5-7 en y
      }
      
        b2.setLargo(3);
        b2.setOrientacion(numori);
        b2.setNombre("Submarino");

        b22.setLargo(3);
        b22.setOrientacion(numori);
        b22.setNombre("Submarino");
        next=b2.getLargo();
      }
    
  }
  else if (ix==3){
     
     if(numori==0){//Horizontal

      for(int c=0; c<35;c++){
      numerox=(rand()%2)+4;//4 o 5 en x
      numeroy=(rand()%5)+5;// 5-9 en y
      }
      
      b3.setLargo(3);
      b3.setOrientacion(numori);
      b3.setNombre("Destructor");

      b33.setLargo(4);
      b33.setOrientacion(numori);
      b33.setNombre("Barco de Guerra");

    next=b3.getLargo();

    }
    else if(numori==1){//Vertical}

      for(int c=0; c<35;c++){
      numerox=(rand()%4)+4;//4-7 en x
      numeroy=(rand()%3)+5;//5-7 en y
      }
      

      b3.setLargo(3);
      b3.setOrientacion(numori);
      b3.setNombre("Destructor");
      
      b33.setLargo(4);
      b33.setOrientacion(numori);
      b33.setNombre("Barco de Guerra");

      next=b3.getLargo();
    
    }

  }
  else if (ix==4){
    
      if(numori==0){//Horizontal

      for(int c=0; c<35;c++){
      numeroy=(rand()%5)+5;//5-9 en y
      }
      numerox=8;//8 en x

      b4.setLargo(2);
      b4.setOrientacion(numori);
      b4.setNombre("Patrulla");

      b44.setLargo(2);
      b44.setOrientacion(numori);
      b44.setNombre("Patrulla");


      next=b4.getLargo();

    }
    else if(numori==1){//Vertical

      for(int c=0; c<35;c++){
      numerox=(rand()%2)+8;//8 o 9 en x
      numeroy=(rand()%4)+5;//5-8 en y
      }

      b4.setLargo(2);
      b4.setOrientacion(numori);
      b4.setNombre("Patrulla");

      b44.setLargo(2);
      b44.setOrientacion(numori);
      b44.setNombre("Patrulla");
      
      next=b4.getLargo();
      }
  }


/////////////Tablero 1


if(tabTurn == 1 && numori==0){//horizontal
for(int g=0;g<next;g++){
  Ta1.cambiarEstatusCasilla(Ta1.inttochar(numeroy), (numerox + 1)+g);
}
}
else if(tabTurn == 1 && numori==1){//vertical
  for(int g=0;g<next;g++){
    Ta1.cambiarEstatusCasilla(Ta1.inttochar(numeroy+g), (numerox + 1));

  }
}
else if(tabTurn == 2 && numori==0){//horizontal
for(int g=0;g<next;g++){
  Ta2.cambiarEstatusCasilla(Ta2.inttochar(numeroy), (numerox + 1)+g);
}
}
else if(tabTurn == 2 && numori==1){//vertical
  for(int g=0;g<next;g++){
    Ta2.cambiarEstatusCasilla(Ta2.inttochar(numeroy+g), (numerox + 1));

  }
}

      ///////////Reestart loop or adding to the iteration value ix
    if(ix==4 && tabTurn==1){
      tabTurn=2;
      ix=0;
      continue;
    }
    else if(ix!=4 && tabTurn==1){
      ix+=1;
    }
    else if(ix!=4 && tabTurn==2){
      ix+=1;
    }
    else if(ix==4 && tabTurn==2){
      ix=10;
      break;
    }
  
}

//----------------------------------- xddddddddddddd

  int cuenta1=1,cuenta2=1,column;

  char row;

  int _row,_column,gato11=5,gato12=4,gato13=3,gato14=3,gato15=2,gato21=5,gato22=4,gato23=3,gato24=3,gato25=2;
//contador de barcos tocados

  int counterP1=0,counterP2=0,PorcentajeBarcos1,PorcentajeBarcos2;
  bool kittie = false;

  for(int i=1;i<=nt;i++){
    if(i%2!=0){
      /*jugador 1
      cout<<"Tablero Jugador 2"<<endl;
      Ta2.printTab();//
      PRUEBA DE TABLERO 2*/
      
      

      //
      cout<<"<"<<ju1.getNombre()<<", Jugador "<<ju1.getId()<<", Turno "<<cuenta1<<">"<<endl;
      cin>>row>>column;
      if(row == 'S' && column==0){
        cout << "La partida acabo, nadie gano"<<endl;
        break;
      }
      cout<<"<"<<cuenta1<<", "<<ju1.getId()<<", "<<row<<", "<<column<<">"<<endl;

      _row = Ta2.chartoint(row);
      _column = column - 1;

      if(_column >=0 && _column < 5 && _row >= 0 && _row < 5){//zona 
      if(Ta2.obtenerEstatusCasilla(row, column)){
        if(gato11>1){
          cout<<"< Tocado >"<<endl;
          gato11--;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
          
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
          }
        }

      else{
        cout<<"< Agua >"<<endl;
        kittie = false;
        }
      
      }
      else if(_column >=5 && _column <10 && _row >= 0 && _row < 5){//zona 2
      if(Ta2.obtenerEstatusCasilla(row, column)){
        if(gato12>1){
          cout<<"< Tocado >"<<endl;
          gato12--;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;
      }
      else if(_column >=0 && _column <4 && _row >= 5 && _row < 10){//zona 3
      if(Ta1.obtenerEstatusCasilla(row, column)){
        if(gato13>1){
          cout<<"< Tocado >"<<endl;
          gato13--;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;

      }
      else if(_column >=4 && _column <8 && _row >= 5 && _row < 10){//zona 4
      if(Ta2.obtenerEstatusCasilla(row, column)){
        if(gato14>1){
          cout<<"< Tocado >"<<endl;
          gato14--;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;

      }
      else if(_column >=8 && _column <10 && _row >= 5 && _row < 10){//zona 5
      if(Ta2.obtenerEstatusCasilla(row, column)){
        if(gato15>1){
          cout<<"< Tocado >"<<endl;
          gato15--;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP1+=(1);
          Ta2.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;

      }
      PorcentajeBarcos1 = (counterP1*100)/17;
      if(PorcentajeBarcos1 >= ph){
        cout<<"El ganador es el Jugador "<<ju1.getId()<<" Alias: "<<ju1.getNombre()<<endl;
        cout<<"¡Felicidades!"<<endl;
        break;
      }
      else if(i==nt){
        cout<<"Se acabaron los turnos, fin del juego"<<endl;
        break;
      }
      cuenta1++;

    }
    else{
      /*PRUEBA DE TABLERO 2
      cout<<"Tablero Jugador 1"<<endl;
      Ta1.printTab();
      */

      cout<<"<"<<ju2.getNombre()<<", Jugador "<<ju2.getId()<<", Turno "<<cuenta2<<">"<<endl;
      cin>>row>>column;
      if(row == 'S'){
        cout << "La partida acabo, nadie gano"<<endl;
        break;
      }
      cout<<"<"<<cuenta2<<", "<<ju2.getId()<<", "<<row<<", "<<column<<">"<<endl;


      _row = Ta1.chartoint(row);//convertirlo a int de la matriz
      _column = column - 1;

      if(_column >=0 && _column < 5 && _row >= 0 && _row < 5){//zona 
      if(Ta1.obtenerEstatusCasilla(row, column)){
        if(gato21>1){
          cout<<"< Tocado >"<<endl;
          gato21--;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;
      }
      else if(_column >=5 && _column <10 && _row >= 0 && _row < 5){//zona 2
      if(Ta1.obtenerEstatusCasilla(row, column)){
        if(gato22>1){
          cout<<"< Tocado >"<<endl;
          gato22--;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          Ta1.cambiarEstatusCasilla(row, column);
          counterP2+=(1);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;

      }
      else if(_column >=0 && _column <4 && _row >= 5 && _row < 10){//zona 3
      if(Ta1.obtenerEstatusCasilla(row, column)){
        if(gato23>1){
          cout<<"< Tocado >"<<endl;
          gato23--;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;

      }
      else if(_column >=4 && _column <8 && _row >= 5 && _row < 10){//zona 4
      if(Ta1.obtenerEstatusCasilla(row, column)){
        if(gato24>1){
          cout<<"< Tocado >"<<endl;
          gato24--;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;

      }
      else if(_column >=8 && _column <10 && _row >= 5 && _row < 10){//zona 5
      if(Ta1.obtenerEstatusCasilla(row, column)){
        if(gato25>1){
          cout<<"< Tocado >"<<endl;
          gato25--;
          counterP2+=(1);
          Ta1.cambiarEstatusCasilla(row, column);
          kittie = true;
        }
        else{
          cout<<"< Hundido >"<<endl;
          Ta1.cambiarEstatusCasilla(row, column);
          counterP2+=(1);
          kittie = true;
        }
      }
      else{
        cout<<"< Agua >"<<endl;}
        kittie = false;

      }
      PorcentajeBarcos2 = (counterP2*100)/17;
      if(PorcentajeBarcos2 >= ph){
        cout<<"El ganador es el Jugador "<<ju2.getId()<<" Alias: "<<ju2.getNombre()<<endl;
        cout<<"¡Felicidades!"<<endl;
        cout<<"Juego terminado"<<endl;
        break;
      }
      else if(i==nt){
        cout<<"Se acabaron los turnos, fin del juego"<<endl;
        break;
      }
      cuenta2++;
    }
  }
  
}