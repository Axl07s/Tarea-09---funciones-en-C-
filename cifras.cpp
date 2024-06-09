// Fecha: 2024-06-07
// Autor: Axel Molineros
// 6) Diseñe la función que recibe como parámetro un entero y devuelve la cantidad de cifras de este entero.
#include <iostream>
#include <math.h>

int cantidadCifras(int numero) {
    if (numero == 0) {
        return 1;
    }
    return std::log10(std::abs(numero)) + 1;
}

int main() {
    int num = 500;
    std::cout << "El numero " << num << " tiene " << cantidadCifras(num) << " cifras." << std::endl;
    return 0;
}
