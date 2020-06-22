#include <iostream>

using namespace std;

int main()
{
    int i, n, rn, nums[10],contador;
    contador=0;

    cout<<"REPETICION DE UN ENTERO EN UN ARREGLO"<<endl;
    cout<<"Digite 10 numeros enteros: "<<endl;
    
    for(i = 0; i < 10; i++)
    {     
    cin >> nums[i];
    }

    cout<<"Digite el numero que quiere verificar: "<<endl;
    cin >> rn;

    for (i = 0; i < 10; i++)
    {
        if (rn==nums[i])
        {
            contador++;
        }
    }

    cout<<"El numero "<<rn<<" se repite "<<contador<<" veces"<<endl;

}
