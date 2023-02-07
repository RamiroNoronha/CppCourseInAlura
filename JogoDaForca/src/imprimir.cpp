#include <iostream>
#include "imprimir.hpp"


void imprimir(std::string& palavra_secreta, const std::map<char, bool>& chutes){
    for(char letra : palavra_secreta){
            if((chutes.find(letra) != chutes.end()) && chutes.at(letra)){
                std::cout << letra << " ";
            } else {
                std::cout << "_ ";
            }
        }
        std::cout << std::endl;
        
}