#include "funciones.h"

void ImprimeMenu(){
  cout << "Menú - Juego Senku\n" << "-------------------------------\n" << "1. Estilo Frances\n"<<"2. Estilo Diamante\n"<<"3. Estilo Ingles\n"<<"--------------------------\n"<<"0. Salir del programa\n\n"<<"Seleccionar opcion: ";}

char M[8][8]={" "" ""0""0""0"" "" ",
              " "" ""0""0""0"" "" ",
              "0""0""0""0""0""0""0",
              "0""0""0""+""0""0""0",
              "0""0""0""0""0""0""0",
              " "" ""0""0""0"" "" ",
              " "" ""0""0""0"" "" "};
void Imprime1(){
  cout << " ";
  for (int i=1;i<8;i++){
    cout << setw(4) << i;
  }
  cout << endl << endl;
  for (int i=1;i<8;i++){
    cout << i;
    for(int j=0;j<8;j++){
      cout << setw(4) << M[i-1][j];
    }
    cout << endl << endl;
  }    }
void Cambia(int FO,int CO, int FD, int CD){
  M[FO-1][CO-1]='+';
  M[FD-1][CD-1]='0';
  M[((FO-1)+(FD-1))/2][((CO-1)+(CD-1))/2]='+';}

bool Condicion1(int FO,int CO){
  if(M[FO-1][CO-1]=='0'){
    return true;
    if(M[FO-1][CO+1]=='+'){
      return true;
    }
  }
  else 
    return false;}
bool Condicion2(int FD,int CD){
  if(M[FD-1][CD-1]=='+')
    return true;
  else 
    return false;}

bool Perdiste(){
  int cont=0;
  for (int i=0;i<8;i++){
    for (int j=0;j<8;j++){
      if(M[i][j]==0){
        if(M[i][j-1]=='+'&& M[i][j+1]=='+' && M[i-1][j]=='+'&& M[i+1][j]=='+'){
          cont++;
        }
      }
    }
  }
  return true;}

bool Ganaste(){
  int cont=0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(M[i][j]=='0'){
        cont++;
      }
    }
  }
  if(cont==1){
    return true;
  }
  else
    return false;}