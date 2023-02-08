#pragma once
#include <string>
#include "titular.hpp"

class Conta{
    private:
    static int numeroDeContas;

    public:
    static int retornoNumeroDeContas();

    private:
    std::string numero;
    Titular titular;
    float saldo;

    public:
    Conta(std::string numero, Titular titular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperarSaldo();
    std::string recuperarNumero();

    
};