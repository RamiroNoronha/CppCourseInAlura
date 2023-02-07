#include <fstream>
#include <iostream>
#include "escrever_arquivo.hpp"

void escreverArquivo(std::vector<std::string> palavras){
    std::ofstream escrever;
    escrever.open("palavras.txt");
    if(escrever.is_open()){
        escrever << palavras.size() << std::endl;
        for(std::string palavra : palavras){
            escrever<< palavra << std::endl;
        }
        escrever.close();
    }
}