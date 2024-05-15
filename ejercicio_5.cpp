#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float a=0.00, b=0.00, c=0.00,r=0.00,x1=0.00, x2=0.00,res=0.00;
    cout <<" ingrese el digito a \n";
    cin >> a;
    cout <<" ingrese el digito b \n";
    cin >> b;
    cout <<" ingrese el digito c \n";
    cin >> c;

     if (a !=0 )
    {
        r = pow(b,2)-4*a*c;
        if (r >=0)
        {
            x1 = (-b+sqrt(r))/2/a;
            x2 = (-b-sqrt(r))/2/a;
            cout << "Las raices de la variables son: x1= \n" << x1 << "x2= \n" << x2 << "\n";
        }
        else
        {
            cout << "El resultado es imaginario imaginario\n";
        }
    }
    else if (b != 0)
    {
        cout << "La ecuacion es lineal\n";
        x1 = -c/b;
        cout << "La raiz es: " << x1 << "\n";
    }
    else
    {
        cout << "Los datos ingresados son invalidos";
    }
    return 0;
}