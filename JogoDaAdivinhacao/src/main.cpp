#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "***********************************************" << endl;
    cout << "**************                   **************" << endl;
    cout << "************* Jogo da Adivinhação *************" << endl;
    cout << "**************                   **************" << endl;
    cout << "***********************************************" << endl;
    cout << "Escolha seu nível de dificuldade: " << endl;
    cout << "Fácil (F), Médio (M), Difícil (D)" << endl;
    cout << "Nível: ";
    char dificuldade;
    cin >> dificuldade;
    int numero_de_tentativas;

    switch (dificuldade)
    {
    case 'F':
        numero_de_tentativas = 15;
        break;
    case 'M':
        numero_de_tentativas = 10;
        break;
    case 'D':
        numero_de_tentativas = 5;
        break;
    default:
        cout << "Dificuldade inválida" << endl;
        break;
    }
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    bool nao_acertou = true;
    double pontos = 1000.0;
    int tentativas;
    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){
    cout << "Tentativa número: " << tentativas << endl;

    cout << "Digite um numero: ";

    int chute;
    cin >> chute;
    double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
    pontos-= pontos_perdidos;
    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;

    if(acertou){
        cout << "Parabéns, você acertou o número secreto!" << endl;
        break;
    } else if(maior){
        cout << "Você chutou acima do número secreto!" << endl;
    } else {
        cout << "Você chutou abaixo do número secreto!" << endl;
    }

    }

    cout << "Parabéns! Você ganhou!" << endl;
    cout << fixed;
    cout.precision(2);
    cout << "Sua pontuação final foi: " << pontos << "." << endl;
    cout << "Número total de tentativas: " << tentativas << endl;

}