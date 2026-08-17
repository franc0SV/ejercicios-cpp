#include <iostream>

using namespace std;

/* Si la ecuación: ax + b = 0, desarrollar un programa que resuelva la ecuación siempre y cuando "a" sea diferente de cero */

int main() {
	//variable
	double a, x, b;
	//entrada
	cout<<"Ingrese valor de a: "; //diferente de 0
	cin>>a;
	cout<<"Ingrese valor de b: ";
	cin>>b; 
	//proceso y salida
	if (a != 0){
		x = -b / a;
		cout<<"El resultado de la ecuacion es: "<<x;
	}else{
		cout<<"Error, a no puede ser 0";
	}
	return 0;
}
