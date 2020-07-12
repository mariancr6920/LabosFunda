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

float funcion2(int n, string cad);
float funcion4 (datos arr1[], int n);

int main (void)
{
    int n;
    string cad;

    cout<<"SISTEMA DE FACTURACION"<<endl;
    cout<<"Ingrese la cantidad de articulos comprados: "<<endl;
    cin>>n;
    
    cin.ignore(100,'\n');
    int arr1[n];

    funcion2(n,cad);
    funcion4 (arr1, n);

   
   return 0;

}

float funcion2 (int n, string cad)
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


}
    

   float funcion4 (datos arr1[], int n)
    {
        
        int i;
        cout<<"INFORMACION DE ARTICULOS COMPRADOS"<<endl;
        for(int i = 0; i < n; i++)
        {
           cout<<"Articulo "<<i+1<<endl;
           cout<<arr1[i].nombreArticul<<"||";
           cout<<arr1[i].precio<<"||";
           cout<<arr1[i].cantidad;

        }

    }

