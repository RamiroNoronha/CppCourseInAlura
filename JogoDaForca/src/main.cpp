#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "imprimir_titulo.hpp"
#include "sorteia_palavra.hpp"
#include "nao_ganhou.hpp"
#include "imprimir_erros.hpp"
#include "imprimir.hpp"
#include "imprimir_tentativa.hpp"
#include "incluir_palavra.hpp"
#include "imprimir_erros.hpp"

using namespace std;

static string palavra_secreta = "MELANCIA";
static map<char, bool> chutes;
static vector<char> erros;


int main() {
    imprimirTitulo();
    sorteiaPalavra(palavra_secreta);
    while(naoGanhou(palavra_secreta, chutes) && erros.size() < 4){

        imprimirErros(erros);

        imprimir(palavra_secreta, chutes);

        imprimirTentativa(palavra_secreta, erros, chutes); 
    }

    cout << "A palavra secreta é: " << palavra_secreta << endl;

    if(naoGanhou(palavra_secreta, chutes)){
        cout<< "Você perdeu!" << endl;
    } else{
        cout << "Você ganhou!" << endl;
        cout << "Deseja Incluir uma palavra: (S/N)";
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            incluirPalavra();
        }
    }
}