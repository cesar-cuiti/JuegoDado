#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<stdio.h>

using namespace std;
#include"Funcion_dado.h"
int main ()
{ system("color 37");
    int Opc, Rondas, Apuesta, i, x, m, t, suma=0, TiroP[5], repe=0, Puntos=0;
    int AcuPuntos=0, RondaSinP=0, RondaCPer=0, Ganador=0;
    int CTir=5, Tir[5];  ///cantidad de tiradas por cada ronda
    char Jug1[10] , Jug2[10] ; ///cadena de caracteres para almacenar los nombres de los jugadores
    bool Puntaje=false;

         while (true)   ///while para volver al menu inicial
         {system("cls");  AcuPuntos=0;RondaSinP=0; RondaCPer=0;///pone en cero en acumulador de puntos
         cout << " 1 JUEGO NUEVO PARA UN JUGADOR "<< endl;
         cout << " 2 JUEGO NUEVO PARA DOS JUGADORES " << endl;
         cout << " 3 MOSTRAR PUNTUACION MAS ALTA "<< endl;
         cout << " 4 MODO SIMULADO (CARGA MANUAL DE DADOS " << endl;
         cout << " 0 FIN DEL JUEGO " << endl;
         cout <<"-------------------------------------------------------"<<endl;
         cout << "ELEGI UNA OPCION: ";
         cin >> Opc;
         system("cls");
         switch (Opc) {
         case 1 : {
                  cout << endl;
                  cout << "INGRESA TU NOMBRE ";
                  cin >> Jug1;cout << endl;
                  cout << "CUANTAS RONDAS VAS A JUGAR ";
                  cin >> Rondas ;cout << endl;
                  system("pause");
                  system("cls");

                  for (i=1; i<=Rondas; i++)
                {   CTir=5;
                    cout << endl;
                    cout << "CUANTOS PUNTOS APOSTAS? ";
                    cin >> Apuesta; cout << endl;
                    system("pause");
                    system("cls");

                    suma=0; repe=0; Puntos=0;
                    for (m=1; m<=5; m++)
                {
                    for(x=1;x<70;x++)cout<<(char)205; cout<<endl;///linea separadora
                    cout << " JUGADOR "<< Jug1 <<"  |  "<< " RONDA N "<< i <<"  |  "<< " PUNTOS ACUMULADOS: "<<AcuPuntos<<endl;
                    for(x=1;x<70;x++)cout<<(char)205;///lineas separadoras
                    cout<<endl;cout<<endl;
                    cout << " TIRADA "<< m << endl;cout<<endl;cout<<endl;
                    cout<<" DADOS: ";cargarAleatorio(Tir,CTir,6);cout<<endl;cout<<endl; ///carga aleatoria de dados

                    cout << " MAXIMO: ";
                    cout << DadoMaximo(Tir,CTir)<<endl;cout<<endl;cout<<endl;///muestra el mayor de los dados
                    suma+=DadoMaximo(Tir,CTir);///suma de los dados mayores
                    CTir=CTir-1;
                    system("pause");
                    system("cls");

                }   for(x=1;x<40;x++)cout<<(char)205;cout<<endl;cout<<endl;///linea separadora

                  cout<<"LA SUMA DE LOS DADOS ES: "<<suma<<endl;cout<<endl;///muestra la suma de los dados mayores
                  if(suma>=20){
                  cout<<"NUMERO MULTIPLICADOR: "<<GeneradorPuntos(suma);cout<<endl;cout<<endl;///funcion para saber el numero multiplicador

                  cout<<"TIRO DE PUNTAJE: ";cargarAleatorio(TiroP,5,6);cout<<endl;
                  for(t=0;t<5;t++)
                  {
                      if(TiroP[t]==GeneradorPuntos(suma)){repe++;}
                  }
                  Puntos=repe*Apuesta;}
                  else {cout<<"PERDISTE LOS PUNTOS DE ESTA RONDA "<<endl;cout<<endl; if(AcuPuntos>0){AcuPuntos=AcuPuntos-Apuesta;RondaCPer++;}  }


                  cout<<"LOS PUNTOS DE ESTA RONDA SON: "<<Puntos<<endl;cout<<endl;if(Puntos==0){RondaSinP++;}
                  for(x=1;x<40;x++)cout<<(char)205;cout<<endl;cout<<endl;///linea separadora
                  AcuPuntos+=Puntos;

                  system("pause");
                  system("cls");
                }
                  for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;///linea separadora

                  cout<<" JUGADOR: "<<Jug1<<endl;cout<<endl;
                  cout<<" TOTAL DE RONDAS SIN PUNTOS: "<<RondaSinP<<endl;cout<<endl;
                  cout<<" TOTAL DE RONDAS CON PERDIDA DE PUNTOS: "<<RondaCPer<<endl;cout<<endl;
                  cout<<" EL PUNTAJE TOTAL FUE: "<<AcuPuntos<<endl;cout<<endl;

                  for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;///linea separadora

                  system("pause");
                  system("cls");
                }

                 break;
         case 2: {
                  cout<<endl;cout<<endl;
                  cout << " CUANTAS RONDAS VAN A JUGAR? >> ";
                  cin >> Rondas ;
                  cout<<endl;cout<<endl;
                  system("pause");
                  system("cls");

                  MayorPuntaje(Rondas1(Rondas,Jug1),Jug1,Rondas1(Rondas,Jug2),Jug2);
                  Puntaje=true;

                  system("pause");
                  system("cls");
                }

                 break;
         case 3: if(Puntaje==true) { cout<<" GANADOR  "<<endl;}
                 else {cout<<" NO SE HAN JUGADO PARTIDAS "<<endl;}
                 system("pause");
                 break;
         case 4:  ModoSimulado(Rondas,Jug1);
                 break;
         case 0: cout<< "GRACIAS POR JUGAR A DADO 20!!"<< endl;
                 return 0;
                 break;
         }}


    system("pause");
    return 0;
}
