//Júlio César Diniz, 2° Informática
#include "Carta.h"
using namespace std;


int main()
{
    Carta *inicio = NULL, *fim = NULL, *inicioX = NULL, *fimX = NULL, C;

    int ncartas;

    cout << "Insira um valor inteiro, criaremos uma sequência de cartas.\n";
    cin >> ncartas;

     for (int i = 1; i < ncartas + 1; i++){
        if (inicio == NULL){
            inicio = fim;
            fim = C.Inserir(fim, i);
        } else {
            fim = C.Inserir(fim, i);
        }
    }

    cout << "\n";
    cout << "Cartas sorteadas:\n";
    C.Listar(inicio);

    while (inicio != fim){
        inicio = C.Excluir(inicio);
        if (inicioX == NULL){
            inicioX = fimX;
            fimX = C.Inserir(fimX, C.numeroDescartado());
        } else {
            fimX = C.Inserir(fimX, C.numeroDescartado());
        }
        fim = C.Inserir(fim, inicio->numeroCarta);
        inicio = C.Excluir(inicio);

    }

    cout << "\n";
    cout << "A carta que sobrou é:\n";
    C.Listar(inicio);
    cout << "\n";
    cout << "Lista das cartas excluídas: \n";
    C.Listar(inicioX);
};
