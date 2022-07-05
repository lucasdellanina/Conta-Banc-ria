#ifndef CONTA_H
#define CONTA_H


class conta
{
    public:
        conta();
        conta(char* a, char* b);
        ~conta();
        void imprimeSaldo ();
        void depositar (float d);
        void sacar(float s);
        void setConta(char* n);
        char* getConta ();
        void setCliente(char* c);
        char* getCliente ();

    protected:
        float saldo;




    private:
        char numeroConta[9];
        char nomeCliente[50];



};

#endif // CONTA_H
