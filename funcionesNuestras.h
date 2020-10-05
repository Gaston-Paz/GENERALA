#ifndef FUNCIONESNUESTRAS_H_INCLUDED
#define FUNCIONESNUESTRAS_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include "rlutil.h"
void cargarVector(int v[], int tam);///asigna valores a cada una de las posiciones del vector

void mostrarVector(int vec [], int tam, int x, int y);/// muestra lo que contiene cada una de las posiciones del vector

void ponerCero(int v[], int tam);/// pone en 0 todas las posiciones del vector

int posicionNumeroEnVector(int v[],int tam, int numero);/// devuelve la posición que ocupa un número que se
///envía como parámetro. Devuelve la primera posición que encuentra el número. Si no lo encuentra devuelve -1

int contarNumerosRepetidos(int v[], int tam , int numero);///cuenta la cantidad de veces que se repite un
///número en el vector

int maximoVector(int v[], int tam);///devuelve  la posición (primera) que ocupa el máximo en el vector

int minimoVector(int v[], int tam);///devuelve  la posición (primera) que ocupa el mínimo en el vector

void cargarAleatorio(int v[], int tam, int limite);///asigna valores aleatorios a cada al vector

void ordenarVector(int v[], int tam );/// ordena de menor a mayor un vector

int sumarVector(int v[], int tam ); /// suma los valores contenidos en el vector

int copiarVector(int v[], int v2[],int tam ); ///copia el vector v en v2

bool compararVectores(int v[], int v2[],int tam );/// compara los dos vectores que recibe. Si son iguales
///devuelve true, si no devuelve false

void cargarAleatorioDadoX(int v[],int i, int limite);

int generalaServida(int v[], int tam);

void titulo();
void ordenarVector(int v[], int tam );
int contarNumerosRepetidos(int v[], int numero, int tam);
bool poker(int v[], int tam);
bool generala(int v[], int tam);
bool full(int v[], int tam);
void juegoDeSeis(int v[], int tam, int con[5], int sumaJuegoSimple[]);
void juegoDeCinco(int v[], int tam, int con[4], int sumaJuegoSimple[]);
void juegoDeCuatro(int v[], int tam, int con[3], int sumaJuegoSimple[]);
void juegoDeTres(int v[], int tam, int con[2], int sumaJuegoSimple[]);
void juegoDeDos(int v[], int tam, int con[1], int sumaJuegoSimple[]);
void juegoDeUno(int v[], int tam, int con[0], int sumaJuegoSimple[]);
int maximoVector(int v[], int tam);
bool escalera(int v[], int tam);
int juegolanzamiento(int dados[], int tam, int &puntaje, int con [], int sumaJuegoSimple[]);
int puntoslanzamiento(int dados[], int tam, int con[], int sumaJuegoSimple[]);
int tiradaDeDados(int dados[], int tam, char jugador[], int puntos, int ronda);
void interfaz(char jugador[], int ronda, int puntaje, int lanzamineto);
int modoDeDos (char jugador1[], char jugador2[], int &rondasGanador, int &puntajeGanador, char nombreGanador [],
               char nombreEmpate[],int &rondasPerdedor, int &puntajePerdedor, char nombrePerdedor[]);

int modoDeUno(char jugador1 [], int &rondasGanador, char nombreGanador[], int &puntajeGanador);
void dadoSeis(int x, int y);
void dadoCinco(int x, int y);
void dadoCuatro(int x, int y);
void dadoTres(int x, int y);
void dadoDos(int x, int y);
void dadoUno(int x, int y);
void puntuacionAlta (int rondasMasAlta, int rondasMasAlta1, int rondasMasAlta2, int puntajeMasAlta, int puntajeMasAlta1, int puntajeMasAlta2,
char nombreMasAlta [], char nombreMasAlta1 [], char nombreMasAlta2 []);

///LA FUNCION POKER DEVUELVE UN VERDADERO SI LA JUGADA HIZO POKER

bool poker(int v[], int tam){
int x;
int contadores [5]{};

for(x=0;x<tam;x++){
contadores [x] = contarNumerosRepetidos(v, v[x], tam);}

for(x=0;x<tam;x++){
if(contadores[x] == 4) return 1;

}


return 0;}

///LA FUNCION GENERALA DEVUELVE UN VERDADERO SI LA JUGADA HIZO GENERALA

bool generala(int v[], int tam){
int x;
int contadores [5]{};

for(x=0;x<tam;x++){
contadores [x] = contarNumerosRepetidos(v, v[x], tam);}

for(x=0;x<tam;x++){
if(contadores[x] == 5) return 1;

}return 0;}

///LA FUNCION FULL DEVUELVE UN VERDADERO SI LA JUGADA HIZO FULL

bool full(int v[], int tam){
 int x, y;
 int contadores [5]{};
 for(y=0;y<tam;y++){

 for(x=0;x<tam;x++){
    if(v[y] == v[x]) contadores[y]++;
 }}

 if((contadores [0] == 2 || contadores [0] == 3) &&
    (contadores [1] == 2 || contadores [1] == 3) &&
    (contadores [2] == 2 || contadores [2] == 3) &&
    (contadores [3] == 2 || contadores [3] == 3) &&
    (contadores [4] == 2 || contadores [4] == 3) ){return 1;}

return 0;}

///LA FUNCIONES DE JUEGOS SIMPLES - almacenan en el vector sumaJuegoSimple el puntaje de la ronda

void juegoDeSeis(int v[], int tam, int con[5], int sumaJuegoSimple[]){
int x;

for(x=0;x<tam;x++){
    if(v[x] == 6) con[5]++;}
    if(con[5] > 0)sumaJuegoSimple[5] = con[5]*6;

}

void juegoDeCinco(int v[], int tam, int con[4], int sumaJuegoSimple[]){
int x;

for(x=0;x<tam;x++){
    if(v[x] == 5) con[4]++;}

    if(con[4] > 0)sumaJuegoSimple[4] = con[4]*5;
}

void juegoDeCuatro(int v[], int tam, int con[3], int sumaJuegoSimple[]){
int x;

for(x=0;x<tam;x++){
    if(v[x] == 4) con[3]++;}

    if(con[3] > 0)sumaJuegoSimple[3] = con[3]*4;

}

void juegoDeTres(int v[], int tam, int con[2], int sumaJuegoSimple[]){
int x;

for(x=0;x<tam;x++){
    if(v[x] == 3) con[2]++;}

    if(con[2] > 0) sumaJuegoSimple[2] = con[2]*3;

}

void juegoDeDos(int v[], int tam, int con[1], int sumaJuegoSimple[]){
int x;

for(x=0;x<tam;x++){
    if(v[x] == 2) con[1]++;}

    if(con[1] > 0) sumaJuegoSimple[1] = con[1]*2;

}

void juegoDeUno(int v[], int tam, int con[0], int sumaJuegoSimple[]){
int x;

for(x=0;x<tam;x++){
    if(v[x] == 1) con[0]++;}
    if(con[0] > 0) sumaJuegoSimple[0]= con[0]*1;

}

///LA FUNCION ESCALERA DEVUELVE UN VERDADERO SI LA JUGADA HIZO ESCALERA

bool escalera(int v[], int tam){
int conDados = 0, x;
ordenarVector(v,tam);
for(x=0;x<4;x++){
    if(v[x] == v[x+1]-1)
        conDados++;}
if(conDados == 4)return 1;

return 0;}

///LA FUNCION juegolanzamiento DEVUELVE EL JUEGO HECHO EN LA RONDA

int juegolanzamiento(int dados[], int tam, int &puntaje, int con [], int sumaJuegoSimple[]){

if(escalera(dados, tam) == 1){rlutil::locate(32,18);cout<<"HICISTE ESCALERA"<<endl<<endl; rlutil::setColor(rlutil::BLACK); system("pause"); return 1;}
   else{if(full(dados, tam) == 1){rlutil::locate(32,18);cout<<"HICISTE FULL"<<endl<<endl; rlutil::setColor(rlutil::BLACK); system("pause");return 2;}
        else{if(poker(dados, tam) == 1) {rlutil::locate(32,18);cout<<"HICISTE POKER"<<endl<<endl; rlutil::setColor(rlutil::BLACK); system("pause"); return 3;}
            else{if(generala(dados, tam) == 1){rlutil::locate(32,18); cout<<"HICISTE GENERALA"<<endl<<endl; rlutil::setColor(rlutil::BLACK); system("pause"); return 4;}
                else{juegoDeUno(dados, tam, con, sumaJuegoSimple); juegoDeDos(dados, tam, con, sumaJuegoSimple);
                    juegoDeTres(dados, tam, con, sumaJuegoSimple); juegoDeCuatro(dados, tam, con, sumaJuegoSimple);
                    juegoDeCinco(dados, tam, con, sumaJuegoSimple); juegoDeSeis(dados, tam, con, sumaJuegoSimple);
                    return 5;}}}}



                        /*if(juegoDeSeis(dados, tam, con) == 1){cout<<"Juego de seis. Tiraste "<<con<<" seis."<<endl; return 5;}
                    else{if(juegoDeCinco(dados, tam, con) == 1){cout<<"Juego de cinco. Tiraste "<<con<<" cinco."<<endl; return 6;}
                        else{if(juegoDeCuatro(dados, tam, con) == 1){cout<<"Juego de cuatro. Tiraste "<<con<<" cuatro."<<endl; return 7;}
                            else{if(juegoDeTres(dados, tam, con) == 1){cout<<"Juego de tres. Tiraste "<<con<<" tres."<<endl;return 8;}
                                else{if(juegoDeDos(dados, tam, con) == 1){cout<<"Juego de dos. Tiraste "<<con<<" dos."<<endl;return 9;}
                                    else{if(juegoDeUno(dados, tam, con) == 1){cout<<"Juego de uno. Tiraste "<<con<<" unos."<<endl; return 10;}}}}}}}}}}*/



}

///LA FUNCION puntoslanzamiento DEVUELVE EL PUNTAJE DE LA RONDA

int puntoslanzamiento(int dados[], int tam, int con[], int sumaJuegoSimple[]){
int puntaje=0, maximo;
switch(juegolanzamiento(dados, tam, puntaje, con, sumaJuegoSimple)){
        case 1:
            puntaje += 25;
        break;
        case 2:
            puntaje += 30;
        break;
        case 3:
            puntaje += 40;
        break;
        case 4:
            puntaje += 50;
        break;
        case 5:

            maximo = maximoVector(sumaJuegoSimple, 6)+1;
            rlutil::locate(30,18);
            cout<<"HICISTE UN JUEGO DE "<<maximo<<endl<<endl;
            rlutil::setColor(rlutil::BLACK);
            system("pause");
            puntaje = sumaJuegoSimple[maximo-1];
        break;

}

return puntaje;
}

///LA FUNCION tiradaDeDados ES DONDE SE LANZAN LOS DADOS, SE DESARROLLA LA RONDA Y DEVUELVE EL PUNTAJE

int tiradaDeDados(int dados[], int tam, char jugador[], int puntos, int ronda){
int puntosMano=0, lanzamiento=1;
int contador[6]{};
int sumaJuegoSimple[6]{};
bool elegirDado[5];
int x, con=1, servida=0;
char sigue, decision;
int a=12, b=11;
rlutil::locate(31,12);

cout<<"TIRA LOS DADOS";
rlutil::setColor(rlutil::BLACK);
cout<<'\t'<<'\t'<<'\t'<<'\t'<<"    ";
system("pause");
system("cls");
cout<<endl;
cargarAleatorio(dados, 5, 6);
///rlutil::setColor(rlutil::WHITE); cargarVector(dados,5); system("cls");rlutil::setColor(rlutil::BLACK);
cout<<endl;
interfaz(jugador, ronda, puntos, lanzamiento);
mostrarVector(dados, 5, a, b);
cout<<endl;

for(x=1;x<5;x++){
    if(dados[0] == dados[x])servida++;
}


if(servida == 4){rlutil::locate(30, 18);cout<<"HICISTE GENERALA SERVIDA"<<endl<<endl; rlutil::setColor(rlutil::BLACK);system("pause"); return 420;}
else{
rlutil::locate(12, 18);
cout<<"QUIERE VOLVER A TIRAR LOS DADOS? (S/N)  ";
cin>>sigue;
system("cls");
interfaz(jugador, ronda, puntos, lanzamiento);
mostrarVector(dados, 5, a, b);

while((sigue != 's' && sigue != 'S') && (sigue != 'n' && sigue != 'N')){
    rlutil::locate(12, 18);
    cout<<"OPCION INCORRECTA";
    rlutil::locate(12, 20);
    cout<<"ELIJA NUEVAMENTE";
    rlutil::setColor(rlutil::BLACK);
    system("pause");
    system ("cls");
    interfaz(jugador, ronda, puntos, lanzamiento);
    mostrarVector(dados, 5, a, b);
    rlutil::locate(12, 18);
    cout<<"QUIERE VOLVER A TIRAR LOS DADOS? (S/N)  ";
    cin>>sigue;
    system("cls");

}
while(con!=3 && (sigue == 's' || sigue == 'S')){

for(x=0;x<5;x++) {elegirDado[x] = 0;}

if(sigue == 's' || sigue == 'S'){lanzamiento++;
    system("cls");
    interfaz(jugador, ronda, puntos, lanzamiento);
    mostrarVector(dados, 5, a, b);
    rlutil::locate(12, 18);
    cout<<"DESEA VOLVER A TIRAR TODOS LOS DADOS? (S/N) ";
    cin>>decision;
    system("cls");
    interfaz(jugador, ronda, puntos, lanzamiento);
    mostrarVector(dados, 5, a, b);

    while((decision != 's' && decision != 'S') && (decision != 'n' && decision != 'N')){
    rlutil::locate(12, 18);
    cout<<"OPCION INCORRECTA";
    rlutil::locate(12, 20);
    cout<<"ELIJA NUEVAMENTE";
    rlutil::setColor(rlutil::BLACK);
    system("pause");
    system ("cls");
    interfaz(jugador, ronda, puntos, lanzamiento);
    mostrarVector(dados, 5, a, b);
    rlutil::locate(12, 18);
    cout<<"DESEA VOLVER A TIRAR TODOS LOS DADOS? (S/N) ";
    cin>>decision;
    system("cls");
    interfaz(jugador, ronda, puntos, lanzamiento);
    mostrarVector(dados, 5, a, b);
} }

            if(decision == 's' || decision == 'S'){
            system("cls");
            ///rlutil::setColor(rlutil::WHITE);cargarVector(dados,5); system("cls");rlutil::setColor(rlutil::BLACK);
            cargarAleatorio(dados, 5, 6);
            interfaz(jugador, ronda, puntos, lanzamiento);
            mostrarVector(dados, 5, a, b);
            cout<<endl;}
            else{for(x=0;x<5;x++){
                rlutil::locate(12, 18);
                cout<<"QUERES VOLVER A TIRAR EL DADO NUMERO "<<x+1<<" ? (S/N)  ";
                cin>>decision;
                system("cls");
                interfaz(jugador, ronda, puntos, lanzamiento);
                mostrarVector(dados, 5, a, b);

                while((decision != 's' && decision != 'S') && (decision != 'n' && decision != 'N')){
                        rlutil::locate(12, 18);
                        cout<<"OPCION INCORRECTA";
                        rlutil::locate(12, 20);
                        cout<<"ELIJA NUEVAMENTE";
                        rlutil::setColor(rlutil::BLACK);
                        system("pause");
                        system ("cls");

                        interfaz(jugador, ronda, puntos, lanzamiento);
                        mostrarVector(dados, 5, a, b);
                        rlutil::locate(12, 18);
                        cout<<"QUERES VOLVER A TIRAR EL DADO NUMERO "<<x+1<<" ? (S/N)  ";
                        cin>>decision;

}
                if(decision == 's' || decision == 'S'){
                        elegirDado[x] = 1;}}}


                        system("cls");

                  for(x=0;x<5;x++){
                    if(elegirDado[x]==1)
                        {
                        ///cout<<"INGRESA EL DADO "<<x+1<<": ";
                        ///cin>>dados[x];

                        dados[x]= (rand()%6)+1;
                        }}
                        srand(time(NULL));
                        cout<<endl;
                        interfaz(jugador, ronda, puntos, lanzamiento);
                        mostrarVector(dados, 5, a, b);


                    con++;

                   if(con<3){
                        rlutil::locate(12, 18);
                        cout<<"QUIERE VOLVER A TIRAR LOS DADOS? (S/N)  ";
                        cin>>sigue;
                        system("cls");

                    while((sigue != 's' && sigue != 'S') && (sigue != 'n' && sigue != 'N')){
                        rlutil::locate(12, 18);
                        cout<<"OPCION INCORRECTA";
                        rlutil::locate(12, 20);
                        cout<<"ELIJA NUEVAMENTE";
                        rlutil::setColor(rlutil::BLACK);
                        system("pause");
                        system ("cls");

                        interfaz(jugador, ronda, puntos, lanzamiento);
                        mostrarVector(dados, 5, a, b);
                        rlutil::locate(12, 18);
                        cout<<"QUIERE VOLVER A TIRAR LOS DADOS? (S/N)  ";
                        cin>>sigue;


}}}





}



cout<<endl;
interfaz(jugador, ronda, puntos, lanzamiento);
mostrarVector(dados, 5, a, b);
puntosMano += puntoslanzamiento(dados, tam, contador, sumaJuegoSimple);
///cout<<endl<<"Sumaste "<<puntosMano<<" puntos"<<endl;
cout<<endl;






    return puntosMano;


}

///LA FUNCION interfaz MUESTRA POR PANTALLA DURANTE EL JUEGO QUIEN ESTA LANZANDO, SU PUNTAJE ACUMULADO
///LA RONDA EN LA QUE SE ENCUENTRA Y EL LANZAMIENTO QUE ESTA EFECTUANDO

void interfaz(char jugador[], int ronda, int puntaje, int lanzamiento){
rlutil::locate(1,2);
rlutil::setColor(rlutil::LIGHTCYAN);
cout<<"TURNO DE ";
rlutil::locate(10,2);
cout<<jugador;
rlutil::setColor(rlutil::LIGHTGREEN);
rlutil::locate(35,2);
cout<<"RONDA "<<ronda;
rlutil::setColor(rlutil::LIGHTMAGENTA);
rlutil::locate(56,2);
cout<<"PUNTAJE TOTAL: "<<puntaje<<" PUNTOS"<<endl;
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::locate(1,4);
cout<<"                                                                               "<<endl;
rlutil::locate(1,8);
cout<<"                                                                               "<<endl;
rlutil::setBackgroundColor(rlutil::BLACK);
rlutil::locate(31,6);
cout<<"LANZAMIENTO N "<<lanzamiento;
rlutil::setColor(rlutil::WHITE);
cout<<endl<<endl<<endl;
}

///LA FUNCION modoDeDos ES DONDE SE DESARROLLA EL JUEGO DE DOS JUGADORES E INFORMA EL GANADOR

int modoDeDos (char jugador1[], char jugador2[], int &rondasGanador, int &puntajeGanador, char nombreGanador [],
               char nombreEmpate[], int &rondasPerdedor, int &puntajePerdedor, char nombrePerdedor[]){

bool servida1=0;
bool servida2=0;
int ronda1=0, ronda2=0;
int puntajeJugador1 = 0, puntajeJugador2 = 0;
int tam = 5;
int dados[tam];
int x, leandro = 0;
int lanzamiento = 1;

nombreEmpate[0] = '-';

for(x=0;x<20;x++) {

        if(x%2 == 0){
                cout<<endl;
                ronda1++;
        interfaz(jugador1, ronda1, puntajeJugador1, lanzamiento);
        leandro = tiradaDeDados(dados, tam, jugador1, puntajeJugador1, ronda1);

        if(leandro == 420){puntajeJugador1 = 0; servida1 = 1;system("cls");}
            else{puntajeJugador1 += leandro;
            system("cls");


        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(34,9);
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout<<"RONDA N"<<ronda1;
        rlutil::locate(27,12);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"PROXIMO TURNO: "<<jugador2;
        rlutil::locate(27,14);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"PUNTAJE "<<jugador1<<": "<<puntajeJugador1;
        rlutil::locate(27,16);
        cout<<"PUNTAJE "<<jugador2<<": "<<puntajeJugador2;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA EL TURNO DEL SIGUIENTE JUGADOR TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");}}

        else {
        cout<<endl;
                ronda2++;
        interfaz(jugador2, ronda2, puntajeJugador2, lanzamiento);
        leandro = tiradaDeDados(dados, tam, jugador2, puntajeJugador2, ronda2);

        if(leandro == 420){puntajeJugador2 = 0; servida2 = 1 ;}
            else{puntajeJugador2 += leandro;
            system("cls");
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(34,9);
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout<<"RONDA N"<<ronda2;
        rlutil::locate(27,12);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"PROXIMO TURNO: "<<jugador1;
        rlutil::locate(27,14);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"PUNTAJE "<<jugador2<<": "<<puntajeJugador2;
        rlutil::locate(27,16);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"PUNTAJE "<<jugador1<<": "<<puntajeJugador1;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA EL TURNO DEL SIGUIENTE JUGADOR TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");}}

        if (ronda1 == ronda2 && servida1 == 1 && servida2 == 1){
                system("cls");
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(25,10);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"LOS JUGADORES: "<<jugador1<<" Y "<<jugador2;
        rlutil::locate(17,15);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"EMPATARON POR GENERALA SERVIDA EN LA RONDA "<<ronda1;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA VOLVER AL MENU TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");


        strcpy(nombreGanador, jugador1);
        strcpy(nombreEmpate, jugador2);
        rondasGanador = ronda1;
        puntajeGanador = 0;

        return 0;
        }

        else {if (ronda1 == ronda2 && servida1 == 1){
        system("cls");
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(35,10);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<jugador1;
        rlutil::locate(18,15);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"GANO POR GENERALA SERVIDA EN LA RONDA "<<ronda1;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA VOLVER AL MENU TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");
        strcpy(nombreGanador, jugador1);
        rondasGanador = ronda1;
        puntajeGanador = 0;

        return 0;
            }
            else{if(ronda1 == ronda2 && servida2 == 1){
        system("cls");
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(35,10);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<jugador2;
        rlutil::locate(18,15);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"GANO POR GENERALA SERVIDA EN LA RONDA "<<ronda2;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA VOLVER AL MENU TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");
        strcpy(nombreGanador, jugador2);
        rondasGanador = ronda2;
        puntajeGanador = 0;

        return 0;}
            }}





}




if(puntajeJugador1 > puntajeJugador2){
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(27,10);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"EL GANADOR FUE: "<<jugador1;
        rlutil::setColor(rlutil::LIGHTGREEN);
        rlutil::locate(27,12);
        cout<<"RONDAS DE JUEGO: "<<ronda1;
        rlutil::locate(27,14);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"PUNTAJE FINAL: "<<puntajeJugador1;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA VOLVER AL MENU TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");

        strcpy(nombreGanador, jugador1);
        rondasGanador = ronda1;
        puntajeGanador = puntajeJugador1;
        strcpy(nombrePerdedor, jugador2);
        puntajePerdedor = puntajeJugador2;
        rondasPerdedor = ronda2;

    }
    else{if(puntajeJugador2 > puntajeJugador1){
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(27,10);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"EL GANADOR FUE: "<<jugador2;
        rlutil::locate(27,12);
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout<<"RONDAS DE JUEGO: "<<ronda2;
        rlutil::locate(27,14);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"PUNTAJE FINAL: "<<puntajeJugador2;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA VOLVER AL MENU TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");

        strcpy(nombreGanador, jugador2);
        rondasGanador = ronda2;
        puntajeGanador = puntajeJugador2;
        strcpy(nombrePerdedor, jugador1);
        puntajePerdedor = puntajeJugador1;
        rondasPerdedor = ronda1;

        }

    else{if(puntajeJugador1 == puntajeJugador2){
        system("cls");
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(16,6);
        cout<<"                                              "<<endl;
        rlutil::locate(16,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(25,10);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"LOS JUGADORES: "<<jugador1<<" Y "<<jugador2;
        rlutil::locate(18,15);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"EMPATARON CON "<<puntajeJugador1<< "EN LA ULTIMA RONDA";
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA VOLVER AL MENU TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");

        strcpy(nombreGanador, jugador1);
        rondasGanador = ronda1;
        puntajeGanador = puntajeJugador1;
        strcpy(nombreEmpate, jugador2);

    }}}


    return 0;

}

///LA FUNCION modoDeUno ES DONDE SE DESARROLLA EL JUEGO DE UN JUGADORES E INFORMA SU PUNTAJE FINAL

int modoDeUno(char jugador1 [], int &rondasGanador, char nombreGanador[], int &puntajeGanador){

int ronda1=0;
int puntajeJugador1 = 0;
int tam = 5;
int dados[tam];
int x, leandro = 0;
int lanzamiento = 1;


for(x=0;x<10;x++) {
        ronda1++;
        interfaz(jugador1, ronda1, puntajeJugador1, lanzamiento);
        leandro = tiradaDeDados(dados, tam, jugador1, puntajeJugador1, ronda1);

        if(leandro == 420){puntajeJugador1 = 0;
        system("cls");
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(18,6);
        cout<<"                                              "<<endl;
        rlutil::locate(18,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::setColor(rlutil::LIGHTCYAN);
        rlutil::locate(36,10);
        cout<<jugador1;
        rlutil::locate(21,15);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"GANO POR GENERALA SERVIDA EN LA RONDA "<<ronda1;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA VOLVER AL MENU TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");

                break;}
            else{puntajeJugador1 += leandro;
            system("cls");

        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(18,6);
        cout<<"                                              "<<endl;
        rlutil::locate(18,19);
        cout<<"                                              "<<endl;
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::locate(36,10);
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout<<"RONDA N"<<ronda1;
        rlutil::locate(33,14);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"PUNTAJE "<<jugador1<<": "<<puntajeJugador1;

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"PARA LA SIGUIENTE RONDA TOQUE UNA TECLA "; rlutil::setColor(rlutil::BLACK);system("pause");
        system("cls");}}

        strcpy(nombreGanador, jugador1);
        rondasGanador = ronda1;
        puntajeGanador = puntajeJugador1;


    return 0;


}

int posicionNumeroEnVector(int v[],int tam, int numero){
    int i;
    for(i=0;i<tam;i++){
        if(v[i]==numero) return i;
        }
    return -1;
}

int minimoVector(int v[], int tam){
    int i, posMin=0;
    for(i=1;i<tam;i++){
        if(v[i]<v[posMin]) {
                posMin=i;
        }
    }
    return posMin;
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}

void mostrarVector(int vec [], int tam, int x, int y){
int i;

for(i=0;i<tam;i++){

    if(vec[i] == 1) {dadoUno(x, y);}
        else{if(vec[i] == 2){dadoDos(x, y);}
            else{if(vec[i] == 3){dadoTres(x, y);}
                else{if(vec[i] == 4){dadoCuatro(x, y);}
                    else{if(vec[i] == 5){dadoCinco(x, y);}
                        else{dadoSeis(x,y);}}}}}
    x += 12;
    }

rlutil::setBackgroundColor(rlutil::BLACK);
rlutil::setColor(rlutil::WHITE);
}

int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}

int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}

int copiarVector(int v[], int v2[],int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

bool compararVectores(int v[], int v2[],int tam ){
   int i;
    for(i=0;i<tam;i++){
        if(v2[i]!=v[i]) return false;
    }
    return true;
}


void cargarVector(int v[], int tam){
int i;
for(i=0;i<tam;i++){
    cout<<"INGRESA EL DADO "<<i+1<<": ";
    cin>>v[i];
}
}

int generalaServida(int v[], int tam){
int x, con=0;

for(x=1;x<tam;x++){
    if(v[0] == v[x]) con++;
}
return con;

}

///LA FUNCION titulo MUESTRA POR PANTALLA EL TITULO DEL JUEGO

void titulo(){
/**
rlutil::locate(4,7);
cout<<"*******  *******  ****    **  *******  *******  *******  **       *******"<<endl;
rlutil::locate(4,8);
cout<<"**       **       ** **   **  **       **   **  **   **  **       **   **"<<endl;
rlutil::locate(4,9);
cout<<"**  ***  *****    **  **  **  *****    *******  *******  **       *******"<<endl;
rlutil::locate(4,10);
cout<<"**    *  **       **   ** **  **       ** ***   **   **  **       **   **"<<endl;
rlutil::locate(4,11);
cout<<"*******  *******  **    ****  *******  **   **  **   **  *******  **   **"<<endl;
*/


rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::locate(4,7);
cout<<"       ";
rlutil::locate(13,7);
cout<<"       ";
rlutil::locate(22,7);
cout<<"    ";
rlutil::locate(30,7);
cout<<"  ";
rlutil::locate(34,7);
cout<<"       ";
rlutil::locate(43,7);
cout<<"       ";
rlutil::locate(52,7);
cout<<"       ";
rlutil::locate(61,7);
cout<<"  ";
rlutil::locate(70,7);
cout<<"       ";
rlutil::locate(4,8);
cout<<"  ";
rlutil::locate(13,8);
cout<<"  ";
rlutil::locate(22,8);
cout<<"  ";
rlutil::locate(25,8);
cout<<"  ";
rlutil::locate(30,8);
cout<<"  ";
rlutil::locate(34,8);
cout<<"  ";
rlutil::locate(43,8);
cout<<"  ";
rlutil::locate(48,8);
cout<<"  ";
rlutil::locate(52,8);
cout<<"  ";
rlutil::locate(57,8);
cout<<"  ";
rlutil::locate(61,8);
cout<<"  ";
rlutil::locate(70,8);
cout<<"  ";
rlutil::locate(75,8);
cout<<"  ";
rlutil::locate(4,9);
cout<<"  ";
rlutil::locate(8,9);
cout<<"   ";
rlutil::locate(13,9);
cout<<"     ";
rlutil::locate(22,9);
cout<<"  ";
rlutil::locate(26,9);
cout<<"  ";
rlutil::locate(30,9);
cout<<"  ";
rlutil::locate(34,9);
cout<<"     ";
rlutil::locate(43,9);
cout<<"       ";
rlutil::locate(52,9);
cout<<"       ";
rlutil::locate(61,9);
cout<<"  ";
rlutil::locate(70,9);
cout<<"       ";
rlutil::locate(4,10);
cout<<"  ";
rlutil::locate(10,10);
cout<<" ";
rlutil::locate(13,10);
cout<<"  ";
rlutil::locate(22,10);
cout<<"  ";
rlutil::locate(27,10);
cout<<"  ";
rlutil::locate(30,10);
cout<<"  ";
rlutil::locate(34,10);
cout<<"  ";
rlutil::locate(43,10);
cout<<"  ";
rlutil::locate(46,10);
cout<<"   ";
rlutil::locate(52,10);
cout<<"  ";
rlutil::locate(57,10);
cout<<"  ";
rlutil::locate(61,10);
cout<<"  ";
rlutil::locate(70,10);
cout<<"  ";
rlutil::locate(75,10);
cout<<"  ";
rlutil::locate(4,11);
cout<<"       ";
rlutil::locate(13,11);
cout<<"       ";
rlutil::locate(22,11);
cout<<"  ";
rlutil::locate(28,11);
cout<<"    ";
rlutil::locate(34,11);
cout<<"       ";
rlutil::locate(43,11);
cout<<"  ";
rlutil::locate(48,11);
cout<<"  ";
rlutil::locate(52,11);
cout<<"  ";
rlutil::locate(57,11);
cout<<"  ";
rlutil::locate(61,11);
cout<<"       ";
rlutil::locate(70,11);
cout<<"  ";
rlutil::locate(75,11);
cout<<"  ";
rlutil::setBackgroundColor(rlutil::BLACK);


}

///LA SIGUIENTE FUNCIONES MUESTRAN POR PANTALLA CADA DADO

void dadoUno(int x, int y){
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::setColor(rlutil::LIGHTRED);
rlutil::locate(x,y);
cout<<"         "<<endl;
rlutil::locate(x,y+1);
cout<<"         "<<endl;
rlutil::locate(x,y+2);
cout<<"    *    "<<endl;
rlutil::locate(x,y+3);
cout<<"         "<<endl;
rlutil::locate(x,y+4);
cout<<"         "<<endl;

}

void dadoDos(int x, int y){
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::setColor(rlutil::LIGHTBLUE);
rlutil::locate(x,y);
cout<<"         "<<endl;
rlutil::locate(x,y+1);
cout<<"  *      "<<endl;
rlutil::locate(x,y+2);
cout<<"         "<<endl;
rlutil::locate(x,y+3);
cout<<"      *  "<<endl;
rlutil::locate(x,y+4);
cout<<"         "<<endl;

}

void dadoTres(int x, int y){
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::setColor(rlutil::LIGHTRED);
rlutil::locate(x,y);
cout<<"         "<<endl;
rlutil::locate(x,y+1);
cout<<"  *      "<<endl;
rlutil::locate(x,y+2);
cout<<"    *    "<<endl;
rlutil::locate(x,y+3);
cout<<"      *  "<<endl;
rlutil::locate(x,y+4);
cout<<"         "<<endl;

}

void dadoCuatro(int x, int y){
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::setColor(rlutil::LIGHTBLUE);
rlutil::locate(x,y);
cout<<"         "<<endl;
rlutil::locate(x,y+1);
cout<<"  *   *  "<<endl;
rlutil::locate(x,y+2);
cout<<"         "<<endl;
rlutil::locate(x,y+3);
cout<<"  *   *  "<<endl;
rlutil::locate(x,y+4);
cout<<"         "<<endl;

}

void dadoCinco(int x, int y){
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::setColor(rlutil::LIGHTRED);
rlutil::locate(x,y);
cout<<"         "<<endl;
rlutil::locate(x,y+1);
cout<<"  *   *  "<<endl;
rlutil::locate(x,y+2);
cout<<"    *    "<<endl;
rlutil::locate(x,y+3);
cout<<"  *   *  "<<endl;
rlutil::locate(x,y+4);
cout<<"         "<<endl;

}

void dadoSeis(int x, int y){
rlutil::setBackgroundColor(rlutil::WHITE);
rlutil::setColor(rlutil::LIGHTBLUE);
rlutil::locate(x,y);
cout<<"         "<<endl;
rlutil::locate(x,y+1);
cout<<"  *   *  "<<endl;
rlutil::locate(x,y+2);
cout<<"  *   *  "<<endl;
rlutil::locate(x,y+3);
cout<<"  *   *  "<<endl;
rlutil::locate(x,y+4);
cout<<"         "<<endl;

}

///LA FUNCION puntuacionAlta ES EL SECTOR DEL JUEGO DONDE SE MUESTRAN LOS 3 MEJORES PUNTAJES

 void puntuacionAlta (int rondasMasAlta, int rondasMasAlta1, int rondasMasAlta2, int puntajeMasAlta, int puntajeMasAlta1, int puntajeMasAlta2,
char nombreMasAlta [], char nombreMasAlta1 [], char nombreMasAlta2 []){

rlutil::locate(30,3);
        rlutil::setColor(rlutil::WHITE);
        cout<<"MEJORES PUNTAJES"<<endl;
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(14,6);
        cout<<"                                                 "<<endl;
        rlutil::locate(14,19);
        cout<<"                                                 "<<endl;

        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::setColor(rlutil::LIGHTCYAN);
        rlutil::locate(15, 8);
        cout<<"NOMBRE";
        rlutil::locate(35, 8);
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout<<"RONDAS";
        rlutil::locate(55, 8);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"PUNTAJE";
        rlutil::locate(15, 11);
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"1.";
        rlutil::locate(15, 14);
        cout<<"2.";
        rlutil::locate(15, 17);
        cout<<"3.";
        rlutil::setColor(rlutil::WHITE);




        if(rondasMasAlta != 11){
        rlutil::setColor(rlutil::LIGHTCYAN);
        rlutil::locate(17, 11);
        cout<<nombreMasAlta;
        rlutil::setColor(rlutil::LIGHTGREEN);
        rlutil::locate(35, 11);
        cout<<rondasMasAlta;
        rlutil::locate(46, 11);
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        if(puntajeMasAlta == 0){cout<< "GENERALA SERVIDA"<<endl;}
        else{rlutil::locate(55, 11); cout<<puntajeMasAlta<<endl;}
            }

            if(rondasMasAlta1 != 11){
                rlutil::setColor(rlutil::LIGHTCYAN);
                rlutil::locate(17, 14);
                cout<<nombreMasAlta1;
                rlutil::setColor(rlutil::LIGHTGREEN);
                rlutil::locate(35, 14);
                cout<<rondasMasAlta1;
                rlutil::locate(46, 14);
                rlutil::setColor(rlutil::LIGHTMAGENTA);
        if(puntajeMasAlta1 == 0){cout<< "GENERALA SERVIDA"<<endl;}
        else{rlutil::locate(55, 14);cout<<puntajeMasAlta1<<endl;}
            }

            if(rondasMasAlta2 != 11){
                rlutil::setColor(rlutil::LIGHTCYAN);
                rlutil::locate(17, 17);
                cout<<nombreMasAlta2;
                rlutil::setColor(rlutil::LIGHTGREEN);
                rlutil::locate(35, 17);
                cout<<rondasMasAlta2;
                rlutil::locate(46, 17);
                rlutil::setColor(rlutil::LIGHTMAGENTA);
        if(puntajeMasAlta2 == 0){cout<< "GENERALA SERVIDA"<<endl;}
        else{rlutil::locate(55, 17);cout<<puntajeMasAlta2<<endl;}
            }


        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        rlutil::setColor(rlutil::BLACK);
        system("pause");

}




#endif // FUNCIONESNUESTRAS_H_INCLUDED
