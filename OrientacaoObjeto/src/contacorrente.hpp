#pragma once
#include "conta.hpp"
#include <string>
#include "titular.hpp"
class ContaCorrente final: public Conta{
public: 
    ContaCorrente(std::string numero, Titular titular);
    void tranferencia(Conta& destino, float valor);
private:
    float taxaDeSaque() const override;
    
};