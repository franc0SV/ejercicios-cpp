#include <iostream>
#include <string>
#include <cctype>

using namespace std;
/* Escribe un programa que pida una cadena al usuario y cuente cuántas vocales contiene. */

int main() {
	//variables
	string cadena;
	int contador = 0;
	//entrada
	cout<<"Ingrese una palabra: "; getline (cin, cadena);
	//proceso
	for (int i = 0; i < cadena.length(); i++) {
		char letra = tolower(cadena[i]);
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			contador = contador + 1;	
		}
	}
	//salida
	cout<<"El numero de vocales en la palabra son: "<<contador<<endl;
	return 0;
}	
