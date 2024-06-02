#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>
using std::string;

class Funcionario
{
    private:
      string nome;
      int id;
      int salariobase;
    
    public:
     Funcionario(string nome, int id, int salariobase);
     virtual int calcularSalarioTotal()=0;
     int calculasalario(); 
};

#endif



