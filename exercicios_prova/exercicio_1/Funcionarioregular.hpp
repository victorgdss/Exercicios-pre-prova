#ifndef FREGULAR
#define FREGULAR
#include <string>
using std::string;
#include "Funcionario.hpp"

class Fregular: public Funcionario
{
    public:
     Fregular(string nome, int id, int salariobase);
     int calcularSalarioTotal() override;
};

#endif


