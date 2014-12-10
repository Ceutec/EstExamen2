
#include "Evaluador.h"
#include "NodoArbolTrinario.h"
#include "NodoGrafo.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Almacena todos los nodos recorridos de un grafo (dado), dado un inicio (dado)
//y los guarda en el set de recorridos (dado)
void recorridoBacktracking(int grafo[5][5], int inicio, set<int>*recorridos)
{
}

//Almacena todos los nodos recorridos de un grafo (dado), dado un inicio (dado), la profundidad deseada (dada)
//y los guarda en el set de recorridos (dado)
void recorridoProfundidad(int grafo[5][5], int inicio, set<int>*recorridos, int profundidad)
{
}

//Devuelve el valor mayor de un arbol trinario dada su raiz(dado)
int getMayor(NodoArbolTrinario* raiz)
{
    return -1;
}

//Devuelve true si el grafo tiene ciclos dado un nodo inicial inicio (dado), de lo contrario devuelve false
bool tieneCiclos(NodoGrafo* inicio)
{
    return false;
}

int main ()
{
    evaluar();

    return 1;
}
