#include <iostream>
using namespace std;
// Declare una estructura global con 6 miembros
struct FooStruct2
{
    int a = 85;
    int b = 50;
    float c= 5.5;
    char d = 'z';
    char e = 'm';
    double f = 89.99;

};

int main()
{

    FooStruct2 strucx2;

    FooStruct2 *puntero = &strucx2;

    cout<<"imprimir en pantalla el valor de sus miembros haciendo uso del operador ->"<<endl;

    cout<<"el int a: "<<puntero->a<<endl;
    cout<<"el int b: "<<puntero->b<<endl;
    cout<<"el float c: "<<puntero->c<<endl;
    cout<<"el char d: "<<puntero->d<<endl;
    cout<<"el char e: "<<puntero->e<<endl;
    cout<<"el double f: "<<puntero->f<<endl;


    cout<<"imprimir en pantalla el valor de sus miembros haciendo uso de type casting ->"<<endl;

    cout<<"el valor de a: "<<*((int*)puntero)<<endl;
    cout<<"el valor de b: "<<*((int*)puntero+1)<<endl;
    cout<<"el valor de c: "<<*((float*)puntero+2)<<endl;
    cout<<"el valor de d: "<<*((char*)puntero+12)<<endl;
    cout<<"el valor de e: "<<*((char*)puntero+13)<<endl;
    cout<<"el valor de f: "<<*((double*)puntero+2)<<endl;

    cout<<"Calcule el tamaño de cada estructura con la funcion sizeof() ->"<<endl;

    cout<<"el tamaño de la estructura es: "<<sizeof (FooStruct2)<<endl;

//El tamaño de la estructura es de 24 ya que las 2 variables char se almacenan en el mismo bloque de memoria y la variable double es la ultima en definir

};



