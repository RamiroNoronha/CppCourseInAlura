#include <iostream>
#include "existe_letra.hpp"

bool existeLetra(char chute, std::string& palavra_secreta, std::map<char, bool>& chutes){
    for(char letra : palavra_secreta){
        if(letra == chute){
            return true;
        }
    }
    return false;
}