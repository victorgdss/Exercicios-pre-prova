#ifndef VEICULO
#define VEICULO
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;


class Veiculo 
{
protected:
 const string marca;
 const string modelo;
 int capacidade; // Capacidade de carga em toneladas

public:
 Veiculo( string marca, string modelo, int capacidade);
 virtual void exibirDados();
};
#endif