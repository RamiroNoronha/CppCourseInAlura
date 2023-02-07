#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"

void sorteiaPalavra(std::string& palavra_secreta){
    std::vector<std::string> palavras = leArquivo();
    srand(time(NULL));
    int indice_palavra = rand() % palavras.size();
    palavra_secreta =  palavras[indice_palavra];
}