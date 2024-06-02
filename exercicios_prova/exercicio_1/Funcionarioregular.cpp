#include "Funcionarioregular.hpp"

Fregular::Fregular(string nome,int id, int salariobase):
 Funcionario(nome,id,salariobase)
{

}

int Fregular::calcularSalarioTotal()
{
    return Funcionario::calculasalario();
}