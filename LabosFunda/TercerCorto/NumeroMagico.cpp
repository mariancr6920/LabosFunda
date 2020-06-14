#include <iostream>
using namespace std;

int nmagico = 69;
int intento;
int numintentos = 1; 

int main (void)

{
    //indicaciones

    cout<<"ADIVINE EL NUMERO MAGICO"<<endl;
    cout<<endl;
    cout<<"REGLAS:"<<endl;
    cout<<"1. Tendra 5 oportunidades para adivinar el numero, piense bien en sus intentos."<<endl;
    cout<<"2. Si en algun momento desea dejar de jugar, escriba 911."<<endl;
    cout<<endl;
    cout<<"Comencemos."<<endl;
    cout<<endl;
    cout<<"Ingrese un numero del 1 al 100:"<<endl;

    //verificacion del numero y cancelacion del proceso si la persona escribe 911.

    while (numintentos <=5)
    {
        cin>>intento;
        numintentos ++;

        if (intento == 911)
        {
            cout<<"Gracias por participar.";
            break;

        }

        else if (intento<nmagico)
        {
            cout<<"Incorrecto. Su numero ingresado es menor que el numero magico, intente de nuevo." <<endl; 
            cout<<"Le quedan: "<<6-numintentos<<" intentos."<<endl; 

            if (numintentos>5)
            {
                cout<<"Lo sentimos, ya no tiene mas intentos."<<endl;
            }
        }

        else if (intento>nmagico)
        {
            cout <<"Incorrecto. Su numero ingresado es mayor que el numero magico, intente de nuevo."<<endl;
            cout<<"Le quedan: "<<6-numintentos<< " intentos."<<endl;
            if (numintentos>5)
            {
                cout <<"Lo sentimos, ya no tienes mas intentos."<<endl;
            }
        }

        else if (intento==nmagico)
        {
            cout <<"Felicidades, adivino el numero magico."<<endl;
            break;
        }        
        
    }
    return 0;
}