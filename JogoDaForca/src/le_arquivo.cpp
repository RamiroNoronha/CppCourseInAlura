#include<iostream>
#include <fstream>
#include "le_arquivo.hpp"


std::vector<std::string> leArquivo(){
    std::ifstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open()){
    int quantidade_palavras;
    arquivo >> quantidade_palavras;
    std::vector<std::string> palavras;
    for(int i =0; i < quantidade_palavras; i++){
        std::string palavra;
        arquivo >> palavra;
        palavras.push_back(palavra);
        
    }
    arquivo.close();
    return palavras;
    } else{
        std::cout << "Não foi possível abrir o arquivo com as palavras" << std::endl;
        exit(0);
    }
}