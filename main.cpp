#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
#include "funcionesNuestras.h"
#include "rlutil.h"

int modoDeDos (char jugador1[], char jugador2[], int &rondasGanador, int &puntajeGanador, char nombreGanador [], char nombreEmpate[],int &rondasPerdedor, int &puntajePerdedor, char nombrePerdedor[]);
int modoDeUno(char jugador1 [], int &rondasGanador, char nombreGanador[], int &puntajeGanador);
void titulo();
void dadoSeis(int x, int y);
void dadoCinco(int x, int y);
void dadoCuatro(int x, int y);
void dadoTres(int x, int y);
void dadoDos(int x, int y);
void dadoUno(int x, int y);
void puntuacionAlta (int rondasMasAlta, int rondasMasAlta1, int rondasMasAlta2, int puntajeMasAlta, int puntajeMasAlta1, int puntajeMasAlta2,
char nombreMasAlta [], char nombreMasAlta1 [], char nombreMasAlta2 []);
int main()
{

bool bandera = 0;
int rondasPerdedor = 0, puntajePerdedor = 0, rondasGanador = 0, puntajeGanador = 0, rondasMasAlta = 11, puntajeMasAlta = 0,rondasMasAlta1 = 11, puntajeMasAlta1 = 0,rondasMasAlta2 = 11, puntajeMasAlta2 = 0;
char nombreMasAlta [30];
char nombreMasAlta1 [30];
char nombreMasAlta2 [30];
char nombreGanador [30];
char nombreEmpate [30]{'-'};
//char empatados[30];
char nombrePerdedor [30];
//int tam = 3;
char nombre1[30];
char nombre2[30];
int opcion, opcion2;

    titulo();
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(30,15);
    rlutil::setColor(rlutil::MAGENTA);
    cout<<"[ENTER PARA INICIAR]";
    rlutil::setColor(rlutil::BLACK);
    cout<<'\t'<<'\t'<<'\t'<<"      ";
    system("pause");
    system("cls");



    titulo();

    rlutil::locate(30,15);
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<"1-JUEGO NUEVO"<<endl;
    rlutil::setColor(rlutil::LIGHTGREEN);
    rlutil::locate(30,18);
    cout<<"2-PUNTUACION MAS ALTA"<<endl;
    rlutil::locate(30,21);
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<"3-CERRAR"<<endl;
    rlutil::locate(30,23);
    rlutil::setColor(rlutil::WHITE);
    cin>>opcion;

    while((opcion != 1) && (opcion != 2) && (opcion != 3)){
    rlutil::locate(30,23);
    cout<<"OPCION INCORRECTA";
    rlutil::setColor(rlutil::BLACK);
    system("pause");
    system("cls");
    titulo();
    rlutil::locate(30,15);
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<"1-JUEGO NUEVO"<<endl;
    rlutil::setColor(rlutil::LIGHTGREEN);
    rlutil::locate(30,18);
    cout<<"2-PUNTUACION MAS ALTA"<<endl;
    rlutil::locate(30,21);
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<"3-CERRAR"<<endl;
    rlutil::locate(30,23);
    rlutil::setColor(rlutil::WHITE);
    cin>>opcion;
        }

    while(opcion){
            system("cls");
    switch(opcion){
        case 1:
            system("cls");
            titulo();
            rlutil::locate(30,15);
            rlutil::setColor(rlutil::LIGHTCYAN);
            cout<<"1-UN JUGADOR"<<endl;
            rlutil::locate(30,18);
            rlutil::setColor(rlutil::LIGHTGREEN);
            cout<<"2-DOS JUGADORES "<<endl;
            rlutil::locate(30,21);
            rlutil::setColor(rlutil::LIGHTMAGENTA);
            cout<<"3-VOLVER ATRAS"<<endl;
            rlutil::locate(30,23);
            rlutil::setColor(rlutil::WHITE);
            cin>>opcion2;

            while((opcion2 != 1) && (opcion2 != 2) && (opcion2 != 3)){
            rlutil::locate(30,23);
            cout<<"OPCION INCORRECTA";
            rlutil::setColor(rlutil::BLACK);
            system("pause");
            system("cls");
            titulo();
            rlutil::locate(30,15);
            rlutil::setColor(rlutil::LIGHTCYAN);
            cout<<"1-UN JUGADOR"<<endl;
            rlutil::locate(30,18);
            rlutil::setColor(rlutil::LIGHTGREEN);
            cout<<"2-DOS JUGADORES "<<endl;
            rlutil::locate(30,21);
            rlutil::setColor(rlutil::LIGHTMAGENTA);
            cout<<"3-VOLVER ATRAS"<<endl;
            rlutil::locate(30,23);
            rlutil::setColor(rlutil::WHITE);
            cin>>opcion2;
                }

              switch(opcion2){
                case 1:
                    system("cls");
                    titulo();
                    rlutil::locate(30,15);
                    rlutil::setColor(rlutil::LIGHTCYAN);
                    cout<<"INGRESAR NOMBRE: ";
                    rlutil::setColor(rlutil::WHITE);
                    cin>>nombre1;
                    cout<<endl;
                    system("cls");
                    modoDeUno(nombre1, rondasGanador, nombreGanador, puntajeGanador);

                     if(bandera == 0){
                            bandera = 1;
                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                    }
                    else{if(rondasGanador < rondasMasAlta){

                            rondasMasAlta2 = rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);


                            rondasMasAlta1 = rondasMasAlta;
                            puntajeMasAlta1 = puntajeMasAlta;
                            strcpy(nombreMasAlta1, nombreMasAlta);

                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                    }
                    else{if(rondasGanador == rondasMasAlta){
                        if(puntajeGanador > puntajeMasAlta){

                            rondasMasAlta2 = rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);


                            rondasMasAlta1 = rondasMasAlta;
                            puntajeMasAlta1 = puntajeMasAlta;
                            strcpy(nombreMasAlta1, nombreMasAlta);

                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                        }else{ if(rondasGanador < rondasMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);
                        }
                        else{if(rondasGanador ==  rondasMasAlta1){
                            if(puntajeGanador > puntajeMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);

                            } else{if(rondasGanador < rondasMasAlta2){
                                rondasMasAlta2 = rondasGanador;
                                puntajeMasAlta2 = puntajeGanador;
                                strcpy(nombreMasAlta2, nombreGanador);
                            }
                            else{if(rondasGanador == rondasMasAlta2){
                                if(puntajeGanador > puntajeMasAlta2){
                                    rondasMasAlta2 = rondasGanador;
                                    puntajeMasAlta2 = puntajeGanador;
                                    strcpy(nombreMasAlta2, nombreGanador);
                                }}}}}}  }  }
                                else{

                                if(rondasGanador < rondasMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);
                        }
                        else{if(rondasGanador ==  rondasMasAlta1){
                            if(puntajeGanador > puntajeMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);

                            } else{if(rondasGanador < rondasMasAlta2){
                                rondasMasAlta2 = rondasGanador;
                                puntajeMasAlta2 = puntajeGanador;
                                strcpy(nombreMasAlta2, nombreGanador);
                            }
                            else{if(rondasGanador == rondasMasAlta2){
                                if(puntajeGanador > puntajeMasAlta2){
                                    rondasMasAlta2 = rondasGanador;
                                    puntajeMasAlta2 = puntajeGanador;
                                    strcpy(nombreMasAlta2, nombreGanador);
                                }}}}}

                                else{

                                if(rondasGanador < rondasMasAlta2){
                                rondasMasAlta2 = rondasGanador;
                                puntajeMasAlta2 = puntajeGanador;
                                strcpy(nombreMasAlta2, nombreGanador);
                            }
                            else{if(rondasGanador == rondasMasAlta2){
                                if(puntajeGanador > puntajeMasAlta2){
                                    rondasMasAlta2 = rondasGanador;
                                    puntajeMasAlta2 = puntajeGanador;
                                    strcpy(nombreMasAlta2, nombreGanador);
                                }}}
                                }}

                                }}}



                    break;
                case 2:
                    system("cls");
                    titulo();
                    rlutil::locate(21,15);
                    rlutil::setColor(rlutil::LIGHTCYAN);
                    cout<<"INGRESAR NOMBRE DEL JUGADOR 1: ";
                    rlutil::setColor(rlutil::WHITE);
                    cin>>nombre1;
                    system("cls");
                    titulo();
                    rlutil::locate(21,15);
                    rlutil::setColor(rlutil::LIGHTCYAN);
                    cout<<"INGRESAR NOMBRE DEL JUGADOR 2: ";
                    rlutil::setColor(rlutil::WHITE);
                    cin>>nombre2;
                    cout<<endl;

                    system("cls");
                    modoDeDos(nombre1, nombre2, rondasGanador, puntajeGanador, nombreGanador, nombreEmpate, rondasPerdedor, puntajePerdedor, nombrePerdedor);

                        if(bandera == 0){
                            bandera = 1;
                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                            if(nombreEmpate[0] != '-'){
                                rondasMasAlta1 = rondasGanador;
                                puntajeMasAlta1 = puntajeGanador;
                                strcpy(nombreMasAlta1, nombreEmpate);
                            }
                            }

                            else{
                                if(nombreEmpate[0] != '-'){
                                    if(rondasGanador < rondasMasAlta){

                            rondasMasAlta2 = rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);


                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreEmpate);

                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                    }
                    else{if(rondasGanador == rondasMasAlta){
                        if(puntajeGanador > puntajeMasAlta){

                            rondasMasAlta2 = rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);


                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreEmpate);

                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                       }else{if(rondasGanador < rondasMasAlta1){

                            rondasMasAlta2 =  rondasGanador;
                            puntajeMasAlta2 = puntajeGanador;
                            strcpy(nombreMasAlta2, nombreEmpate);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);
                        }
                        else{if(rondasGanador ==  rondasMasAlta1){
                            if(puntajeGanador > puntajeMasAlta1){

                            rondasMasAlta2 =  rondasGanador;
                            puntajeMasAlta2 = puntajeGanador;
                            strcpy(nombreMasAlta2, nombreEmpate);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);
                            }
                            else{if(rondasGanador < rondasMasAlta2){
                                rondasMasAlta2 = rondasGanador;
                                puntajeMasAlta2 = puntajeGanador;
                                strcpy(nombreMasAlta2, nombreGanador);
                            }
                            else{if(rondasGanador == rondasMasAlta2){
                                if(puntajeGanador > puntajeMasAlta2){
                                    rondasMasAlta2 = rondasGanador;
                                    puntajeMasAlta2 = puntajeGanador;
                                    strcpy(nombreMasAlta2, nombreGanador);
                                }}}}}}}}}}



                            else{if(rondasGanador < rondasMasAlta){

                            rondasMasAlta2 = rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);


                            rondasMasAlta1 = rondasMasAlta;
                            puntajeMasAlta1 = puntajeMasAlta;
                            strcpy(nombreMasAlta1, nombreMasAlta);

                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                    }
                    else{if(rondasGanador == rondasMasAlta){
                        if(puntajeGanador > puntajeMasAlta){

                            rondasMasAlta2 = rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);


                            rondasMasAlta1 = rondasMasAlta;
                            puntajeMasAlta1 = puntajeMasAlta;
                            strcpy(nombreMasAlta1, nombreMasAlta);

                            rondasMasAlta = rondasGanador;
                            puntajeMasAlta = puntajeGanador;
                            strcpy(nombreMasAlta, nombreGanador);
                        }else{ if(rondasGanador < rondasMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);
                        }
                        else{if(rondasGanador ==  rondasMasAlta1){
                            if(puntajeGanador > puntajeMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);

                            } else{if(rondasGanador < rondasMasAlta2){
                                rondasMasAlta2 = rondasGanador;
                                puntajeMasAlta2 = puntajeGanador;
                                strcpy(nombreMasAlta2, nombreGanador);
                            }
                            else{if(rondasGanador == rondasMasAlta2){
                                if(puntajeGanador > puntajeMasAlta2){
                                    rondasMasAlta2 = rondasGanador;
                                    puntajeMasAlta2 = puntajeGanador;
                                    strcpy(nombreMasAlta2, nombreGanador);
                                }}}}}}  }  }
                                else{

                                if(rondasGanador < rondasMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);
                        }
                        else{if(rondasGanador ==  rondasMasAlta1){
                            if(puntajeGanador > puntajeMasAlta1){

                            rondasMasAlta2 =  rondasMasAlta1;
                            puntajeMasAlta2 = puntajeMasAlta1;
                            strcpy(nombreMasAlta2, nombreMasAlta1);

                            rondasMasAlta1 = rondasGanador;
                            puntajeMasAlta1 = puntajeGanador;
                            strcpy(nombreMasAlta1, nombreGanador);

                            } else{if(rondasGanador < rondasMasAlta2){
                                rondasMasAlta2 = rondasGanador;
                                puntajeMasAlta2 = puntajeGanador;
                                strcpy(nombreMasAlta2, nombreGanador);
                            }
                            else{if(rondasGanador == rondasMasAlta2){
                                if(puntajeGanador > puntajeMasAlta2){
                                    rondasMasAlta2 = rondasGanador;
                                    puntajeMasAlta2 = puntajeGanador;
                                    strcpy(nombreMasAlta2, nombreGanador);
                                }}}}}

                                else{

                                if(rondasGanador < rondasMasAlta2){
                                rondasMasAlta2 = rondasGanador;
                                puntajeMasAlta2 = puntajeGanador;
                                strcpy(nombreMasAlta2, nombreGanador);
                            }
                            else{if(rondasGanador == rondasMasAlta2){
                                if(puntajeGanador > puntajeMasAlta2){
                                    rondasMasAlta2 = rondasGanador;
                                    puntajeMasAlta2 = puntajeGanador;
                                    strcpy(nombreMasAlta2, nombreGanador);
                                }}}
                                }}

                                }}}
              nombreEmpate[0]='-';


                    break;
                case 3:
                    break;
                default:cout<<"Opcion incorrecta"<<endl;
                    break;
              }}
            break;


        case 2:
        puntuacionAlta (rondasMasAlta, rondasMasAlta1, rondasMasAlta2, puntajeMasAlta, puntajeMasAlta1, puntajeMasAlta2,
    nombreMasAlta, nombreMasAlta1, nombreMasAlta2);

         ///variable de la puntuacion
            break;

        case 3:return 0;
            break;


        default:cout<<"OPCION INCORRECTA"<<endl;
            break;

    }
    system("cls");
    titulo();
    rlutil::locate(30,15);
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<"1-JUEGO NUEVO"<<endl;
    rlutil::setColor(rlutil::LIGHTGREEN);
    rlutil::locate(30,18);
    cout<<"2-PUNTUACION MAS ALTA"<<endl;
    rlutil::locate(30,21);
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<"3-CERRAR"<<endl;
    rlutil::locate(30,23);
    rlutil::setColor(rlutil::WHITE);
    cin>>opcion;

    while((opcion != 1) && (opcion != 2) && (opcion != 3)){
    rlutil::locate(30,23);
    cout<<"OPCION INCORRECTA";
    rlutil::setColor(rlutil::BLACK);
    system("pause");
    system("cls");
    titulo();
    rlutil::locate(30,15);
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<"1-JUEGO NUEVO"<<endl;
    rlutil::setColor(rlutil::LIGHTGREEN);
    rlutil::locate(30,18);
    cout<<"2-PUNTUACION MAS ALTA"<<endl;
    rlutil::locate(30,21);
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<"3-CERRAR"<<endl;
    rlutil::locate(30,23);
    rlutil::setColor(rlutil::WHITE);
    cin>>opcion;
        }

    }
    return 0;
}
