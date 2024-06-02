#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "Van.hpp"
#include <vector>
using std::vector;


int main()
{
    
    Veiculo* v1  = new Van("Gol", "G1", 15, 8);
    Veiculo* v2  = new Van("Gol", "H2", 15, 8);
    Caminhao* c1  = new Caminhao("Iveco", "N3", 15, 8);
    Caminhao* c2  = new Caminhao("Mercedes", "M4", 15, 8);
    Veiculo*v3 = new Van("Fiat", "S5", 5, 7);
    Veiculo*c3 = new Caminhao("Renault", "T7", 21, 10);
    vector<Veiculo*> veiculos;
    veiculos.push_back(v1);
    veiculos.push_back(v2);
    veiculos.push_back(c2);
    veiculos.push_back(c1);
    veiculos.push_back(c3);
    veiculos.push_back(v3);
    

    for( auto v : veiculos)
    {
        v->exibirDados();
    }
    
    return 0;

}