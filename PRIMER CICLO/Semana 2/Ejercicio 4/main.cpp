#include <iostream>
using namespace std;

/* Determinar la cantidad de pintura necesaria para cubrir una pared, dado su ancho, alto y el 
rendimiento de la pintura en metros cuadrados por litro */

int main() {
	//variables
	double ancho, alto, area, rendimiento, litros;
	//entrada
	cout<<"Ingrese ancho: ";
	cin>>ancho;
	cout<<"Ingrese alto: ";
	cin>>alto;
	cout<<"Ingrese rendimiento en (m*m/l): "; //metros al cuadrado por litro
	cin>>rendimiento;
	//proceso
	area = ancho * alto;
	litros = area / rendimiento;
	//salida
	cout<<"La cantidad de litros necesarios son: "<<litros<<endl;
	return 0;
}
