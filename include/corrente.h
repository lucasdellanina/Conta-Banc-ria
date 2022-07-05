#ifndef CORRENTE_H
#define CORRENTE_H
#include "conta.h"

class corrente : public conta
{
    public:
        corrente();
        ~corrente();
        corrente (char* x, char* y);
        void setTaxaCobra(float cob);
        float getTaxaCobra();
        void calculaCobra();

    protected:
        float taxaCobra;

    private:
};

#endif // CORRENTE_H
