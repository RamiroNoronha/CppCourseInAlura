#pragma once
#include <iostream>
#include <string>
class Cpf {
    private:
    std::string numero;

    public:
    Cpf(std::string numero);
    std::string recuperaNumero();
};