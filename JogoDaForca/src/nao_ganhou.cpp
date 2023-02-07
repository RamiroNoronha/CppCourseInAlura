#include <iostream>
#include "nao_ganhou.hpp"

bool naoGanhou(std::string& palavra_secreta, const std::map<char, bool>& chutes){
    for(char letra : palavra_secreta){
        if(chutes.find(letra) == chutes.end() || !chutes.at(letra)){
            return true;
        }
    }
    return false;
}