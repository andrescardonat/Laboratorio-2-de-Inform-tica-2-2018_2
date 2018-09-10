#include <iostream>
using namespace std;
void func1(int arg);
void func2(int arg);
void func4(int arg);
void func5(int arg);
void func6(int arg);

float funsuma(float arg1, float arg2);
float funresta(float arg1, float arg2);
float funmultiplicacion(float arg1, float arg2);
float fundivicion(float arg1, float arg2);

void (*puntero_a_funcion[])(int)={func1, func2, func4, func5,func6};

float (*psuma)(float, float);
float (*presta)(float, float);
float (*pmultiplicacion)(float, float);
float (*pdivicion)(float, float);

int main()
{
    float a=0.0;
    float b=0.0;
    int j=0;
    cout<<"A continuacion ingresara dos numeros"<<endl;
    cout<<"ingrese el primer numero"<<endl;
    cin>>a;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>b;
    /*puntero_a_funcion = &func1;
    (*puntero_a_funcion)(1);

    puntero_a_funcion = &func2;
    (*puntero_a_funcion)(500);*/



    for(int i=0; i<5; ++i)
        puntero_a_funcion[i](i);

    float retornosuma = 0;
    psuma = &funsuma;
    retornosuma = (*psuma)(a, b);

    float retornoresta = 0;
    presta = &funresta;
    retornoresta = (*presta)(a, b);

    float retornomultiplicacion=0;
    pmultiplicacion = &funmultiplicacion;
    retornomultiplicacion = (*pmultiplicacion)(a, b);

    float retornosdivicion=0;
    pdivicion=&fundivicion;
    retornosdivicion = (*pdivicion)(a, b);





    cout<<"ingrese la opcion"<<endl;
    cin>>j;
   while(j>=1&j<=1)
   {
       cout<<"resultado : "<<retornosuma<<endl;
       j++;
       cout<<"ingrese la opcion"<<endl;
       cin>>j;
   };
   while(j>=2&j<=2)
   {
       cout<<"resultado : "<<retornoresta<<endl;
       j++;
       cout<<"ingrese la opcion"<<endl;
       cin>>j;
   };
   while(j>=3&j<=3)
   {
       cout<<"resultado : "<<retornomultiplicacion<<endl;
       j++;
       cout<<"ingrese la opcion"<<endl;
       cin>>j;
   };
   while(j>=4&j<=4)
   {
       cout<<"resultado : "<<retornosdivicion<<endl;
       j++;
       cout<<"ingrese la opcion"<<endl;
       cin>>j;
   };
   while(j>=5&j<=5)
   {
       cout<<"Gracias por usar el servicio"<<endl;
       j++;

   };






}

void func1(int)
{
    cout<<"Para sumar ingrese: 1 "<<endl;
}

void func2(int)
{
    cout<<"Para restar ingrese: 2 "<<endl;
}

void func4(int)
{
    cout<<"Para multiplicar ingrese: 3 "<<endl;
}

void func5(int)
{
    cout<<"Para dividir ingrese: 4 "<<endl;
}
void func6(int)
{
    cout<<"Para salir ingrese : 5"<<endl;
}

float funsuma(float arg1, float arg2)
{
    float suma = 0.0;

    suma = arg1 + arg2;

    return suma;
}
float funresta(float arg1, float arg2)
{
    float resta = 0.0;

    resta = arg1 - arg2;

    return resta;
}
float funmultiplicacion(float arg1, float arg2)
{
    float multiplicacion=0.0;

    multiplicacion = arg1 * arg2;

    return multiplicacion;
}
float fundivicion(float arg1, float arg2)
{
    float divicion=0.0;

    divicion = arg1 /arg2;

    return divicion;
}




