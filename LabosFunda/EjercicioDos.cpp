#include <iostream>
#include <cmath>
using namespace std;

float radio;
float pi = 3.1416;

int main (void)
{
    cout << "Ingrese el radio del circulo" << endl;

    cin >> radio;

    float mult= pow(radio, 2); 
    float area = mult * pi;
    float perimetro = 2 * pi * radio;


    cout << "El area del circulo es:" << area << endl; 
    cout << "El perimetro del circulo es:" << perimetro << endl;

    return 0;
}
