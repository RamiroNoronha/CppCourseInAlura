#include "contapoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta(numero, titular){}

void ContaPoupanca::sacar(float valorASacar){

    if(valorASacar < 0){
        std::cout << "Não se pode sacar valores negativos" << std::endl;
        return;
    }
    if(valorASacar > saldo){
        std::cout << "Valor a sacar é maior que o saldo" << std::endl;
        return;
    }
    float tarifaDeSaque = valorASacar*0.03;
    float valorDoSaque = valorASacar + tarifaDeSaque;
    if(valorDoSaque > saldo){
        std::cout << "Saldo mais tarifa superam o valor do saldo em R$" << valorDoSaque - saldo << std::endl;
        return;
    }
    saldo-=valorDoSaque;
}