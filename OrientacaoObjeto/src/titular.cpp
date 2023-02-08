#include "titular.hpp"

Titular::Titular(std::string nome, Cpf cpf) : nome(nome), cpf(cpf){
    verificaTamanhoDoNome();
}

std::string Titular::recuperarNomeTitular(){
    return nome;
}

void Titular::verificaTamanhoDoNome(){
    if(nome.size() < 5){
        std::cout << "Nome do titular contém menos de 5 caracters" << std::endl;
        exit(1); 
    }
}