#include <iostream>
#include <iomanip>
#include "funciones.h"
using namespace std;


int main() {
    char M[8][8]={" "" ""0""0""0"" "" ",
                  " "" ""0""0""0"" "" ",
                  "0""0""0""0""0""0""0",
                  "0""0""0""+""0""0""0",
                  "0""0""0""0""0""0""0",
                  " "" ""0""0""0"" "" ",
                  " "" ""0""0""0"" "" "};

    char A[8][8]={" "" ""0""0""0"" "" ",
                  " ""0""0""0""0""0"" ",
                  "0""0""0""0""0""0""0",
                  "0""0""0""+""0""0""0",
                  "0""0""0""0""0""0""0",
                  " ""0""0""0""0""0"" ",
                  " "" ""0""0""0"" "" "};

    char N[8][8]={" ""0""0""0"" "" "" ",
                  " ""0""0""0"" "" "" ",
                  " ""0""0""0"" "" "" ",
                  "0""0""0""0""0""0""0",
                  "0""0""+""0""0""0""0",
                  "0""0""0""0""0""0""0",
                  " ""0""0""0"" "" "" ",
                  " ""0""0""0"" "" "" "};

    int opcion,fO,cO,fD,cD;
    ImprimeMenu();
    cin >> opcion;
    cout << endl;
    switch(opcion){
        case 1:{
            int jugadas=1;
            do{

                Imprime1(M);
                cout << "JUGADA: " << jugadas<<endl;
                do{
                    cout << "Ingrese la posicion de origen\n" << "Fila: "; cin >> fO; cout << "Columna: "; cin >> cO;
                    if(Condicion1(fO,cO,M)==false)
                        cout << "Posicion no valida\n";
                }while(Condicion1(fO,cO,M)==false);
                do{
                    cout << "Ingrese la posicion de destino\n" << "Fila: ";cin >> fD; cout << "Columna: "; cin >> cD;
                    if(Condicion2(fD,cD,M)==false)
                        cout << "Posicion no valida\n";
                }while(Condicion2(fD,cD,M)==false);
                Cambia(fO,cO,fD,cD,M);
                int cont=0;
                for(int i=0;i<8;i++){
                    for(int j=0;j<8;j++){
                        if(M[i][j]=='0'){
                            cont++;
                        }
                    }
                }
                if(cont==1){
                    Imprime1(M);
                    cout << "GANASTE!!";
                    break;
                }
                cont=0;
                jugadas++;
            }while(Ganaste(M)==false||Perdiste(M)==false);

        }
            break;

        case 2:{
            int jugadas=0;
            do{
                Imprime1(A);
                cout << "JUGADA: " << jugadas<<endl;
                do{
                    cout << "Ingrese la posicion de origen\n" << "Fila: "; cin >> fO; cout << "Columna: "; cin >> cO;
                    if(Condicion1(fO,cO,A)==false)
                        cout << "Posicion no valida\n";
                }while(Condicion1(fO,cO,A)==false);
                do{
                    cout << "Ingrese la posicion de destino\n" << "Fila: ";cin >> fD; cout << "Columna: "; cin >> cD;
                    if(Condicion2(fD,cD,A)==false)
                        cout << "Posicion no valida\n";
                }while(Condicion2(fD,cD,A)==false);
                Cambia(fO,cO,fD,cD,A);
                int cont=0;
                for(int i=0;i<8;i++){
                    for(int j=0;j<8;j++){
                        if(M[i][j]=='0'){
                            cont++;
                        }
                    }
                }
                if(cont==1){
                    Imprime1(M);
                    cout << "GANASTE!!";
                    break;
                }
                cont=0;
                jugadas++;
            }while(Perdiste(A)==false || Ganaste(A)==false);
        }
            break;

        case 3:{
            do{
                int jugadas=0;
                Imprime1(N);
                cout << "JUGADA: " << jugadas<<endl;
                do{
                    cout <<"Ingrese la posición de origen\n" << "Fila: "; cin >> fO;
                    cout << "Columna: "; cin >> cO;
                    if(Condicion1(fO,cO,N)==false)
                        cout << "Posicion no valida\n";
                }while(Condicion1(fO,cO,N)==false);
                do{
                    cout << "Ingrese la posicion de destino\n" << "Fila: ";cin >> fD;
                    cout << "Columna: "; cin >> cD;
                    if(Condicion2(fD,cD,N)==false)
                        cout << "Posicion no valida\n";
                }while(Condicion2(fD,cD,N)==false);
                Cambia(fO,cO,fD,cD,N);
                int cont=0;
                for(int i=0;i<8;i++){
                    for(int j=0;j<8;j++){
                        if(M[i][j]=='0'){
                            cont++;
                        }
                    }
                }
                if(cont==1){
                    Imprime1(M);
                    cout << "GANASTE!!";
                    break;
                }
                cont=0;
                jugadas++;
            }while(Perdiste(N)==true || Ganaste(N)==false);
        }
            break;
    }
}
