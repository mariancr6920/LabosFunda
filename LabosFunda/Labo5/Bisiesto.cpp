#include <iostream>

using namespace std;
int year;
float resultado1,resultado2,resultado3;

bool prueba1(int year)//primera prueba para ver si es bisiesto.
{
    float result;
    result=year%400;
    if (result==0)
    {
        return true;

    }
    else
    {
        return false;
    }
}

bool prueba2(int year)//segunda prueba para ver si es bisiesto.
{
    float result,result2;
    result=year%4;
    if (result==0)
    {
        return true;
    }
    else 
    {
        return false;
    }

}
bool prueba3(int year)//tercera prueba para ver si es bisiesto.
{
    float result,result2;
    result=year%100;
    if (result==0)
    {
        return true;
    }
    else
    {
        return false; 
    }
    
}


int main ()
{
    cout<<"PROGRAMA PARA VERIFICAR SI UN A"<<char(165)<<"O ES BISIESTO"<<endl;
    cout<<"Ingrese el a"<<char(-92)<<"o que desea verificar:"<<endl;
    cin>>year;

   resultado1= prueba1(year);
   resultado2= prueba2(year);
   resultado3= prueba3(year);


    if (resultado1==true)//si pasa la prueba uno.
    {
        cout<<"Si es bisiesto.";
    }
    else if (resultado2==true)//si no pasa la uno, pero si pasa la dos.
    {
        cout<<"Si es bisiesto.";
    }
    else if (resultado3==true)//si no pasa la uno ni la dos pero si la tres. 
    {
        cout<<"Si es bisiesto.";
    }
    else if (resultado1 !=true, resultado2!=true, resultado3!=true)// si no pasa ninguna. 
    {
        cout<<"No es bisiesto.";
    }

return 0;
}

