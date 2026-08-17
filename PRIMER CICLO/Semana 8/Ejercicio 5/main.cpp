#include <iostream>

using namespace std;
/* Escribe un programa que imprima N líneas de asteriscos. */

int main() {
	//variables
	int n;
	//entrada
	cout<<"Escriba el numero de lineas que desea: "; cin>>n;
	//proceso
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++) {
			cout<<"*";
		}
		cout<<endl;
	} 
	return 0;
}
