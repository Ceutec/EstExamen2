#include "Evaluador.h"

void evaluar()
{
    int infinito = 9999;
    int grafo[5][5];

    for(int col=0;col<5;col++)
        for(int fila=0;fila<5;fila++)
            if(fila==col)
                grafo[fila][col]=0;
            else
                grafo[fila][col]=infinito;

    grafo[0][1]=2;
    grafo[0][2]=6;
    grafo[0][3]=7;

    grafo[2][0]=7;//Ciclo

    grafo[1][3]=3;
    grafo[1][4]=6;

    grafo[2][4]=1;

    grafo[3][4]=5;


    double nota = 0;

    set<int>s1;
    s1.insert(0);
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);

    set<int>s2;
    s2.insert(1);
    s2.insert(3);
    s2.insert(4);

    set<int>s3;
    s3.insert(4);

    set<int>sr1;
    recorridoBacktracking(grafo,0,&sr1);

    set<int>sr2;
    recorridoBacktracking(grafo,1,&sr2);

    set<int>sr3;
    recorridoBacktracking(grafo,4,&sr3);

    cout<<"recorridoBacktracking():\t";
    if(sr1==s1 && s2==sr2 && s3==sr3)
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    set<int>s4;
    s4.insert(0);

    set<int>s5;
    s5.insert(0);
    s5.insert(1);
    s5.insert(2);
    s5.insert(3);

    set<int>s6;
    s6.insert(0);
    s6.insert(1);
    s6.insert(2);
    s6.insert(3);
    s6.insert(4);

    set<int>sr4;
    recorridoProfundidad(grafo,0,&sr4,0);

    set<int>sr5;
    recorridoProfundidad(grafo,0,&sr5,1);

    set<int>sr6;
    recorridoProfundidad(grafo,0,&sr6,2);

    cout<<"recorridoProfundidad():\t\t";
    if(sr4==s4 && s5==sr5 && s6==sr6)
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoArbolTrinario*n1 = new NodoArbolTrinario(10);
    NodoArbolTrinario*n2 = new NodoArbolTrinario(5);
    NodoArbolTrinario*n3 = new NodoArbolTrinario(15);
    NodoArbolTrinario*n4 = new NodoArbolTrinario(20);
    NodoArbolTrinario*n5 = new NodoArbolTrinario(25);
    NodoArbolTrinario*n6 = new NodoArbolTrinario(28);
    NodoArbolTrinario*n7 = new NodoArbolTrinario(9);
    NodoArbolTrinario*n8 = new NodoArbolTrinario(1);

    n1->izq = n2;
    n1->medio = n3;
    n1->der = n4;

    n2->izq = n5;
    n2->medio = n6;

    n3->der = n7;

    n7->medio = n8;

    cout<<"getMayor():\t\t\t";
    if(getMayor(n1)==28 && getMayor(n7)==9 && getMayor(n2)==28)
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoGrafo* g0 = new NodoGrafo(0);
    NodoGrafo* g1 = new NodoGrafo(1);
    NodoGrafo* g2 = new NodoGrafo(2);
    NodoGrafo* g3 = new NodoGrafo(3);
    NodoGrafo* g4 = new NodoGrafo(4);

    g0->adjacentes.push_back(g1);
    g0->adjacentes.push_back(g2);
    g0->adjacentes.push_back(g3);

    g1->adjacentes.push_back(g3);
    g1->adjacentes.push_back(g4);

    g3->adjacentes.push_back(g4);

    g2->adjacentes.push_back(g4);

    g2->adjacentes.push_back(g0);

    g1->adjacentes.push_back(g2);

    cout<<"tieneCiclos():\t\t\t";
    if(tieneCiclos(g1)
        && tieneCiclos(g0)
        && !tieneCiclos(g3)
        && !tieneCiclos(g4)
        )
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
