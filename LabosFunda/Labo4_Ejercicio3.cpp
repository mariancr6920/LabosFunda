#include <iostream>

using namespace std;
int numero;
int main ()
{
    cout<<"PROGRAMA PARA VERIFICAR SI UN NUMERO ES CERO, POSITIVO O NEGATIVO"<<endl;
    cout<<endl;
    cout<<"Ingrese un numero"<<endl;
    cin >> numero;

    if(numero==0)
    {
        cout<<"El numero es 0."<<endl;
    }
    else if (numero>0)
    {
        cout<<"El numero es positivo."<<endl;
    }
    else if (numero<0)
    {
        cout<<"El numero es negativo."<<endl;
    }

    return 0;
}