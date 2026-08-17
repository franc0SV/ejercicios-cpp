#include <iostream>

using namespace std;
/* Implemente un programa que cuente cuántas veces aparece un número específico en un arreglo*/

int main() {
	//entrada
	int arreglo [] = {10, 20, 10, 10, 50};
	int numEspecifico = 10;
	int contador = 0;
	//proceso
	for (int i=0; i<5; i++) {
		if (arreglo[i] == numEspecifico){
			contador++;
		}
	}
	//salida
	cout<<"El numero "<<numEspecifico<<" aparece "<<contador<< " veces en el arreglo."<<endl;
	return 0;
}
