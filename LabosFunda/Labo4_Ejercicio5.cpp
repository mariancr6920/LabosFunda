#include <iostream>
using namespace std;
string palabra, primletra, ultletra;

int main ()
{
    cout<<"PROGRAMA PARA VERIFICAR SI LA PALABRA INGRESADA INICIA Y TERMINA CON LA MISMA LETRA"<<endl;
    cout<<"Por favor, ingrese una palabra."<<endl;
    cin>>palabra;

    primletra= palabra.substr(0,1);
    ultletra= palabra.substr(palabra.length()-1);

    if(primletra==ultletra)
    {
        cout<<"La palabra ingresada inicia y finaliza con la misma letra.";
    }
    else if (primletra!=ultletra)
    {
        cout<<"La palabra ingresada no inicia y finaliza con la misma letra.";
    }

}