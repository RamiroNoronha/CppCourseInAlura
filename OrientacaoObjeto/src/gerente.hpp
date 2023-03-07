#pragma once
#include "funcionario.hpp"

class Gerente : Funcionario{
public:
    Gerente(std::string nome, Cpf cpf, float salario);
    float bonificacao() const override;
};