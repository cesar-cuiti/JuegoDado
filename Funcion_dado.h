#ifndef FUNCION_DADO_H_INCLUDED
#define FUNCION_DADO_H_INCLUDED




void TiroManual(int v[],int tam){
                int i, Num;
                for(i=0;i<tam;i++)
                {   cout<<" INGRESAR NUMERO ";
                    cin>>Num;
                    v[i]=Num;
                }
}

void CargaManual(int v[], int Tam)
{   int i, Num;

    for (i=0; i<Tam; i++)
    {
         cout << "DADO "<< i+1 << " : " ;
         cin >> Num;
         v[i]=Num;
    }
}
int cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
        cout << v[i]   << " , ";

  }cout << endl;}


 int DadoMaximo(int v[], int tam){
     int i, DMax=0;
      for (i=0; i<tam; i++)
      {
          if(v[i]>DMax) {DMax=v[i];}
      }
  return DMax;}


int GeneradorPuntos(int a){
int generador, i;
for (i=20;i<=30;i++){
    if(a<20){generador=0;}
    else{if((a==i)&&(a>=20)&&(a<25)){generador=i-19;}
    else{if(a>=25){generador=6;} }
}}
return generador;
}
int Rondas1(int Rondas,char Jug1[10]){
int Apuesta, i, x, m, t, suma=0, TiroP[5], repe=0, Puntos=0;
int AcuPuntos=0, RondaSinP=0, RondaCPer=0,CTir=5, Tir[5];
     cout<<endl;cout<<endl;

     cout<<" TURNO DE "; cin>>Jug1;cout<<endl;
    for (i=1; i<=Rondas; i++)
                {   CTir=5;
                    cout<<endl;cout<<endl;
                    cout << "CUANTOS PUNTOS APOSTAS EN ESTA RONDA? ";
                    cin >> Apuesta; cout << endl; cout<<endl;
                    for(x=1;x<40;x++)cout<<(char)42;///linea separadora
                    cout<<endl;
                    system("pause");
                    system("cls");


                    suma=0; repe=0; Puntos=0;
                    for (m=1; m<=5; m++)
                {

                    for(x=1;x<70;x++)cout<<(char)205;///linea separadora
                    cout<<endl;
                    cout << "  JUGADOR "<< Jug1 <<"  |  "<< " RONDA N "<< i <<"  |  "<< " PUNTOS ACUMULADOS: "<<AcuPuntos<<endl;
                    for(x=1;x<70;x++)cout<<(char)205;///lineas separadoras
                    cout<<endl;
                    cout << " TIRADA "<< m << endl;cout<<endl;cout<<endl;
                    cout<<" DADOS : ";cargarAleatorio(Tir,CTir,6);cout<<endl;cout<<endl; ///carga aleatoria de dados

                    cout << " EL MAXIMO ES: ";
                    cout << DadoMaximo(Tir,CTir)<<endl;cout<<endl;cout<<endl;///muestra el mayor de los dados
                    suma+=DadoMaximo(Tir,CTir);///suma de los dados mayores
                    CTir=CTir-1;
                    system("pause");
                    system("cls");

                } for(x=1;x<40;x++)cout<<(char)205;cout<<endl;///linea separadora

                  cout<<"  LA SUMA DE LOS DADOS ES: "<<suma<<endl;cout<<endl;///muestra la suma de los dados mayores
                  if(suma>=20){
                  cout<<"  NUMERO MULTIPLICADOR: "<<GeneradorPuntos(suma);cout<<endl;cout<<endl;///funcion para saber el numero multiplicador

                  cout<<"  TIRO DE PUNTAJE: ";cargarAleatorio(TiroP,5,6);cout<<endl;
                  for(t=0;t<5;t++)
                  {
                      if(TiroP[t]==GeneradorPuntos(suma)){repe++;}
                  }
                  Puntos=repe*Apuesta;}
                  else {cout<<"  PERDISTE LOS PUNTOS DE ESTA RONDA "<<endl;cout<<endl; if(AcuPuntos>0){AcuPuntos=AcuPuntos-Apuesta;}  }


                  cout<<endl;
                  cout<<"  LOS PUNTOS DE ESTA RONDA SON: "<<Puntos<<endl;cout<<endl;
                  for(x=1;x<40;x++)cout<<(char)205;cout<<endl;///linea separadora
                  AcuPuntos+=Puntos;

                  system("pause");
                  system("cls");
                }
                  for(x=1;x<40;x++)cout<<(char)205;cout<<endl;cout<<endl;///linea separadora
                  cout<<" EL TOTAL DE PUNTOS DE "<<Jug1<<" ES "<<AcuPuntos<<endl;cout<<endl;
                  for(x=1;x<40;x++)cout<<(char)205;cout<<endl;cout<<endl;
                  system("pause");
                  system("cls");

return AcuPuntos;

}
int MayorPuntaje(int Pun1, char J1[10], int Pun2, char J2[10]){
int x, gana;
if(Pun1==Pun2){
         for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;///linea separadora
         cout<<" EMPATE "<<endl;
         for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;}///linea separadora

else {if(Pun1>Pun2){  for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;///linea separadora
                cout<<" GANADOR "<<J1<<" CON "<<Pun1<<" PUNTOS "<<endl;cout<<endl;gana=Pun1;
                for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;}///linea separadora

else{   for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;///linea separadora
        cout<<" GANADOR "<<J2<<" CON "<<Pun2<<" PUNTOS "<<endl;cout<<endl;gana=Pun2;
        for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;}///linea separadora



}return gana;}
int ModoSimulado(int Rondas,char Jug1[10]){

    int Apuesta, i, x, m, t, suma=0, TiroP[5], repe=0, Puntos=0;
    int AcuPuntos=0, RondaSinP=0, RondaCPer=0;
    int CTir=5, Tir[5];  ///cantidad de tiradas por cada ronda
                  cout << endl;
                  cout << "INGRESA TU NOMBRE ";
                  cin >> Jug1;cout << endl;
                  cout << "CUANTAS RONDAS VAS A JUGAR ";
                  cin >> Rondas ;cout << endl;


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
                    cout << "JUGADOR "<< Jug1 <<"  |  "<< " RONDA N "<< i <<"  |  "<< " PUNTOS ACUMULADOS: "<<AcuPuntos<<endl;
                    for(x=1;x<70;x++)cout<<(char)205;///lineas separadoras
                    cout<<endl;cout<<endl;
                    cout << "TIRADA "<< m << endl;cout<<endl;
                    CargaManual(Tir,CTir);///Carga manual de los dados

                    cout << "MAXIMO: ";
                    cout << DadoMaximo(Tir,CTir)<<endl;cout<<endl;///muestra el mayor de los dados
                    suma+=DadoMaximo(Tir,CTir);///suma de los dados mayores
                    CTir=CTir-1;
                    system("pause");
                    system("cls");

                }   for(x=1;x<40;x++)cout<<(char)205;cout<<endl;cout<<endl;///linea separadora

                  cout<<"LA SUMA DE LOS DADOS ES: "<<suma<<endl;cout<<endl;///muestra la suma de los dados mayores
                  if(suma>=20){
                  cout<<"NUMERO MULTIPLICADOR: "<<GeneradorPuntos(suma);cout<<endl;cout<<endl;///funcion para saber el numero multiplicador

                  cout<<"TIRO DE PUNTAJE: ";cout<<endl;TiroManual(TiroP,5);cout<<endl;
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
                  cout<<" TOTAL DE RONDAS SIN PUNTOS: "<<RondaSinP<<endl; cout<<endl;
                  cout<<" TOTAL DE RONDAS CON PERDIDA DE PUNTOS: "<<RondaCPer<<endl; cout<<endl;
                  cout<<" EL PUNTAJE TOTAL FUE: "<<AcuPuntos<<endl; cout<<endl;

                  for(x=1;x<40;x++)cout<<(char)42; cout<<endl; cout<<endl;///linea separadora

                  system("pause");
                  system("cls");
                }






#endif // FUNCION_DADO_H_INCLUDED
