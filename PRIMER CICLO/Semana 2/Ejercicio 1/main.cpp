#include <iostream>

using namespace std;

/* Calcular el volumen de un cilindro, dada su altura y el radio de su base*/

int main() {
	//variables
	double volumen, altura, radio;
	//entrada
	cout<<"La altura es: ";
	cin>>altura;
	cout<<"El radio es: ";
	cin>>radio;
	//proceso
	volumen = 3.14 * (radio * radio) * altura;
	//salida 
	cout<<"El volumen es: "<< volumen <<endl;
	return 0;
}
