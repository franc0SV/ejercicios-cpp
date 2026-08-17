#include <iostream>

using namespace std;
/* Determinar la distancia recorrida por un vehículo, sabiendo su velocidad en km/h y el 
tiempo de viaje en horas. */

int main() {
	//variables
	double distancia, velocidad, tiempo;
	//entrada
	cout<<"Ingrese distancia en kilometros: ";
	cin>>distancia;
	cout<<"Ingrese velocidad en km/h: ";
	cin>>velocidad;
	cout<<"Ingrese tiempo en horas: ";
	cin>>tiempo;
	//proceso
	distancia = velocidad * tiempo,
	//salida
	cout<<"La distancia recorrida es de: "<<distancia<<endl;
	return 0;
}
