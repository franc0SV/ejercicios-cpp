#include <iostream>
#include <stdlib.h> // Para que funcione rand()
#include <ctime> // Para que los numeros cambien siempre time()

using namespace std;
/* Problema 10 */
int main() {
	srand(time(0));
	//variables
	int sueldo, i, menosde1750 = 0, entre1750y2500 = 0, masde2500 = 0;
	float sumasueldos = 0, promedio;
	//proceso
	for (i = 1; i<=100; i++) {
		sueldo = rand() % (3150-850+1) + 850;
		cout<<" empleado " <<i<< " : S/ " <<sueldo<<endl;
		sumasueldos = sumasueldos + sueldo;
		if (sueldo < 1750) {
			menosde1750++;
		} else if (sueldo>= 1750 && sueldo < 2500) {
			entre1750y2500++;
		} else {
			masde2500++;
		}
	}
	promedio = sumasueldos / 100;
	//salida
	cout << "Sueldo promedio: S/. " << promedio << endl;
    cout << "Ganan menos de 1750: " << menosde1750 << endl;
    cout << "Ganan entre 1750 y 2500: " << entre1750y2500 << endl;
    cout << "Ganan 2500 o mas: " << masde2500 << endl;
	return 0;
}
