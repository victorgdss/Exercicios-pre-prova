#include <iostream>
#include "Funcionarioregular.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"

using std::cout;
using std::endl;

int main()
{
    Fregular fregular1("Antonio",1502, 1412);
    Fregular fregular2("Jennifer",1504, 1412);
    Estagiario estagiario1("Lucas",1503,1412);
    Estagiario estagiario2("Mateus",1505,1412);
    Gerente gerente1("Ronaldo", 1506, 1412, 1400);
    Gerente gerente2("Rubia", 1507, 1412, 1715);

    cout << fregular1.calcularSalarioTotal()<< endl;
    cout << estagiario1.calcularSalarioTotal()<< endl;
    cout << gerente1.calcularSalarioTotal()<< endl;
    cout << "-------------------------------" << endl;
    cout << fregular2.calcularSalarioTotal()<< endl;
    cout << estagiario2.calcularSalarioTotal()<< endl;
    cout << gerente2.calcularSalarioTotal()<< endl;

}
