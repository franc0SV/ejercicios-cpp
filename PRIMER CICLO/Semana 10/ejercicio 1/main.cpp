#include <iostream>
using namespace std;
/* Ejercicio 1*/

int calcularPotencia(int base, int exponente) {
	int resultadoPotencia = 1;
	
	for (int i = 0; i < exponente; i++) {
	resultadoPotencia = resultadoPotencia * base;
}
	return resultadoPotencia;
}

void imprimirPotenciaSipar (int resultadoPotencia) {
	if (resultadoPotencia % 2 == 0) {
	
	cout<<"El resultado " <<resultadoPotencia<< " es par"<<endl;
	}else {
		cout<<"El resultado no puede ser impar. "<<endl;
	}  
}
int main () {
	int base, exponente; 
	do {
		cout<<"Ingrese la base entero positivo: "; cin>>base;
		cout<<"Ingrese el exponente entero positivo: "; cin>>exponente;
		
		if (base <= 0 || exponente <= 0) {
		cout<<"Error, ambos numeros deben ser positivos."<<endl;	
		} 
	}while (base <= 0 || exponente <=0);
		int resultadoFinal = calcularPotencia(base, exponente);
		imprimirPotenciaSipar(resultadoFinal);
	return 0;
	}
