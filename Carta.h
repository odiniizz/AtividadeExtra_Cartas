#include <iostream>

class Carta{

    public:
      int numeroCarta;
      int descartado;
      Carta *elo;
      Carta* Inserir(Carta*, int);
      Carta* InserirDescartes(Carta*, int);
      void Listar(Carta*);
      Carta* Excluir(Carta*);
      int ArmazenaValor(Carta*);
      int numeroDescartado();

};
