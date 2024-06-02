#ifndef VAN
#define VAN
#include <iostream>
#include <string>
#include "Veiculo.hpp"


class Van : public Veiculo
{
private:
  int passageiros;

public:
  Van(string marca, string modelo, int capacidade, int passageiros);
  void exibirDados() override;
 
};
#endif