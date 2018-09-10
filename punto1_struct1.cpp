#include <iostream>
using namespace std;
// Declare una estructura global con 6 miembros
struct FooStruct
{
    int a = 123;
    char b = 'a';
    float c= 3.5;
    char d = 'x';
    double e = 456.123;
    int f = 5;

};

int main()
{

    FooStruct strucx;

    FooStruct *puntero = &strucx;

    cout<<"imprimir en pantalla el valor de sus miembros haciendo uso del operador ->"<<endl;

    cout<<"el int a: "<<puntero->a<<endl;
    cout<<"el char b: "<<puntero->b<<endl;
    cout<<"el float c: "<<puntero->c<<endl;
    cout<<"el char d: "<<puntero->d<<endl;
    cout<<"el double e: "<<puntero->e<<endl;
    cout<<"el int f: "<<puntero->f<<endl;


    cout<<"imprimir en pantalla el valor de sus miembros haciendo uso de type casting ->"<<endl;

    cout<<"el valor de a: "<<*((int*)puntero)<<endl;
    cout<<"el valor de b: "<<*((char*)puntero+4)<<endl;
    cout<<"el valor de c: "<<*((float*)puntero+2)<<endl;
    cout<<"el valor de d: "<<*((char*)puntero+12)<<endl;
    cout<<"el valor de e: "<<*((double*)puntero+2)<<endl;
    cout<<"el valor de f: "<<*((int*)puntero+6)<<endl;

    cout<<"Calcule el tamaño de cada estructura con la funcion sizeof() ->"<<endl;

    cout<<"el tamaño de la estructura es: "<<sizeof (FooStruct)<<endl;

//El tamaño de la estructura es de 32 bytes ya que el compilador mira el dato de mayor longitud
//y separa los bloques de memoria deacuerdo a la longitud del dato. El dato de mayor longitud en la estructura es de 8 bytes.
//Si se suman los bloques de memoria seprados por 8 bytes cada uno da como resultado 32 bytes


};




