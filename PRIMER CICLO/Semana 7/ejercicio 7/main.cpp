#include <iostream>

using namespace std; 
/* Escribe un programa en C++ que calcule el MCD (Máximo Común Divisor) de dos números 
ingresados por el usuario utilizando el algoritmo de Euclides */

int main() {
	//variables
	int a, b, n1, n2, residuo;
	cout<<" Calculadora de MCD con Euclides  "<<endl;
	cout<<"Ingrese primer numero: ";
	cin>>a;
	cout<<"Ingrese segundo numero: ";
	cin>>b;
	//proceso
	n1 = a;
	n2 = b;
	while (b!=0) {
		residuo = a % b;
		a = b;
		b = residuo;
	}
	//salida
	cout<<"El MCD de " <<n1<< " y " <<n21<< " es: "<<a<<endl;
	return 0;
}
