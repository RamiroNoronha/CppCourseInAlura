#include <iostream>
#include <string>
#include "titular.hpp"
#include "funcionario.hpp"
#include "conta.hpp"
#include "contacorrente.hpp"
#include "contapoupanca.hpp"
#include "cpf.hpp"

int main() {
    Funcionario funcionario("Ramiro Noronha", Cpf("123.456.789-10"), 1200);
    Titular titular("Melissa", Cpf("098.765.432-10"));

    ContaCorrente contaNormal("1", titular);
    ContaPoupanca contaPoupanca("2", Titular("Debora", Cpf("111.222.333-10")));
    contaNormal.depositar(100);
    contaPoupanca.depositar(100);

    contaNormal.sacar(10);
    std::cout << "Conta: "<<contaNormal.recuperarNumero() << "  --  " << contaNormal.recuperarSaldo() << std::endl;

    contaPoupanca.sacar(10);
     std::cout << "Conta Poupança: "<<contaPoupanca.recuperarNumero() << "  --  " << contaPoupanca.recuperarSaldo() << std::endl;
    
}