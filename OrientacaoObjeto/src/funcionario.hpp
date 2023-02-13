#pragma once
#include "pessoa.hpp"

class Funcionario : public Pessoa {

    private:
    float salario;

    public:
    Funcionario(std::string nome, Cpf cpf, float salario);
    float recuperaSalario();
    std::string recuperarNomePessoa();
};