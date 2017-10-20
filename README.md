# Programa
Escribe y corre el siguiente programa. Describe que hace guiándote en el diagrama de flujo adjunto:

#include <iostream>
using namespace std;

int main (){

int N=0;
cout << “Dame un número entero ” << endl;
cin >> N;

int M=1;
int F=1;

while (M!=N){
  M=M+1;
  F=F*M;
}

cout << “Valor final ” <<  F<< endl;
return 0;

}
