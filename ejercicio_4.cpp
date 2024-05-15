#include <iostream>
using namespace std;

int main()
{
    int corto1, corto2, parcial1, parcial2, laboratorio, proyecto, promedio;
    string nombre;
    cout <<"ingrese su nombre \n";
    cin >> nombre;
    cout <<"ingrese la nota obtenida en el corto 1 \n";
    cin >> corto1;
    cout <<"ingrese la nota obtenida en el corto 2 \n";
    cin >> corto2;
    cout <<"ingrese la nota obtenida en el parcial 1 \n";
    cin >> parcial1;
    cout <<"ingrese la nota obtenida en el parcial 2 \n";
    cin >> parcial2;
    cout <<"ingrese la nota obtenida en el laboratorio \n";
    cin >> laboratorio;
    cout <<"ingrese la nota obtenida en el proyecto \n";
    cin >> proyecto;

    promedio = (corto1 * 0.1)+(corto2*0.1)+(parcial1*0.2)+(parcial2*0.2)+(laboratorio*0.2)+(proyecto*0.25);

    if( promedio < 6)
    {
        cout <<" reprobo la materia, ha considerado en cambiarse de carrera";
    }
    else
    {
        cout <<" usted aprobo la materia \n";
    }
    return 0;
}

