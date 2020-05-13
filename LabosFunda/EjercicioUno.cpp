#include <iostream>
using namespace std;

int numero1;
int numero2;
int numero3;
int numero4 = 3;

int main (void)
{

cout << "Ingrese tres numeros enteros" << endl;
cout << endl;
cin >> numero1 >> numero2 >> numero3;

int suma = numero1 + numero2 + numero3;
int div = suma/numero4;

cout << endl << "El promedio es:" << div;

return 0;

}
