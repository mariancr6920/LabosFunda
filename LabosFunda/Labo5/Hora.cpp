#include <iostream>
#include <ctime>

using namespace std;

int tiempoactual ()
{
    //ingresar tiempo actual.

    int h, m , s;

    cout<<"Ingrese la hora actual en el formato de 24 horas."<<endl;
    cout<<"Primero ingrese las horas:"<<endl;
    cin>>h;
    cout<<"Ingrese los minutos:"<<endl;
    cin>>m;
    cout<<"Ingrese los segundos:"<<endl;
    cin>>s;

    // sumar 1 segundo

    s+=1;
    //sin son 60 segs.
    if (s==60)
    {
        s=0;
        m+=1;
        //si acaso son 60 mins.
        if (m==60)
        {
            m=0;
            h+=1;
            //si son 23 horas, para evitar que salga 24:00:00, saldra 00:00:00.
            if(h==23)
            h=0;
        }
    }

    //muestra el tiempo más un segundo.

    cout <<"El tiempo actual mas un segundo es:"<<endl;

    if (h<10)
    {
        cout<<"0";
    }

    cout<<h<<":";

    if (m<10)
    {
        cout<<"0";
    }

    cout<<m<<":";

    if (s<10)
    {
        cout<<"0";
    }

    cout<<s<<endl;

}


int main ()
{

    cout<<"PROGRAMA PARA SUMARLE UN SEGUNDO A UNA HORA EN ESPECIFICO"<<endl; 

    tiempoactual();

    return 0;

}