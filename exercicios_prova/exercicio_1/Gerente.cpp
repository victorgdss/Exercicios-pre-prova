#include "Gerente.hpp"

Gerente::Gerente(string nome,int id, int salariobase,int bonussalarial):
 Funcionario(nome,id,salariobase), bonussalarial(bonussalarial)
{

}

int Gerente::calcularSalarioTotal()
{
    return this->bonussalarial + (Funcionario::calculasalario());
}