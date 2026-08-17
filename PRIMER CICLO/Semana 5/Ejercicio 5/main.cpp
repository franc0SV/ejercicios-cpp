#include <iostream>
using namespace std;

/* Determinar si un año es bisiesto. Usar expresiones booleanas. */

int main() {
	//variables
    int a;
    //entrada
    cout << "Ingrese un año: ";
    cin >> a;
    //proceso y salida
    bool esBisiesto = ( (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0) );

    if (esBisiesto)
        cout << "El año es bisiesto" << endl;
    else
        cout << "El año NO es bisiesto" << endl;

    return 0;
}
