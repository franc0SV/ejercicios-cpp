#include <iostream>
#include <string>

using namespace std;
/* Sistema de control de temperaturas */

void ingresarDatos(string ciudades[], float temperaturas[][7], int n) {
    string dias[] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo"};
    for (int i = 0; i < n; i++) {
        cout << "Ciudad " << i + 1 << ": ";
        cin >> ciudades[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            do {
                cout <<"Temperatura del "<<dias[j]<< " " <<ciudades[i]<< " (C): ";
                cin >> temperaturas[i][j];
            } while (temperaturas[i][j] < -10.0 || temperaturas[i][j] > 50.0);
        }
    }
}

void calcularPromedios(float temperaturas[][7], float promedios[], int n) {
    for (int i = 0; i < n; i++) {
        float suma = 0;
        for (int j = 0; j < 7; j++) {
            suma += temperaturas[i][j];
        }
        promedios[i] = suma / 7.0;
    }
}

void mostrarReporte(string ciudades[], float promedios[], int n) {
    cout << "\n------ REPORTE ------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Promedio semanal " << ciudades[i] << ": " <<promedios[i]<<endl;
    }
}

void determinarExtremos(string ciudades[], float promedios[], int n) {
    float maxP = promedios[0], minP = promedios[0];
    string cMayor = ciudades[0], cMenor = ciudades[0];
    
    for (int i = 1; i < n; i++) {
        if (promedios[i]>maxP) { 
		maxP = promedios[i]; cMayor = ciudades[i]; 
		} if (promedios[i]<minP) { 
		minP = promedios[i]; cMenor = ciudades[i]; 
}
    }
    cout<<"Ciudad con mayor temperatura promedio: "<<cMayor<<endl;
    cout<<"Ciudad con menor temperatura promedio: "<<cMenor<<endl;
}

int main() {
    int n;
    cout <<"Ingrese cantidad de ciudades: ";  cin >> n;

    string ciudades[n];
    float temperaturas[n][7];
    float promedios[n];

    ingresarDatos(ciudades, temperaturas, n);
    calcularPromedios(temperaturas, promedios, n);
    mostrarReporte(ciudades, promedios, n);
    determinarExtremos(ciudades, promedios, n);

    return 0;
}
