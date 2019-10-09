#include <iostream>
#include "pilha.h"
#include "fila.h"

using namespace std;

int main()
{
    Fila<int> pizza;
    Pilha<int> hamburguer;
    construtorFila(pizza);
    construtorPilha(hamburguer);
    entraFila(pizza,7);
    entraFila(pizza,4);
    entraFila(pizza,9);
    entraFila(pizza,1);
    cout<<"================"<<endl;
    cout<<"fila entrada"<<endl;
    cout<<"================"<<endl;
    ImprimeFila(pizza);
    cout<<"================"<<endl;
    empilhar(hamburguer,10);
    empilhar(hamburguer,5);
    empilhar(hamburguer,1);
    empilhar(hamburguer,7);
    empilhar(hamburguer,4);
    cout<<"pilha entrada"<<endl;
    cout<<"================"<<endl;
    ImprimePilha(hamburguer);
    desempilha(hamburguer);
    cout<<"================"<<endl;
    cout<<"agora e pilha desempilhada"<<endl;
    cout<<"=================="<<endl;
    ImprimePilha(hamburguer);
    cout<<"================"<<endl;
    cout<<"agora e fila saindo da fila"<<endl;
    cout<<"================"<<endl;
    ImprimeFila(pizza);
    cout<<"================"<<endl;
}
