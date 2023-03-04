#include "conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular):
    numero(numero),
    titular(titular), 
    saldo(0){
        numeroDeContas++;
    }
Conta::~Conta()
{
    numeroDeContas--;
}
void Conta::sacar(float valorASacar) {

    if(valorASacar < 0){
        std::cout << "Não se pode sacar valores negativos" << std::endl;
        return;
    }
    if(valorASacar > saldo){
        std::cout << "Valor a sacar é maior que o saldo" << std::endl;
        return;
    }
    float tarifaDeSaque = valorASacar * taxaDeSaque();
    float valorDoSaque = valorASacar + tarifaDeSaque;
    if(valorDoSaque > saldo){
        std::cout << "Saldo mais tarifa superam o valor do saldo em R$" << valorDoSaque - saldo << std::endl;
        return;
    }
    saldo-=valorDoSaque;
}

void Conta::depositar(float valorADepositar){
    saldo+=valorADepositar;
}

std::string Conta::recuperarNumero(){
    return numero;
}

float Conta::recuperarSaldo(){
    return saldo;
}

int Conta::retornoNumeroDeContas(){
    return numeroDeContas;
}

float Conta::taxaDeSaque()const{
    return 0.05F;
}
