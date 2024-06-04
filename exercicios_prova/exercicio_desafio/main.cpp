#include "Aresta.hpp"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() 
{
    Aresta a1(1,5);
    Aresta a2(1,2);
    Aresta a3(2,3);
    Aresta a4(3,4);
    Aresta a5(4,5);
    Aresta a6(4,2);
    Aresta a7(5,2);

    vector<Aresta*> arestas;
    arestas.push_back(&a1);
    arestas.push_back(&a2);
    arestas.push_back(&a3);
    arestas.push_back(&a4);
    arestas.push_back(&a5);
    arestas.push_back(&a6);
    arestas.push_back(&a7);

    a7.verifica_Aresta(arestas, 4);
    int retorno = a7.verifica_Vizinhos(arestas,1,4);
    if(retorno)
    {
       cout << "Sao vizinhos" << endl;
    }
    else
    {
      cout << "Nao sao vizinhos" << endl;
    }

   return 0;
}