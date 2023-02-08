#include "cpf.hpp"

Cpf::Cpf(std::string numero) : numero(numero){}

std::string Cpf::recuperaNumero(){
    return numero;
}