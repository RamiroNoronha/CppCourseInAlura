#include <iostream>
#include "imprimir_erros.hpp"

void imprimirErros(std::vector<char>& erros){
    std::cout << "Letras que não estão na palavra: ";

    for(char erro : erros){
        std::cout << erro << " ";
    }

    std::cout << std::endl;
    
}