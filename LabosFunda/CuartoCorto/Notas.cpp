#include <iostream>

using namespace std;

int main ()
{
    float matriz ();
    float notas ();
    int estudiantes;
    float nota;
    cout<<"PROGRAMA PARA SACAR EL PROMEDIO DE NOTAS"<<endl;
    matriz ();

}

float matriz ()
{
    int estudiantes;
    float nota, suma, prom;
    cout<<"Ingrese la cantidad de estudiantes: "<<endl;
    cin>>estudiantes;
    int vertical[6];

    float notas[estudiantes][6];
    for (int i=1; i<=estudiantes; i++)
{
    for (int j=1; j<6; j++)
    {
        cout << endl << "Estudiante numero: " << i << ", Nota numero: " << j << endl;
        cout <<  "Ingrese la nota:";
        cin >> nota;
        notas[i][j] = nota;
    }
}
}