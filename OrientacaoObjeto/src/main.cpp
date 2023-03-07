#include <iostream>
#include <string>
#include "titular.hpp"
#include "funcionario.hpp"
#include "conta.hpp"
#include "contacorrente.hpp"
#include "contapoupanca.hpp"
#include "cpf.hpp"

int main() {
    Titular outroTitutar("Ramiro Noronha", Cpf("123.456.789-10"));
    Titular titular("Melissa", Cpf("098.765.432-10"));

    ContaCorrente contaNormal("1", titular);
    ContaPoupanca contaPoupanca("2", Titular("Debora", Cpf("111.222.333-10")));
    contaNormal.depositar(200);
    contaPoupanca.depositar(200);

    contaNormal.sacar(10);
    std::cout << "Conta: "<<contaNormal.recuperarNumero() << "  --  " << contaNormal.recuperarSaldo() << std::endl;

    contaPoupanca.sacar(10);
    std::cout << "Conta Poupança: "<<contaPoupanca.recuperarNumero() << "  --  " << contaPoupanca.recuperarSaldo() << std::endl;
    contaNormal.tranferencia(contaPoupanca, 40);

    std::cout << "Conta: "<<contaNormal.recuperarNumero() << "  --  " << contaNormal.recuperarSaldo() << std::endl;

    std::cout << "Conta Poupança: "<<contaPoupanca.recuperarNumero() << "  --  " << contaPoupanca.recuperarSaldo() << std::endl;

}