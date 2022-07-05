#include "conta.h"
#include <iostream>
#include "string.h"

using namespace std;

conta::conta()
{
    saldo = 100;
}

conta::~conta()
{
    //dtor
}


conta::conta(char* a, char* b){
            setConta (a);
            setCliente (b);
            saldo = 100;
        }




void conta::imprimeSaldo (){
            cout << "SALDO: " << saldo << endl;
        }

void conta::depositar (float d){
            saldo = saldo + d;
        }
void conta::sacar(float s){
            if (s <= saldo) {
                saldo = saldo - s;
            }else cout << "SALDO INSUFICIENTE" << endl;
        }

void conta::setConta(char* n){
                strcpy (numeroConta, n);
}
char* conta::getConta (){
            return numeroConta;
        }
void conta::setCliente(char* c){
                strcpy (nomeCliente, c);

        }
char* conta::getCliente (){
        return nomeCliente;
}
