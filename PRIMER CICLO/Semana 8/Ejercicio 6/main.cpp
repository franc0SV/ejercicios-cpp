#include <iostream>
using namespace std;

/* Escribe un programa que calcule el producto de los números del 1 al N */

int main() {
	//variables
	double producto = 1; int n;
	//entrada
	cout<<"Ingresa facterial que desee calcular: "; cin>>n;
	//proceso
	for (int i = 1; i <= n; i++){
		 producto = producto * i;
	}
	//salida
	cout<<"El factorial de "<<n<< " es: "<<producto<<endl;
	return 0;
}
