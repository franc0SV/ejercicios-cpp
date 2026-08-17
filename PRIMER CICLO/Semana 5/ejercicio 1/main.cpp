#include <iostream>
#include <string>

using namespace std;
/* Determinar si un número entero es par o impar. */
int main() {
	//variable
	int num;
	string mensaje;
	//entrada
	cout<<"Ingrese el numero: ";
	cin>>num;
	//proceso
	if (num%2 == 0){
		mensaje = "El numero es par";
	}else{
		mensaje = "El numero es impar";
	}
	//salida
	cout<<mensaje<<endl;
	return 0;
}
