#include <iostream>
#include "le_arquivo.hpp"
#include "escrever_arquivo.hpp"
#include "incluir_palavra.hpp"

void incluirPalavra() {
    std::cout << "Digite a nova palavra em letras maiúsculas: ";
    std::string novaPalavra;
    std::cin >> novaPalavra;

    std::vector<std::string> todasPalavras = leArquivo();
    todasPalavras.push_back(novaPalavra);
    escreverArquivo(todasPalavras);

}