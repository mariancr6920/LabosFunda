#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int longCad = 20;

struct datos
{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArt;
};

float lecturaDatos (int n, string cad);
float calcularCosto (datos arr1[], int n);
float despliegueDatos (datos arr1[], int n);
float costoTotal(datos arr1[], int n);


float lecturaDatos (int n, string cad)
{
    
    struct datos arr1[n];
    int i; 

    for (i = 0; i < n; i++)
    {
        cout<<"Articulo "<< i+1 <<endl;
        cout<<"Ingrese el nombre del articulo:"<<endl;
        getline(cin,cad,'\n');
        strncpy(arr1[i].nombreArticul, cad.c_str( ), longCad);
        arr1[i].nombreArticul[longCad]='\0';
        cout<<"Ingrese el precio unitario del articulo:"<<endl;
        cin>> arr1[i].precio;
        cout<<"Ingrese la cantidad de articulos: "<<endl;
        cin>> arr1[i].cantidad;
        cin.ignore(100, '\n');

    }
   calcularCosto (arr1, n);
   despliegueDatos(arr1, n);
   costoTotal (arr1, n); 
}


    
float calcularCosto (datos arr1[], int n)
  {
    for (int i = 0; i < n; i++)
    {
        arr1[i].costoPorArt=arr1[i].precio*arr1[i].cantidad;
    }

  }

float despliegueDatos (datos arr1[], int n)
    {
        
        int i;
        cout<<endl; 
        cout<<"INFORMACION DE ARTICULOS COMPRADOS"<<endl;
        cout<<endl;
        for(int i = 0; i < n; i++)
        {
           cout<<"Articulo "<<i+1<<endl;
           cout<<"Nombre de articulo: " << arr1[i].nombreArticul<<endl;
           cout<<"Precio unitario del articulo: " <<arr1[i].precio<<endl;
           cout<<"Cantidad de articulos: " <<arr1[i].cantidad<<endl;
           cout<<"Costo por articulo: "<<arr1[i].costoPorArt<<endl;
           cout<<endl;

        }

    }


float costoTotal(datos arr1[], int n)
{
    float costoFinal;
    costoFinal = 0;

    for (int i = 0; i < n; i++)
    {
        costoFinal+=arr1[i].costoPorArt;
    }

    cout<<"COSTO TOTAL DE LA COMPRA"<<endl;
    if (costoFinal<1)
    cout<<costoFinal<<" centavos."<<endl;
    else if (costoFinal>1)
    cout<<costoFinal<<" dolares."<<endl;
    else if (costoFinal=1)
    cout<<costoFinal<<" dolar."<<endl;

}

int main (void)
{
    int n;
    string cad;

    cout<<"SISTEMA DE FACTURACION"<<endl;
    cout<<"Ingrese la cantidad de articulos comprados: "<<endl;
    cin>>n;
    
    cin.ignore(100,'\n');
   
   lecturaDatos(n,cad);

   return 0;

}

