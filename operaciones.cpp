//FECHA: 2024-06-06
//AUTOR: Axel Molineros
//DISEÑE LAS FUNCIONES QUE CALCULAN LAS 4 OPERACIONES ARITMETICAS
//BASICAS: SUMA, RESTA, PRODUCTO, DIVISION
// Ejercicio 3, realizado en clases

#include<iostream>
using namespace std;

double Suma(double num1, double num2)
{
    return num1 + num2;
}

double Resta(double num1, double num2)
{
    return num1 - num2;
}

double Producto(double num1, double num2)
{
    return num1 * num2;
}
double Division(double num1, double num2)
{
    return num1/num2;
}


int main()
{
    cout<<endl<<"Funciones que calculan las operaciones aritmeticas basicas";
    cout<<endl<<"19 dividido para 3 es"<<Division(19,3);

    double res = Suma(10, Suma(12,100));
    cout<<endl<<"La variable res vale "<<res;

     // Llamada adicional
    cout << endl << "El producto de 7 y 8 es " << Producto(7, 8);
    cout << endl << "La resta de 50 menos 20 es " << Resta(50, 20);

    // Otra llamada adicional pero ahora a la Suma
    double otraSuma = Suma(34, 66);
    cout << endl << "La suma de 34 y 66 es " << otraSuma;

    return 0;
}