#include <iostream>
#include <iomanip>
#include "funciones.h"
using namespace std;


int main() {
  int opcion,fO,cO,fD,cD;
  ImprimeMenu();
  cin >> opcion;
  cout << endl;
  switch(opcion){
    case 1:{
      do{
        Imprime1();
        do{
          cout << "Ingrese la posicion de origen\n" << "Fila: "; cin >> fO; cout << "Columna: "; cin >> cO;
          if(Condicion1(fO,cO)==false)
            cout << "Posicion no valida\n";
        }while(Condicion1(fO,cO)==false);
        do{
          cout << "Ingrese la posicion de destino\n" << "Fila: ";cin >> fD; cout << "Columna: "; cin >> cD;
          if(Condicion2(fD,cD)==false)
            cout << "Posicion no valida\n";
        }while(Condicion2(fD,cD)==false);
        Cambia(fO,cO,fD,cD);
      }while(Perdiste()==true || Ganaste()==false);

    }
    break;
    case 2:{

    }
    break;
    case 3:{

    }
    break;
  }




}
