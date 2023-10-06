#include "Carta.h"

Carta* Carta::Inserir(Carta *C, int NC){
    Carta* novo = new Carta();
    novo->numeroCarta = NC;
    novo->elo = NULL;

      if(C != NULL){
         C->elo = novo;
     }
        C = novo;
     return C;
 };

void Carta::Listar (Carta *I){
    Carta *aux = I;
    while(aux != NULL){
    std ::cout << aux->numeroCarta << " ";
    aux = aux->elo;
    }
    std::cout << "\n";
 };

 Carta* Carta::Excluir(Carta *I){
    Carta * aux = I;
    I = I->elo;
    descartado = aux->numeroCarta;
    delete (aux);
    return I;
 };

 int Carta::numeroDescartado(){
    return descartado;
 };
