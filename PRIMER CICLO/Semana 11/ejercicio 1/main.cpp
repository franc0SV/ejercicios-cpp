#include <iostream>

using namespace std;
/*  Implemente un programa que invierta el orden de los elementos de un arreglo. */
int main() {
	// entrdda
	int arreglo[] = {10, 20, 30, 40, 50};
    //proceso
	 cout << "Arreglo original: ";
    
    for (int i = 0; i < 5; i++) {
        cout<<arreglo[i] << " ";
    }
    cout<<endl;

    //Invertir
    for (int i = 0; i < 5 / 2; i++) {
        int temp = arreglo[i];
        arreglo[i] = arreglo[5 - 1 - i];
        arreglo[5 - 1 - i] = temp;
    }

    // salida
    cout<<"Arreglo invertido: ";
    for (int i = 0; i < 5; i++) {
        cout<<arreglo[i] << " ";
    }
    cout<<endl;

    return 0;
}
