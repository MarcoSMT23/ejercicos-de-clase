#include <iostream>
using namespace std;

int main()
{
    int angulo;

    cout <<" ingrese la medida del angulo \n";
    cin >> angulo;

    if(angulo < 90)
    {
        cout <<" el aungulo es agudo";
    }
    else if( angulo > 90)
    {
        cout <<" el angulo es obtuso";
    }
    else
    {
        cout <<" el angulo es recto";
    }
    return 0;
}