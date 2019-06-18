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
            do{
                Imprime1(M);
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
                else{
                    cout << "PERDISTE!!"<< endl
                    break;
                }
                cont=0;
            }while(Perdiste(M)==true || Ganaste(M)==false);

        }
            break;

        case 2:{
            do{
                Imprime1(A);
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
            }while(Perdiste(A)==true || Ganaste(A)==false);
        }
            break;

        case 3:{
            do{
                Imprime1(N);
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
            }while(Perdiste(N)==true || Ganaste(N)==false);
        }
            break;
    }
}
