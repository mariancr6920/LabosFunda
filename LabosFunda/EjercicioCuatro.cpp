#include <iostream> 

using namespace std;

string nombreproducto; 
float precio;
float cantidad;

int main (void)
{
    cout << "Ingrese el nombre del producto" << endl;
    cin >> nombreproducto;
    cout << "Ingrese el precio del producto" << endl;
    cin >> precio;
    cout << "Ingrese la cantidad comprada" << endl;
    cin >> cantidad;

    float total = precio * cantidad;

    cout << "Su total es:" << total;
    
    return 0;
} 


