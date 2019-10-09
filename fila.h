#ifndef FILA_H
#define FILA_H
#include <iostream>
using namespace std;
template<typename T>
struct FDado{
    T elemento;
    FDado<T> *prox;
};
template<typename T>
struct Fila{
    FDado<T> *inicio;

};
void testefila(){
    cout<<"teste"<<endl;
}

template<typename T>
void construtorFila(Fila<T> &fila){
     fila.inicio= nullptr;
   //  testefila();
}

template<typename T>
bool Vazia(Fila<T> &fila){
    if (fila.inicio == nullptr){
        return true;
    }else {
        return false;
    }
};



template<typename T>
void entraFila(Fila<T> &fila,T dado){
    FDado<T> *enfilando = new FDado<T>;
    FDado<T> *navegador = fila.inicio;

    if(fila.inicio == nullptr){
        fila.inicio = enfilando;
        enfilando -> elemento = dado;
        enfilando -> prox = nullptr;
    }else {
        while(navegador -> prox != nullptr){
            navegador = navegador->prox;
        }
        navegador->prox = enfilando;
        enfilando ->elemento = dado;
        enfilando ->prox= nullptr;
    }
}
template<typename T>
void removeFila(Fila<T> &fila){
    if (fila.inicio == nullptr){
        printf("FILA VAZIA!!!");

    }else {
        fila.inicio = fila.inicio->prox;
    }
}

template<class T>
T sairFila(Fila<T> &fila){
    T node;
    if(fila.inicio == NULL){
        cout<<"FILA VAZIA!!"<<endl;

    }else {
        node = fila.inicio->elemento;
       // cout<<node<<endl;
        return node;
    }
    return NULL;
}

template<typename T>
void ImprimeFila(Fila<T> &fila){
    FDado<T> *tipo = fila.inicio;
    if(fila.inicio == nullptr){
        cout<<"Fila VAZIA!!!"<<endl;
    }else {
        while (tipo != nullptr) {
            cout<<tipo->elemento<<" , ";
            tipo = tipo->prox;

        }
        cout<<endl;
    }
}

#endif // FILA_H
