/*cadastrar contas corrente e poupança,  depositar, retirar
e também  descontar a taxa de manutenção no caso da conta corrente
e calcular os rendimentos no caso da poupança.*/

#include <iostream>
#include "conta.h"
#include "poupanca.h"
#include "corrente.h"

using namespace std;

int main()
{
    int menu;
    char nome [50]; //nome do cliente
    char numero [9]; //numero da conta
    int d; //contador pra tipo de conta inserida
    int a = 0; // contador poupanca
    int b = 0; //contador corrente
    float saque; //valor sacado pelo cliente
    string n1; //numero da busca do saque/deposito
    float deposito; //valor depositado pelo cliente
    float taxaM; // taxa de manuntencao cobrada do cliente
    float taxaR; //taxa de rendimento da conta do cliente

    poupanca *p [10];
    for (int i = 0; i < 10; i++){
              p[i] = NULL;
    }
    corrente *c [10];
    for (int j = 0; j < 10; j++){
              c[j] = NULL;
    }

    while(1)
        {
        cout << "\t1 - Adicionar conta" << endl;
        cout << "\t2 - Sacar" << endl;
        cout << "\t3 - Depositar" << endl;
        cout << "\t4 - Descontar taxa de manutenção" << endl;
        cout << "\t5 - Adicionar taxa de rendimento" << endl;
        cout << "\t6 - Mostrar lista com nomes e saldos" << endl;

        cin >> menu;


        switch (menu)
        {
            case 1:
                cout << "\nInsira o nome que vamos adicionar\n" << endl;
                cin >> nome;
                cout << "\nInsira o numero da conta que vamos adicionar\n" << endl;
                cin >> numero;
                cout << "\nInsira o tipo de conta - sendo (1) POUPANCA e (2) CORRENTE\n" << endl;
                cin >> d;

                if (d==1){
                    p[a] = new poupanca (nome,numero);
                    a++;
                }
                if (d==2){
                    c[b] = new corrente (nome, numero);
                    b++;
                }


                break;

            case 2:
                cout << "\nInsira o tipo de conta - sendo (1) POUPANCA e (2) CORRENTE\n" << endl;
                cin >> d;
                cout << "\nInsira o numero da conta\n" << endl;
                cin >> n1;
                cout << "\nInsira valor de saque\n" << endl;
                cin >> saque;

                if (d==1){
                    for ( int indice = 0; indice < 10; indice++){
                    if (p[indice] != NULL) {
                    if(p[indice]->getConta() == n1)
                        {
                        cout << "\nsaque\n" << endl;
                        p[indice]->sacar(saque);
                        p[indice]->imprimeSaldo();
                            break;
                        }}}}

                if (d==2){
                    for ( int indice = 0; indice < 10; indice++){
                    if (c[indice] != NULL) {
                    if(c[indice]->getConta() == n1)
                        {
                        c[indice]->sacar(saque);
                        c[indice]->imprimeSaldo();
                            break;
                        }}}}

                break;

            case 3:
                cout << "\nInsira o tipo de conta - sendo (1) POUPANCA e (2) CORRENTE\n" << endl;
                cin >> d;
                cout << "\nInsira o numero da conta\n" << endl;
                cin >> n1;
                cout << "\nInsira valor de deposito\n" << endl;
                cin >> deposito;

                if (d==1){
                    for ( int indice = 0; indice < 10; indice++){
                    if (p[indice] != NULL) {
                    if(p[indice]->getConta() == n1)
                        {
                        p[indice]->depositar(deposito);
                        p[indice]->imprimeSaldo();
                            break;
                        }}}}

                if (d==2){
                    for ( int indice = 0; indice < 10; indice++){
                    if (c[indice] != NULL) {
                    if(c[indice]->getConta() == n1)
                        {
                        c[indice]->depositar(deposito);
                        c[indice]->imprimeSaldo();
                            break;
                        }}}}

                break;

            case 4:
                cout << "\nInsira o numero da conta\n" << endl;
                cin >> n1;
                cout << "\nInsira taxa de manutencao\n" << endl;
                cin >> taxaM;

                    for ( int indice = 0; indice < 10; indice++){
                    if (c[indice] != NULL) {
                    if(c[indice]->getConta() == n1)
                        {
                        c[indice]->setTaxaCobra(taxaM);
                        c[indice]->calculaCobra();
                        c[indice]->imprimeSaldo();
                            break;
                        }}}

                break;

            case 5:
                cout << "\nInsira o numero da conta\n" << endl;
                cin >> n1;
                cout << "\nInsira taxa de rendimento em % \n" << endl;
                cin >> taxaR;

                    for ( int indice = 0; indice < 10; indice++){
                    if (p[indice] != NULL) {
                    if(p[indice]->getConta() == n1)
                        {
                        p[indice]->setTaxaRend(taxaR);
                        p[indice]->calculaRendimento();
                        p[indice]->imprimeSaldo();
                            break;
                        }}}

                break;

            case 6:
                cout << "------CONTA POUPANCA------" << endl;
                    for (int i=0; i<10; i++){
                    if(p[i]!= NULL) {
                        cout << "" << (i+1) << ". " << p[i]->getConta() << " - " <<  p[i]->getCliente()<< ": " << endl;
                        p[i]->imprimeSaldo();
                    }
                }
                cout << "------CONTA CORRENTE------" << endl;
                    for (int i=0; i<10; i++){
                    if(c[i]!= NULL) {
                        cout << "" << (i+1) << ". " << c[i]->getConta() << " - " <<  c[i]->getCliente()<< ": " << endl;
                        c[i]->imprimeSaldo();
                    }
                }
                break;


            default:
                cout << "Erro" << endl;

                break;
        }


        }

    return 0;
}
