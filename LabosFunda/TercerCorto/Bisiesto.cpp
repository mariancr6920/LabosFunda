#include <iostream>

using namespace std;
int year;
float resultado1,resultado2,resultado3;

int prueba1(int year)//primera prueba para ver si es bisiesto.
{
    float result;
    result=year%400;

    return result;
}

int prueba2(int year)//segunda prueba para ver si es bisiesto.
{
    float result,result2;
    result=year%4;
    return result;
}
int prueba3(int year)//tercera prueba para ver si es bisiesto.
{
    float result,result2;
    result=year%100;
    return result;
}


int main ()
{
    cout<<"PROGRAMA PARA VERIFICAR SI UN A"<<char(165)<<"O ES BISIESTO"<<endl;
    cout<<"Ingrese el a"<<char(-92)<<"o que desea verificar:"<<endl;
    cin>>year;

   resultado1= prueba1(year);
   resultado2= prueba2(year);
   resultado3= prueba3(year);


    if (resultado1==0)//si pasa la prueba uno.
    {
        cout<<"Si es bisiesto.";
    }
    else if (resultado2==0)//si no pasa la uno, pero si pasa la dos.
    {
        cout<<"Si es bisiesto.";
    }
    else if (resultado3==0)//si no pasa la uno ni la dos pero si la tres. 
    {
        cout<<"Si es bisiesto.";
    }
    else if (resultado1 !=0, resultado2!=0, resultado3!=0)// si no pasa ninguna. 
    {
        cout<<"No es bisiesto.";
    }

return 0;
}

