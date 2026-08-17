#include <iostream>
#include <cmath>
using namespace std;

/* Determina si el número tiene parte fraccinaria, usar la función trunc () */

int main() {
	//variable
	double num;
	//entrada
	cout<<"Ingrese un numero: ";
	cin>>num;
	//proceso
	if (num == trunc(num)){
		cout<<"El numero es un entero";
	}else{
		cout<<"El numero tiene parte fraccionaria";
	}
	return 0;
}

