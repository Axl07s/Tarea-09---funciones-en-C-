// Fecha: 2024-06-07
// Autor: Axel Molineros
// 5) Diseñe la función que recibe como parámetro un entero y devuelve verdadero si el número es par, devuelve falso si es impar

#include <iostream>
using namespace std;

// Función que determina si un número es par o impar
bool esPar(int numero) {
    if (numero % 2 == 0) {
        return true; // Verdadero (true), el número es par
    } else {
        return false; // Falso (false), el número es impar
    }
}

int main() {
    cout << endl << "Funcion que recibe como parámetro un entero y devuelve si es verdadero o falso" << endl;

    cout << "2 es par: " << (esPar(2) ? "Verdadero" : "falso") << endl;
    cout << "6 es par: " << (esPar(6) ? "Verdadero" : "falso") << endl;
    cout << "10 es par: " << (esPar(10) ? "Verdadero" : "Falso") << endl;
    cout << "99 es par: " << (esPar(99) ? "Verdadero" : "falso") << endl;

    // Función que pide al usuario cual número desea saber el par o impar
    int numero;
    cout << "Pedirle al usuario que número desea saber si es par o impar: ";
    cin >> numero;
    
    if (esPar(numero)) {
        cout << numero << " es par" << endl;
    } else {
        cout << numero << " es impar" << endl;
    }

    return 0;
}

