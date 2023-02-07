#pragma once
#include <string>

class Conta{
    private:
    static int numeroDeContas;

    public:
    static int retornoNumeroDeContas();

    private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;

    public:
    Conta(std::string numero, std::string cpfTitular, std::string nomeTitular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperarSaldo();
    std::string recuperarNumero();
    std::string recuperarCPFTitular();
    std::string recuperarNomeTitular();

    private:
    void verificaTamanhoDoNome();
    
};