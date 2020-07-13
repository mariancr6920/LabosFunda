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

// Declarando funciones. 
float lecturaDatos (int n, string cad, datos []);
float calcularCosto (datos arr1[], int n);
float despliegueDatos (datos arr1[], int n);
float costoTotal(datos arr1[], int n);

//Usuario ingresa datos.
float lecturaDatos (int n, string cad, datos compra1[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Articulo "<< i+1 <<endl;
        cout<<"Ingrese el nombre del articulo:"<<endl;
        getline(cin,cad,'\n');
        strncpy(compra1[i].nombreArticul, cad.c_str( ), longCad);
        compra1[i].nombreArticul[longCad]='\0';
        cout<<"Ingrese el precio unitario del articulo:"<<endl;
        cin>> compra1[i].precio;
        cout<<"Ingrese la cantidad de articulos: "<<endl;
        cin>> compra1[i].cantidad;
        cin.ignore(100, '\n');
    }
}
//Calculo de costo por articulo.
float calcularCosto (datos arr1[], int n)
  {
    for (int i = 0; i < n; i++)
    {
        arr1[i].costoPorArt=arr1[i].precio*arr1[i].cantidad;
    }
  }
//Se despliegan los datos.
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
//Calculo de costo total de la compra. 
float costoTotal(datos compra[], int n)
{
    float costoFinal = 0;
    for (int i = 0; i < n; i++)
    {
        costoFinal+=compra[i].costoPorArt;
    }
    return costoFinal;
}

int main (void)
{
    int n;
    string cad;

    cout<<"SISTEMA DE FACTURACION"<<endl;
    cout<<"Ingrese la cantidad de articulos comprados: "<<endl;
    cin>>n;

    datos compra[n];

    cin.ignore(100,'\n');
   
    lecturaDatos(n, cad, compra);
    calcularCosto(compra,n);
    despliegueDatos(compra,n); 
    cout<<"El costo total es: $" <<costoTotal (compra, n);

    return 0;

}

