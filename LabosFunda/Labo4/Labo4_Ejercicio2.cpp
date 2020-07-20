#include <iostream>

using namespace std;

int numero, resultado;

int main ()
{
    cout<< "PROGRAMA PARA VERIFICAR SI UN NUMERO ES PAR O IMPAR"<<endl;
    cout<< endl;
    cout<< "Ingrese un numero"<<endl;
    cin>>numero;

    resultado=numero% 2;

    if(resultado==0)
    {
        cout<<"El numero es par."<<endl;
    }
    
    else 
    {
        cout<<"El numero es impar."<<endl;
    }
 
    return 0;
}