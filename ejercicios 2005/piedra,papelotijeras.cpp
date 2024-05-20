#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a, b;
    b = 1+ rand()%3;
    cout<<"1)Piedra" <<"\n";
    cout<<"2)Papel" <<"\n";
    cout<<"1)Tijera" <<"\n";
    cin >>a;

    if(a==b)
    {
        cout <<"Es un empate!";
    }
    else if((a == 1 && b == 3)|| ( a == 2 && b == 1)|| ( a == 3 && b == 2))
    {
        cout <<"Has ganado, no estaras usando hacks?!";
    }
    else
    {
        cout <<"Perdiste!";
    }
    return 0;
}