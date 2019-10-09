#ifndef PILHA_H
#define PILHA_H
#include <iostream>
using namespace std;
template<typename T>
struct Dado{
    T elemento;
    Dado<T> *prox;
};
template<typename T>
struct Pilha{
    Dado<T> *Topo;

};
void testepilha(){
    cout<<"teste"<<endl;
}

template<typename T>
void construtorPilha(Pilha<T> &pilha){
    pilha.Topo = NULL;
    //testepilha();
}

template<typename T>
bool Vazia(Pilha<T> &pilha){
    if (pilha.Topo == NULL){
        return true;
    }else {
        return false;
    }
};


template<typename T>
void empilhar(Pilha<T> &pilha,T dado){
    Dado<T> *empilhado = new Dado<T>;

    if(pilha.Topo == NULL){
        pilha.Topo = empilhado;
        empilhado -> elemento = dado;
        empilhado -> prox = NULL;

    }else {
        empilhado -> prox = pilha.Topo;
        pilha.Topo = empilhado;
        empilhado -> elemento = dado;
    }
}

template<typename T>
void removePilha(Pilha<T> &pilha){
    if (pilha.Topo == NULL){
        printf("PILHA VAZIA!!!");

    }else {
        pilha.Topo = pilha.Topo->prox;
    }
}
template<class T>
T desempilha(Pilha <T> &pilha){
    T node;

    if(pilha.Topo == NULL){
        cout<<"PILHA VAZIA!!"<<endl;

    }else {
        node = pilha.Topo->elemento;
       // cout<<node<<endl;
        return node;
    }
    return NULL;
}

template<typename T>
void ImprimePilha(Pilha<T> &pilha){
    Dado<T> *tipo = pilha.Topo;
    if(pilha.Topo == NULL){
        cout<<"PILHA VAZIA!!!"<<endl;
    }else {
        while (tipo != NULL) {
            cout<<tipo->elemento<<" , ";
            tipo = tipo->prox;

        }
        cout<<endl;
    }
}







#endif // PILHA_H
