#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "Evaluador.h"
#include "NodoArbolTrinario.h"
#include "NodoGrafo.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list

using namespace std;

void evaluar();

void recorridoBacktracking(int grafo[5][5], int inicio, set<int>*recorridos);
void recorridoProfundidad(int grafo[5][5], int inicio, set<int>*recorridos, int profundidad);
int getMayor(NodoArbolTrinario* raiz);
bool tieneCiclos(NodoGrafo* inicio);

#endif // EVALUADOR_H
