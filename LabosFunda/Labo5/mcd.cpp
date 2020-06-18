#include <iostream>

using namespace std;

int mcd (int mayor, int menor, int residuo)
{
    //se saca el mcd.
    do
    {
       residuo = mayor % menor;
    if(residuo != 0)
    {
        mayor = menor;
        menor = residuo;
    }
    }
    while (residuo != 0);
    cout << "El MCD es: " << menor;

    return residuo;
} 
   

int main()
{
    int mayor, menor, residuo;

    cout<<"PROGRAMA PARA SACAR EL MCD DE DOS NUMEROS"<<endl;
    cout<<"Introduzca el numero mayor:"<<endl;
    cin>>mayor;
    cout<<"Introduca el numero menor:"<<endl;
    cin>>menor;

    mcd (mayor, menor, residuo);

    return 0;


}