#include "Estagiario.hpp"

Estagiario::Estagiario(string nome,int id, int salariobase):
 Funcionario(nome,id,salariobase)
{

}

int Estagiario::calcularSalarioTotal()
{
    int salariofixo= Funcionario::calculasalario()*0.7;
    return salariofixo;
}