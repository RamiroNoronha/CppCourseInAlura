#pragma once
#include <string>
#include <iostream>
#include "cpf.hpp"
#include "pessoa.hpp"
#include "autenticavel.hpp"
class Titular : public Pessoa, public Autenticavel{   
public:
   Titular(std::string nome, Cpf cpf, std::string senha);
};