// Fecha: 2024-06-07
// Autor: Axel Molineros
// 7) Es una función que recibe 3 enteros. El primero indica la cantidad de números aleatorios que la función debe generar; el segundo y el tercero indican los límites inferior y superior dentro de los cuales se debe generar cada número. La tarea de esta función será la de retornar la sumatoria de esos números generados.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//DOCUMENTE LA FUNCION

int SumaNumAleatorios(int cantidad, int limiteInferior, int limiteSuperior) {
    srand(time(0)); // Inicializa la semilla para el generador de números aleatorios
    int suma = 0;
    for (int i = 0; i < cantidad; ++i) {
        int numeroAleatorio = limiteInferior + std::rand() % (limiteSuperior - limiteInferior + 1);
        suma += numeroAleatorio;
    }
    return suma;
}

int main() {
    int cantidad = 100;
    int limiteInferior = 45;
    int limiteSuperior = 80;
    int suma = SumaNumAleatorios(cantidad, limiteInferior, limiteSuperior);
    std::cout << "La sumatoria de " << cantidad << " números aleatorios entre " << limiteInferior << " y " << limiteSuperior << " es: " << suma << std::endl;
    return 0;
}
