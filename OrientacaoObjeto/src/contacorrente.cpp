#include "contacorrente.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular) {}

float ContaCorrente::taxaDeSaque()const{
    return 0.05F;
}

void ContaCorrente::tranferencia(Conta& destino, float valor){
    sacar(valor);
    destino.depositar(valor);
}