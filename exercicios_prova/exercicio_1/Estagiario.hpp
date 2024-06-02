#ifndef ESTAGIARIO
#define ESTAGIARIO
#include <string>
using std::string;
#include "Funcionario.hpp"

class Estagiario: public Funcionario
{
    public:
     Estagiario(string nome, int id, int salariobase);
     int calcularSalarioTotal() override;
};

#endif



