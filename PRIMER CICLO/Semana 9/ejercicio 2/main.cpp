#include <iostream>
#include <cstdlib> // para rand() y srand()
#include <ctime>   // para time()

using namespace std;
/* Escribe un programa que genere y muestre 10 números aleatorios entre 1 y 100. */

int main() {
    srand(time(0));
    //variables
    int contador = 1;
    //proceso y salida
    while (contador <= 10) {
        int numeroAleatorio = 1 + (rand() % 100);
        cout << "Numero " << contador << ": " << numeroAleatorio << endl;
        contador++;
    }

    return 0;
}
