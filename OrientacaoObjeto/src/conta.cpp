#include "conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, std::string cpfTitular, std::string nomeTitutlar):
    numero(numero),
    cpfTitular(cpfTitular),
    nomeTitular(nomeTitular),
    saldo(0){
        verificaTamanhoDoNome();
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

std::string Conta::recuperarCPFTitular(){
    return cpfTitular;
}

std::string Conta::recuperarNomeTitular(){
    return nomeTitular;
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

void Conta::verificaTamanhoDoNome(){
    if(nomeTitular.size() < 5){
        std::cout << "Nome do titular contém menos de 5 caracters" << std::endl;
        exit(1); 
    }
}