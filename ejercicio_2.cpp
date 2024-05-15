#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout <<"Ingrese su edad \n";
    cin >> edad;
    
    if(edad <18)
    {
        cout <<"Usted es menor de edad";
    }
    else if( edad >= 18)
    {
        cout<<"usted es mayor de edad";
    }
        
    return 0;
}
