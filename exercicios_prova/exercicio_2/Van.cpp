#include "Van.hpp"

Van::Van(const string marca, const string modelo, int capacidade, int passageiros):
  Veiculo(marca,modelo,capacidade), passageiros(passageiros)
{
  
}

void Van::exibirDados()
{
 cout << "Van - ";
 Veiculo::exibirDados();
 cout << "Passageiros: " << passageiros << "\n";
}

