#include "corrente.h"

corrente::corrente()
{
    //ctor
}

corrente::~corrente()
{
    //dtor
}

corrente::corrente (char* x, char* y){
            setConta (y);
            setCliente (x);
            saldo = 100;
}

void corrente::setTaxaCobra(float cob){
    taxaCobra = cob;
}
float corrente::getTaxaCobra(){
    return taxaCobra;
}
void corrente::calculaCobra(){
    saldo = saldo - taxaCobra;
}
