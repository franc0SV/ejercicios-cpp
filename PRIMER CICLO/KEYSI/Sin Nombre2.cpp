#include <iostream>
using namespace std;
int main() {
    int cantidad, numero;
    int suma = 0, mayor = 0;

    cout << "Cantidad de Notas: ";
    cin >> cantidad;

    for(int i = 0; i < cantidad; i++) {
        
        do {
            cout << "Ingrese Nota " << i + 1<<": ";
            cin >> numero;
        } while(numero < 0 || numero > 50);
        
        suma += numero;
        if(numero > mayor) mayor = numero;
 
        int original = numero;
        int invertido = 0;
        int temp = numero;
        
        while(temp > 0) {
            invertido = (invertido * 10) + (temp % 10);
            temp /= 10;
        }

        if(original == invertido)
            cout << "Es capicua" << endl;
        else
            cout << "No es capicua" << endl;
    }
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << (float)suma / cantidad << endl;
    cout << "Mayor numero: " << mayor << endl;

    return 0;
}
