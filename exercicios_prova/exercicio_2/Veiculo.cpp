#include "Veiculo.hpp"

Veiculo::Veiculo( string marca, string modelo, int capacidade):
  marca(marca), modelo(modelo), capacidade(capacidade)
{

}

void Veiculo::exibirDados()
{
    cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " toneladas\n";
}