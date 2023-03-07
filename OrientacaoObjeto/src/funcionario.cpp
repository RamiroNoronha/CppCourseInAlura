#include "funcionario.hpp"


Funcionario::Funcionario(std::string nome,Cpf cpf, float salario) : Pessoa(nome, cpf), salario(salario)
{}

float Funcionario::recuperaSalario()const {
    return salario;
}

std::string Funcionario::recuperarNomePessoa()const {
    return nome;
}