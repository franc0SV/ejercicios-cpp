#include <iostream>
#include <string>

using namespace std; /*Problema de ajedrez - Semana 12*/
int main() {
    string tablero[8][8];
    for (int f = 0; f < 8; f++) {
        for (int c = 0; c < 8; c++) {
            tablero[f][c] = "0";
        }
    }
    int cantidadPiezas;
    cout << "Cuantas piezas deseas colocar en total?: ";
    cin >> cantidadPiezas;
    for (int i = 0; i < cantidadPiezas; i++) {
        int fila, columna;
        cout << "Registrando Pieza N*" << i + 1 <<":\n";
        cout << "Ingrese la Fila (1 al 8): "; cin >> fila;
        cout << "Ingrese la Columna (1 al 8): "; cin >> columna;
    
        int f = fila - 1;
        int c = columna - 1;
        
        char color, pieza;
        cout << " -> Color (B = Blanco, N = Negro): "; cin >> color;
        cout << " -> Pieza (a=Torre, b=Alfil, c=Rey, d=Peon, e=Caballo, f=Reina): "; cin >> pieza;
        
        string nombrePieza = "";
        if (pieza == 'a') nombrePieza = "Torre";
        if (pieza == 'b') nombrePieza = "Alfil";
        if (pieza == 'c') nombrePieza = "Rey";
        if (pieza == 'd') nombrePieza = "Peon";
        if (pieza == 'e') nombrePieza = "Caballo";
        if (pieza == 'f') nombrePieza = "Reina";
        
        string nombreColor = "";
        if (color == 'B' || color == 'b') nombreColor = "Blanco";
        if (color == 'N' || color == 'n') nombreColor = "Negro";
        
        tablero[f][c] = nombrePieza + " " + nombreColor; cout << endl;   
    }
    cout << "REPORTE DEL TABLERO:\n";
    for (int f = 0; f < 8; f++) {
        for (int c = 0; c < 8; c++) {
            if (tablero[f][c] != "0") {
                cout << "En la posicion [" << f+1 << "][" << c+1 << "] hay un: " << tablero[f][c] << endl;
            }
        }
    }
    return 0;
}
