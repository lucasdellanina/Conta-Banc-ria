#include "poupanca.h"
#include "conta.h"
#include <iostream>
#include "string.h"

using namespace std;

poupanca::poupanca()
{
    //ctor
}

poupanca::~poupanca()
{
    //dtor
}

poupanca::poupanca (char* s, char* t){
            setConta (t);
            setCliente (s);
            saldo = 100;
}
void poupanca::setTaxaRend(float r){
    taxaRend = r;
}
void poupanca::calculaRendimento(){
    saldo = saldo * (1+(taxaRend/100));
}

float poupanca::getTaxaRend(){
    return taxaRend;
}
