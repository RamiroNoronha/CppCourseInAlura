#include <iostream>
#include <string>
#include "titular.hpp"
#include "funcionario.hpp"

int main() {
    Funcionario funcionario("Ramiro Noronha", Cpf("123.456.789-10"), 1200);
    Titular titular("Melissa", Cpf("098.765.432-10"));

    std::cout << funcionario.recuperarNomePessoa() << std::endl;
    
}