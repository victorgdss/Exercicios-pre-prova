#include "Caminhao.hpp"

Caminhao::Caminhao(string marca, string modelo, int capacidade, int eixos):
  Veiculo(marca,modelo,capacidade), eixos(eixos)
{

}

void Caminhao::exibirDados()
{
   std::cout << "Caminhão - ";
   Veiculo::exibirDados();
   cout<< "Eixos: " << eixos << "\n";
}