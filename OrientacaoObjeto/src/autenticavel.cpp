#include"autenticavel.hpp"

Autenticavel::Autenticavel(std::string senha) : senha(senha){}

bool Autenticavel::autenticaSenha(std::string senha)const{
    return this->senha == senha;
}