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
void Conta::sacar(float valorASacar){
    if(valorASacar > saldo){
        std::cout << "Valor a sacar é maior que o saldo" << std::endl;
        return;
    }

    saldo-=valorASacar;
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
