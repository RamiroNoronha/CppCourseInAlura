#pragma once
#include <string>
#include <iostream>
#include "cpf.hpp"
#include "pessoa.hpp"

class Titular : public Pessoa{
   

   public:
   Titular(std::string nome, Cpf cpf);
};