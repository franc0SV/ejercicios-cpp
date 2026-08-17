#include <iostream>
using namespace std;
/* El salario final de un trabajador, teniendo en cuenta horas trabajadas, pago por hora y una 
bonificación en porcentaje. */

int main(){
	//variables 
	double horas, pago_por_hora, bonificacion, salario_base, salario_final;
	//entrada
	cout<<"Ingrese horas trabajadas: ";
	cin>>horas;
	cout<<"Ingrese pago por hora: ";
	cin>>pago_por_hora;
	cout<<"Ingrese la bonificacion en %: "; //ejm: ponga 10
	cin>>bonificacion;
	//proceso
	salario_base= horas * pago_por_hora;
	salario_final = salario_base * (1 + bonificacion/100);
	//salida
	cout<<"El salario final es de: "<<salario_final<<endl;
	return 0;
}
