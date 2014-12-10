#ifndef  NODOGRAFO_H
#define  NODOGRAFO_H

#include <list>

using namespace std;

class NodoGrafo
{
    public:
        int num;
        list<NodoGrafo*> adjacentes;
        NodoGrafo(int num)
        {
            this->num = num;
        }
    protected:
    private:
};

#endif //  NODOGRAFO_H
