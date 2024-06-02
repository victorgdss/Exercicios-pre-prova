#ifndef GERENTE
#define GERENTE
#include <string>
using std::string;
#include "Funcionario.hpp"

class Gerente: public Funcionario
{
    private:
     int bonussalarial;
    public:
     Gerente(string nome, int id, int salariobase, int bonussalarial);
     int calcularSalarioTotal() override;
};

#endif



