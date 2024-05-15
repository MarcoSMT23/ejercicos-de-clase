#include <iostream>
using namespace std;

int main(){

float angulo1, angulo2, suma, res;
cout<<" calcularemos el angulo faltante del triangulo \n";
cout <<"Ingrese el primer angulo: \n";
cin >> angulo1;
cout <<"Ingrese el segundo angulo: \n";
cin >> angulo2;
if ( angulo1 < 0 || angulo2 < 0)
    {
     cout <<" uno de los valores ingresados no es valido";
    }
else
    {
    suma = angulo1 + angulo2;
    res= 180 - suma;
    cout <<"el angulo faltante es de:"<< res;
    }
    return 0;
}

