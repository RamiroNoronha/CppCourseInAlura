#include "conta.hpp"
#include "titular.hpp"
class ContaPoupanca final : public Conta{
    
public:
    ContaPoupanca(std::string numero, Titular titular);
    void sacar(float valorASacar) override;
};