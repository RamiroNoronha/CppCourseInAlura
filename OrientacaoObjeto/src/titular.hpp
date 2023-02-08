#pragma once
#include <string>
#include <iostream>
#include "cpf.hpp"

class Titular {
    private:
    std::string nome;
    Cpf cpf;

    public:
    Titular(std::string nome, Cpf cpf);
    std::string recuperarNomeTitular();

    private:
    void verificaTamanhoDoNome();
};