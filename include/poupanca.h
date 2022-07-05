#ifndef POUPANCA_H
#define POUPANCA_H
#include "conta.h"


class poupanca : public conta
{
    public:
        poupanca();
        ~poupanca();
        poupanca (char* s, char* t);
        float getTaxaRend();
        void setTaxaRend(float r);
        void calculaRendimento();


    private:
        float taxaRend;

};

#endif // POUPANCA_H
