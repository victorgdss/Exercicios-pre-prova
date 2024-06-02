#ifndef CAMINHAO
#define CAMINHAO
#include <iostream>
#include <string>
#include "Veiculo.hpp"


class Caminhao : public Veiculo
{
private:
  int eixos;
public:
 Caminhao(string marca, string modelo, int capacidade, int eixos);
 void exibirDados() override;
 
};
#endif