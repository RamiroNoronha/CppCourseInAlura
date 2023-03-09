#pragma once
#include <string>
class Autenticavel{

private:
    std::string senha;

public:
    Autenticavel(std::string senha);
    bool autenticaSenha(std::string senha) const;
};