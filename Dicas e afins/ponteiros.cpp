#include <iostream>

using namespace std;

int main() {

    int vet[] = {1,2,3,4,5};
    int* n= &vet[3]; //por meio de um ponteiro estou pegando a posição 4



    for(int i=0; i<5; i++){
    cout << vet[i] <<endl;
    }
cout << vet[2] << endl; //indexação
cout << *(n+1); //encremento de ponteiro

n=NULL;



}

