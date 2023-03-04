#pragma once
#include "conta.hpp"
#include <string>
#include "titular.hpp"
class ContaCorrente final: public Conta{
public: 
    ContaCorrente(std::string numero, Titular titular);
protected:
    float taxaDeSaque() const override;
};