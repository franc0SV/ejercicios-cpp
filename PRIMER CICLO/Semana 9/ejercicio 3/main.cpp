#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

using namespace std;

int main() {
    srand(time(0));
    //variables
    int contador = 1, pares = 0, impares = 0;       
    //entrada
    cout << "Generando 20 numeros aleatorios entre 1 y 100:" << endl;
    cout << "-----------------------------------------------" << endl;
    //proceso
    while (contador <= 20) {
        int numeroAleatorio = 1 + (rand() % 100);
        cout << "Numero " << contador << ": " << numeroAleatorio;
        if (numeroAleatorio % 2 == 0) {
            cout << " -> [PAR]" << endl;
            pares++;
        } else {
            cout << " -> [IMPAR]" << endl;
            impares++; 
        }
        contador++;
    }
    //salida
    cout << "-----------------------------------------------" << endl;
    cout << "Total de numeros pares: " << pares << endl;
    cout << "Total de numeros impares: " << impares;

    return 0;
}
