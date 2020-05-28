#include <iostream>

using namespace std;
string palabra;
int caracteres, longitud;
int main ()
{
    cout<< "PROGRAMA PARA VERIFICAR LA CANTIDAD DE CARACTERES DE UNA PALABRA"<<endl;
    cout<<"Por favor, ingrese una palabra."<<endl;
    cin>> palabra;

    caracteres= palabra.length();
    longitud= caracteres%2;

    if (caracteres>10)
    {
        cout<<"La palabra ingresada es mayor a 10 caracteres.";

    }
    else if (caracteres<10)
    {
        cout<<"La palabra ingresada es menor que 10 caracteres.";
    }
    else if (caracteres==10)
    {
        cout<<"La palabra ingresada tiene exactamente 10 caracteres.";
    }
    
    if (longitud==0)
    {
        cout<<endl<<"Y su cantidad de caracteres es par.";
    }
    else if (longitud !=0)
    {
        cout<<endl<<"Y su cantidad de caracteres es impar.";
    }
    return 0;

}