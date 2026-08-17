#include <iostream>

using namespace std;

/* Determinar el pago total por un servicio, considerando un costo base y un impuesto 
adicional del 12% */

int main(){
	double costo_base, impuesto, pago_total;
	//entrada
	cout<<"Ingrese el costo base: ";
	cin>>costo_base;
	//proceso
	impuesto = costo_base * 0.12;
	pago_total = impuesto + costo_base ;//esto del 12% de descuento adicional 
	//salida
	cout<<"El impuesto es: "<<impuesto<<endl;
	cout<<"El pago total del servicio es: " <<pago_total<<endl;
	
	return 0;
}
