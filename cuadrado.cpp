//FECHA: 2024-06-06
//AUTOR: Axel Molineros
//DISEÑE LA FUNCION QUE RECIBE COMO PARÁMETRO UN ENTERO, Y CALCULA EL CUADRADO DE ESE ENTERO
// Ejercicio 1, realizado en clases

#include<iostream>
using namespace std;

//CALCULA EL CUADRADO DE UN ENTERO.//
int CuadradoNum(int num) //FUNCION DEFINIDA POR EL USUARIO//
{
    int res;
    res = num*num;
    return res;
}

int main()
{
    cout<<endl<<"Calculo del cuadrado de un número ";

    int x = CuadradoNum(10); //LLAMADA A LA FUNCION DEL CUADRADO//
    x = x*2 + (x/3);
    cout<<endl<<"El cuadrado de 10 es "<< x;

    cout<<endl<<"El cuadrado de 12 es "<< CuadradoNum(12);
    cout<<endl<<"El cuadrado de 15 es "<< CuadradoNum(15);
    cout<<endl<<"El cuadrado de 9 es "<< CuadradoNum(9);
    //PIDA AL USUARIO EL NÚMERO QUE DESEA ELEVAR AL CUADRADO//
    cout<<endl<<"Ingrese un entero para calcular su cuadrado: ";
    cin>>x;
    cout<<endl<<"El cuadrado de "<<x<<" es "<< CuadradoNum(x);

    x= CuadradoNum(CuadradoNum(3));
    cout<<endl<<"Resultado del cuadrado de un cuadrado "<< x;
    return 0;
}
