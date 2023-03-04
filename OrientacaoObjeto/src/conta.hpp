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
    protected:
    float saldo;

    public:
    Conta(std::string numero, Titular titular);
    virtual ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperarSaldo();
    std::string recuperarNumero();

    protected:
    virtual float taxaDeSaque() const = 0;
};