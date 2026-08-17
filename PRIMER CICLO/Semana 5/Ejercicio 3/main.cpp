#include <iostream>
using namespace std;

/* Se desea obtener el salario neto de un empleado cuyo trabajo se paga */

int main() {
	//variables
    double horas, tarifa;
    double sueldo_bruto, sueldo_neto, impuestos = 0;
	//entrada
    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;
    //proceso
    // Calcular sueldo bruto
    if (horas <= 35) {
        sueldo_bruto = horas * tarifa;
    } else {
        sueldo_bruto = (35 * tarifa) + ((horas - 35) * tarifa * 1.5);
    }
    // Calcular impuestos
    if (sueldo_bruto > 2000) {
        if (sueldo_bruto <= 3000) {
            impuestos = (sueldo_bruto - 2000) * 0.20;
        } else {
            impuestos = (1000 * 0.20) + ((sueldo_bruto - 3000) * 0.30);
        }
    }

    sueldo_neto = sueldo_bruto - impuestos;
    //salida
    cout << "El sueldo neto es: " << sueldo_neto << endl;

    return 0;
}
