#include <iostream>

using namespace std;
/* Escribe un programa que sume los primeros N números enteros (1 + 2 + ... + N). */

int main() {
	//variable
	int n, suma = 0;
	//entrada
	cout<<"Ingrese hasta que numero desea sumar: "; cin>> n;
	//proceso
	for (int i = 1; i <= n; i++){
		suma = suma + i;
	}
	//salida
	cout<<"La suma total es: "<<suma<<endl;
	return 0;
}
