#include <iostream>
#include <cmath>
using namespace std;

float a;
float b;
float c;

int main (void)

{
    cout << "Ingrese el valor de a" << endl;
    cin >> a;
    cout << "Ingrese el valor de b" << endl;
    cin >> b;
    cout << "Ingrese el valor de c" << endl;
    cin >> c;
    
    float adentroraiz = pow (b,2) - 4*(a * c);

    if (adentroraiz < 0)
    {
        cout << "Esta ecuacion no tiene solucion en los numeros reales.";

    }

    else
    {

    float primerasolucion = (-b + sqrt(adentroraiz))/(2*a);
    float  segundasolucion = (-b - sqrt(adentroraiz))/(2*a);

    cout << "La primera solucion es:" << primerasolucion << endl;
    cout << "La segunda solucion es:" << segundasolucion << endl; 

    return 0;

    }

}


