#include <iostream>

using namespace std;

int main() {
    int num, c1, c2, c3, c4;
    int mayor, menor;

    //entrada
    cout << "Introduce un numero natural de 4 digitos: ";
    cin >> num;
    //proceso
    if (num < 1000 || num > 9999) {
        cout << "Error: El numero debe ser de cuatro cifras." << endl;
        return 0;
    }
    
    c1 = num / 1000;           //Primer digito
    c2 = (num / 100) % 10;     //Segundo digito
    c3 = (num / 10) % 10;      //Tercer digito
    c4 = num % 10;             //Cuarto digito

    // --- Busqueda de la cifra mayor ---
    mayor = c1; 
    if (c2 > mayor) mayor = c2;
    if (c3 > mayor) mayor = c3;
    if (c4 > mayor) mayor = c4;

    // --- Busqueda de la cifra menor ---
    menor = c1;
    if (c2 < menor) menor = c2;
    if (c3 < menor) menor = c3;
    if (c4 < menor) menor = c4;
    int resultado = (mayor * 10) + menor;

    //salida
    cout << "------------------------------------" << endl;
    cout << "Digitos detectados: " << c1 << ", " << c2 << ", " << c3 << ", " << c4 << endl;
    cout << "Cifra mas alta: " << mayor << endl;
    cout << "Cifra mas baja: " << menor << endl;
    cout << "Resultado final: " << resultado;

    return 0;
}
