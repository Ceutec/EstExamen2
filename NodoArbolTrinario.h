#ifndef NODOARBOLTRINARIO_H
#define NODOARBOLTRINARIO_H

#include <iostream>

class NodoArbolTrinario
{
    public:
        int num;
        NodoArbolTrinario* izq;
        NodoArbolTrinario* medio;
        NodoArbolTrinario* der;
        NodoArbolTrinario(int num)
        {
            this->num = num;
            this->izq = NULL;
            this->medio = NULL;
            this->der = NULL;
        }
    protected:
    private:
};

#endif // NODOARBOLTRINARIO_H
