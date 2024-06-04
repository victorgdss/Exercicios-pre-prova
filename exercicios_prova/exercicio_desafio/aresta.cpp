#include "Aresta.hpp"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int Aresta::quant_vertices = 0;


Aresta::Aresta(int vert_esq, int vert_dir): 
 vert_esq(vert_esq), vert_dir(vert_dir) 
{
    Aresta::quant_vertices++;
}


int Aresta::getAresta_vert_esq() 
{
    return vert_esq;
}

int Aresta::getAresta_vert_dir() 
{
    return vert_dir;
}

void Aresta::verifica_Aresta(vector<Aresta*> arestas, int valor) 
{
    vector<int> vizinhos;
    for (auto a : arestas) 
    {
        int esquerda = a->getAresta_vert_esq();
        int direita = a->getAresta_vert_dir();
        if (esquerda == valor) 
        {
            vizinhos.push_back(direita); 
        }
        if (direita == valor) 
        {
            vizinhos.push_back(esquerda); 
        }
    }
    Imprime_vizinhos(vizinhos);
}

void Aresta::Imprime_vizinhos(vector<int> vizinhos) 
{
    cout << "Os vertices vizinhos sao: " << endl;
    for (auto v : vizinhos) 
    {
        cout << v << endl;
    }
}

int Aresta::verifica_Vizinhos(vector<Aresta*> arestas, int valor1, int valor2)
{
    for (auto a : arestas) 
    {
        int esquerda = a->getAresta_vert_esq();
        int direita = a->getAresta_vert_dir();
        if (((esquerda == valor1) || (esquerda == valor2)) && ((direita == valor2) || (direita == valor2)))
        {
            return 1;
        }
    }
    return 0;
}