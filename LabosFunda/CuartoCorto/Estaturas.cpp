#include <iostream>
using namespace std;

int main (void)
{
    float suma,prom;
    float height [25];
    int i; 
    float promedio ();
    float mayor_menor();
    cout<<"PROGRAMA PARA PROMEDIO DE ESTATURAS DE ALUMNOS"<<endl;

    cout<<"Digite las estaturas de los 25 alumnos: "<<endl;

    promedio ();

}

float promedio ()
{
    float suma,prom;
    float height [25];
    int i, contador, contador2; 

    for ( i = 0; i < 25; i++)
    {
        cin>>height[i];   
    }

    suma= 0;
        for(i = 0; i < 25; i++)
    {
    suma = suma + height[i];
    prom = suma/25;
    }
    
    cout<<"El promedio es:"<<prom<<endl;

    contador=0;
    contador2=0;

    for (int i = 0; i < 25; i++)
    {
        if (height[i]>prom)
        {
            contador++;
        }
    }

    contador--;
    contador2=25-contador;

cout <<"Los numeros mayores al promedio son:"<<contador<<endl;
cout <<"Los numeros menores al promedio son:"<<contador2<<endl;

}
