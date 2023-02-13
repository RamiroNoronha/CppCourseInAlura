#include "pessoa.hpp"

Pessoa::Pessoa(std::string nome, Cpf cpf) : nome(nome), cpf(cpf){
    verificaTamanhoDoNome();
}


void Pessoa::verificaTamanhoDoNome(){
    if(nome.size() < 5){
        std::cout << "Nome do titular contém menos de 5 caracters" << std::endl;
        exit(1); 
    }
}