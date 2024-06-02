#include "Funcionario.hpp"

Funcionario::Funcionario(string nome,int id, int salariobase):
 nome(nome),id(id),salariobase(salariobase)
{

}

int Funcionario::calculasalario()
{
    return this->salariobase;
}