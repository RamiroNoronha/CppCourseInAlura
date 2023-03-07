#pragma once 
#include "funcionario.hpp"

class Caixa : Funcionario{

public:
    Caixa(std::string nome, Cpf cpf, float salario);
    float bonificacao() const override;

};