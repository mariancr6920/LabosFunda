#include <iostream>

using namespace std;

int numero, numero2, resultado;

int main ()
{
    cout<<"PROGRAMA PARA VERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO"<<endl;
    cout <<endl;
    cout<<"Ingrese un numero"<<endl;
    cin >> numero;
    cout<<"Ingrese otro numero"<<endl;
    cin >> numero2;

    resultado= numero%numero2;

    if (resultado==0)
    {
        cout<<"Si es divisible."<<endl;

    }

    else
    { 
     cout<<"No es divisible."<<endl;
    }

    return 0;

}