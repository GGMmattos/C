#include <iostream>

using namespace std;

int main() {

int vet[4];

vet[0] =10;
vet[1] =20;
vet[2] =30;
vet[3] =40;
vet[4] =50;

//for(int i=0; i<=2; i++){      //desta forma, teria que ficar modificando a quantidade de valores no vetor. para percorrermos por completos
//cout << vet[i] << endl;
//}

for(int i=0; i <= sizeof(vet)/sizeof(int); i++){  // sendo assim nao preciso modificar toda hora q acrescentar mais elementos ao vetor. pois a conta retorna o numero correto que o mesmo contem
    cout << vet[i] << endl;


}

delete[] vet; //deleta o vetor;
//vet = NULL; //torna nulo (zera), quando ponteiro

cout << vet[1];




}
