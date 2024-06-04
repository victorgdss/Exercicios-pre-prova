#ifndef ARESTA
#define ARESTA

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Aresta 
{
private:
    int vert_esq;
    int vert_dir;
    static int quant_vertices;

public:
    Aresta(int vert_esq, int vert_dir);
    int getAresta_vert_esq();
    int getAresta_vert_dir();
    void verifica_Aresta(vector<Aresta*> arestas, int valor);
    void Imprime_vizinhos(vector<int> vizinhos);
    int verifica_Vizinhos(vector<Aresta*> arestas, int valor1, int valor2);
};

#endif