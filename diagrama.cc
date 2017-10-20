//ROCIO FLORES HERNANDEZ
//CLASE DEL 20 DE OCTUBRE DE 2017
//PROGRAMA QUE TE DA EL FACTORIAL DE UN NUMERO ENTERO DADO 
#include <iostream>
using namespace std;
int main ()
{
  int N=0;
  //AQUI NOS LEE NUESTRO NUMERO ENTERO
  cout <<"dame un numero entero"<< endl;
  //EL COUT NOS IMPRIME LA ORDEN
  cin>>N;
  int M=1;
  int F=1;
  //NUESTRA M Y F TERMINAN EN EL 1
  while(M!=N){
M=M+1;
    F=F*M;
}
  //SE VA A MULTIPLICAR F*M SI DESPUES DE ESTA 
  //MULTIPLICACION NOS DA QUE M = N, IMPRIME
  //SI NO LO ES A ESTA M LE SUMA 1 Y VUELVE A MULTIPLICAR POR F
  //Y ASI NOS DA EL FACTORIAL
  cout <<"valor final"<< F << endl;
  return 0;
}
