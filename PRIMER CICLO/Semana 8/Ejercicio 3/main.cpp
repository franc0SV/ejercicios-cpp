#include <iostream>

using namespace std;

/* Escribe una función que determine si un número ingresado es primo o no. */

int main() {
	//variables
	int n, divisores = 0;
	//entrada
	cout<<"Ingrese el numero: "; cin>>n;
	//proceso y salida
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			divisores = divisores + 1;
		}
	} if (divisores == 2) {
		cout<<"El numero " <<n<< " es primo. "<<endl;
	}	else {
			cout<<"El numero "<<n<< " no es primo. "<<endl;
		}
	return 0;
}
