#include <iostream>
#include "existe_letra.hpp"
#include "imprimir_tentativa.hpp"

void imprimirTentativa(std::string palavra_secreta,std::vector<char>& erros, std::map<char, bool>& chutes){
    char chute;
        std::cout << "Digite sua tentativa: ";
        std::cin >> chute;
        chutes[chute] = true;
        if(existeLetra(chute, palavra_secreta, chutes)){
            std::cout << "Você acertou!" << std::endl;
        } else{
            std::cout << "Você errou!" << std::endl;
            erros.push_back(chute);
        }
        std::cout << std::endl;
}