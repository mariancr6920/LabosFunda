#include <iostream>
using namespace std;


void empleados()
{
    int empleados;
    int count=0;
    float horas, hextras,stotal,sreal;

    cout<<"Ingrese la cantidad de empleados: "<<endl;
    cin>>empleados; 

    int arr1[empleados];

    while (count<empleados)
    {
        //cantidad de horas normales y extras de cada empleado.
        cout<<"Ingrese la cantidad de horas que el empleado trabajo: "<<endl;
        cin>>horas;
        cout<<"Ingrese la cantidad de horas extras que el empleado trabajo: "<<endl;
        cin>>hextras;

        //calculo de salario real y total de cada empleado.

        stotal=(horas*1.75)+(hextras*2.50);

        //si el salario total es mayor que 500 dolares.
    
        if (stotal>500)
        {
            sreal=(stotal*0.04)+(stotal*0.0625)+(stotal*0.10);
            cout<<"El salario de este empleado es: "<< sreal <<" dolares."<<endl;
            cout<<"-----------------------------------------------------------------"<<endl;
        }

        //si el salario real es menor que 500 dolares. 
        else 
        {
            sreal=(stotal*0.04)+(stotal*0.0625);
            cout<<"El salario de este empleado es: "<< sreal <<" dolares."<<endl;
            cout<<"-----------------------------------------------------------------"<<endl;
        }

        arr1[empleados - 1];
        count += 1;
    }

}

int main (void)
{
  
    empleados();

 return 0;
 
}