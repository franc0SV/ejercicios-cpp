#include <iostream>
#include <cmath>
using namespace std;

/* Calcular el capital final en una cuenta de ahorros, considerando un depósito inicial y un 
interés compuesto anual. */

int main() {
	//variables
	int anos;	
	double deposito_inicial, interes_anual, capital_final;
	//entrada
	cout<<"Ingresar deposito inicial: ";
	cin>>deposito_inicial;
	cout<<"Ingresa interes anual: ";  // en porcentaje (5% = 0.05)
	cin>>interes_anual;
	cout<<"Ingresa años: ";
	cin>>anos;
	//proceso
	capital_final = deposito_inicial * pow(1 + interes_anual, anos);
	//salida
	cout<<"El capital final es: "<<capital_final<<endl;
	return 0;
}
