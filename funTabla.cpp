//FECHA: 2024-06-06
//AUTOR: Axel Molineros
//DISEÑE LA FUNCION QUE IMPRIME UNA TABLA DE MULTIPLICAR
// Ejercicio 2, trabajo en clases

#include<iostream>
using namespace std;

//IMRPIMA UNA TABLA DE MULTIPLICAR//
void TablaMultiplicar(int tabla)
{
    cout<<endl<<"Tabla de multiplicar de " <<tabla;
    for(int k=1; k<=12; k++)
    {
        cout<<endl<<tabla << "X" << k << "=" <<tabla*k;
    }
}
//DISEÑE LA FUNCION QUE IMRPIMA UNA TABLA DE MULTIPLICAR//
//LA FUNCION RECIBE COMO PARAMETROS 3 ENTEROS: EL PRIMERO ES LA TABLA,//
//EL SEGUNDO ES EL LIMITE INFERIOR, Y EL TERCERO ES EL LIMITE SUPERIOR//
void TablaLimites(int tabla, int inicio, int fin)
{
cout<<endl<<"Tabla de multiplicar de "<<tabla;

for(int k=inicio; k <=fin; k++)
{
    cout<<endl<<tabla << " x " << k << "="<< tabla*k;
}
    
}
int main()
{
    cout<<endl<<"Funcion que calcula una tabla de multiplicar";
    TablaMultiplicar(5);
    TablaMultiplicar(8);
    TablaMultiplicar(12);
    TablaMultiplicar(6);
    //PIDA AL USUARIO LA TABLA QUE DESEA IMPRIMIR//
    int num;
    cout<<endl<<"Ingrese la tabla que desea ver";
    cin>>num;
    TablaMultiplicar(num);

    return 0;
}