#include <iostream>
#include <cmath>

using namespace std;

/*Programe una calculadora de las siguientes operaciones entre 2 números: suma, resta, 
multiplicación, división, residuo, potencia.*/

int main() {
	//variables
	double a, b, resultado;
	char operacion;
	//entrada	
	cout<<"Ingrese primer valor: "; cin>>a;
	cout<<"Ingrese segundo valor: "; cin>>b;
	cout<<"Operacion (+ - * / % ^): "; cin>>operacion;
	//proceso
	if (operacion == '+' ) resultado = a + b;
	else if (operacion == '-' ) resultado = a - b;
	else if (operacion == '*' ) resultado = a * b;
	else if (operacion == '/' ) {
	if (b == 0) { cout<<"Error, b no puede ser igual a 0"; return 0; }
	resultado = a / b;
	}
	else if (operacion == '%') { 
		if (b == 0) { cout<<"Error, b no puede ser igual a 0"; return 0; }
		resultado = fmod(a, b); //residuo para double
	}
	else if (operacion == '^') {
		resultado = pow(a, b); //potencia para double 
	} 
	else { 
	cout<<"Operacion no valida"; 
	}
	cout <<"El resultado de la operacion es: "<<resultado<<endl;
	return 0;
}
