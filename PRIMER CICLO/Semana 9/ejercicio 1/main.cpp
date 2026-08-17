#include <iostream>
using namespace std;

/* Escribe un programa que solicite un número entero y luego utilice un bucle while para 
contar cuántos dígitos tiene ese número. */

int main() {
	//variables
	int numero, contador = 0;
	//entrada
	cout<<"Ingrese un numero entero: "; cin>>numero;
	//proceso
	if (numero == 0) {
		contador = 1;
	}else {
		while (numero != 0) {
		numero = numero / 10; contador++;
	}
	}
	//salida
	cout<<"El numero tiene "<<contador<<" digito(s)."<<endl;
	
	return 0;
}
