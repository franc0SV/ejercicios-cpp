#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	//variables
    int minutos, obs;
    int punt_puntualidad = 0, punt_rendimiento = 0, punt_total;
    double tarifa , bonificacion;
    //entrada
    cout << "Ingrese minutos de tardanza (entero >= 0): ";
    cin >> minutos;
    if (minutos < 0) { cout << "Minutos invalidos" << endl; return 0; }
    cout << "Ingrese cantidad de observaciones (entero >= 0): ";
    cin >> obs;
    if (obs < 0) { cout << "Observaciones invalidas" << endl; return 0; }
    //proceso
	//Puntaje por puntualidad 
    if (minutos == 0) punt_puntualidad = 10;
    else if (minutos >= 1 && minutos <= 2) punt_puntualidad = 8;
    else if (minutos >= 3 && minutos <= 5) punt_puntualidad = 6;
    else if (minutos >= 6 && minutos <= 9) punt_puntualidad = 4;
    else punt_puntualidad = 0;
    // Puntaje por rendimiento
    if (obs == 0) punt_rendimiento = 10;
    else if (obs == 1) punt_rendimiento = 8;
    else if (obs == 2) punt_rendimiento = 5;
    else if (obs == 3) punt_rendimiento = 1;
    else punt_rendimiento = 0;
    // Puntaje total
    punt_total = punt_puntualidad + punt_rendimiento;
    // Tarifa por punto según puntaje total
    if (punt_total < 11) tarifa = 2.5;
    else if (punt_total >= 11 && punt_total <= 13) tarifa = 5.0;
    else if (punt_total >= 14 && punt_total <= 16) tarifa = 7.5;
    else if (punt_total >= 17 && punt_total <= 19) tarifa = 10.0;
    else if (punt_total == 20) tarifa = 12.5;
    bonificacion = punt_total * tarifa;
    // salida
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Puntaje puntualidad: " << punt_puntualidad << endl;
    cout << "Puntaje rendimiento: " << punt_rendimiento << endl;
    cout << "Puntaje total: " << punt_total << endl;
    cout << "Tarifa por punto: S/. " << tarifa << endl;
    cout << "Bonificacion anual: S/. " << bonificacion << endl;
    return 0;
}
