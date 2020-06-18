#include <iostream>

using namespace std;

//siguiente dia.
int dias (int dd, int suma1)
{
    suma1= dd+=1;

    return suma1;

}
//siguiente mes.
int meses (int mm, int suma2)
{
    suma2= mm+=1;

    return suma2;
}
//siguiente año.
int years (int aa, int suma3)
{
    suma3= aa+=1;
    return suma3;
}

//pruebas para ver si el año ingresado es bisiesto.
bool bisiesto (int aa, int prueba1,int prueba2, int prueba3)
{
    prueba1 = aa%400;
    prueba2 = aa%4;
    prueba3 = aa%100;

    if (prueba1==0)
    {
        return true;
    }
    else if (prueba2 == 0)
    {
        return true;
    }
    else if (prueba3== 0)
    {
        return true;
    }
    else if (prueba1!=0,prueba2!=0,prueba3!=0)
    {
        return false;
    }
}

int main ()
{
    int dd, mm, aa, suma1, suma2, suma3, result1,result2,result3;
    bool prueba1, prueba2, prueba3,abis;

    cout<<"PROGRAMA PARA SUMARLE UN DIA A UNA FECHA EN ESPECIFICO"<<endl;
    cout<<"Ingresara una fecha en el formato: dd/mm/aa."<<endl;
    cout<<"Ingrese el dia:"<<endl;
    cin>>dd;
    cout<<"Ingrese el mes:"<<endl;
    cin>>mm;
    cout<<"Ingrese el a"<<char(-92)<<"o:"<<endl;
    cin>>aa;

    result1=dias (dd, suma1);
    result2=mm;
    result3=aa;

    // si los datos son validos. 

    if (dd>31,mm>12)
    {
        cout <<"Los datos ingresados no son validos."<<endl;
        return 0;
    }
    else if (dd<=30,mm>12)
    {
        cout <<"Los datos ingresados no son validos."<<endl;
        return 0;
    }
    else if (dd>31,mm<=12)
    {
        cout <<"Los datos ingresados no son validos."<<endl;
        return 0;
    }

    //si es año bisiesto:
    
    abis = bisiesto (aa, prueba1,prueba2, prueba3);

    if (abis==true) 
    {
        //si es febrero, y el dia ingresado es 28.
        if (mm==2 && dd==28)
    {
        result1= dias (dd, suma1);
        result2= mm;
        result3= aa;
    }
       // si es febrero, y el dia ingresado es 29.
    else if (mm==2 && dd==29)
    {
        result1= 1;
        result2= mm+=1;
        result3= aa;
    }

    switch(result1)
    {
        // pasar a siguiente mes.
    case 32:
    result1=01;
    result2= meses (mm,suma2);

    switch (result2)
    {
        //pasar a siguiente año
        case 13:
        result2=01;
        result3= years (aa,suma3);
        break;
    }
    break;
    // solamente se avanza un dia, se mantiene el mes y el año.
    default:
    result1;
    result2= mm;
    result3= aa;
    }
    }

    // si no es año bisiesto.

    else if(abis==false)

    {

    result1=dias (dd, suma1);
    result2=mm;
    result3=aa;

    switch(result1)
    {
        // pasar a siguiente mes.
    case 32:
    result1=01;
    result2= meses (mm,suma2);

    switch (result2)
    {
        //pasar a siguiente año
        case 13:
        result2=01;
        result3= years (aa,suma3);
        break;
    }
    break;
    // solamente se avanza un dia, se mantiene el mes y el año.
    default:
    result1;
    result2= mm;
    result3= aa;
    }

    // en año no bisiesto, si el mes ingresado es febrero y el dia es 28, se avanza al siguiente mes. 

    if (mm==2 && dd==28)
    {
        result1= 1;
        result2= meses (mm,suma2);
        result3= aa;
    }
       // si es febrero, y el dia ingresado es 29.
    else if (mm==2 && dd==29)
    {
        result1= 1;
        result2= mm+=1;
        result3= aa;
    }
    }

    //resultado final
    cout<<"La fecha mas un dia es:"<<endl;
    cout<<result1<<"/"<<result2<<"/"<<result3;

}