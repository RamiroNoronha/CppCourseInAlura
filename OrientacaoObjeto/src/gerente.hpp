#pragma once
#include "funcionario.hpp"
#include "autenticavel.hpp"
class Gerente : public Funcionario, public Autenticavel{
public:
    Gerente(std::string nome, Cpf cpf, float salario, std::string senha);
    float bonificacao() const override;
};