#include <iostream>
using namespace std;

int main(){

    int numero;
    int factorial = 1;
    cout <<"ingrese el numero entero\n";
    cin >> numero;

    if(numero <0)
    {
        cout <<"El factorial de un numero negativo no existe\n";
    }
    else
    {
        cout <<"El factorial del numero: "<<numero<<" es:";
        while (numero >0)
        {
            factorial = factorial * numero;
            numero --;
        }
        cout<<factorial;
    }
    return 0; 
}