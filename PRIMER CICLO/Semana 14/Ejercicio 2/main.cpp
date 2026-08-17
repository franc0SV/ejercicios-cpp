#include <iostream>
#include <string>

using namespace std;
/* Registro de notas, promedio y situación */
void ingresarDatos(string nombres[], float notas[][3], int n) {
    for (int i = 0; i < n; i++) {
        cout<<"Nombre: "; cin>>nombres[i];
        for (int j = 0; j < 3; j++) {
            cout<<"Nota "<<j + 1<<": "; cin>>notas[i][j];
        }
    }
}

void mostrarCondicion(string nombres[], float notas[][3], int n) {
    cout<<"------ REPORTE ------"<<endl;
    for (int i = 0; i < n; i++) {
        float prom = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
        string cond = (prom >= 11.0) ? "Aprobado" : "Desaprobado";
        cout<<nombres[i] << " Promedio: "<<prom<<" "<<cond<<endl;
    }
}

float calcularPromedioGeneral(float notas[][3], int n) {
    float sumaTotal = 0;
    for (int i = 0; i < n; i++) {
        sumaTotal += (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
    }
    return sumaTotal / n;
}

void calcularEstadisticas(float notas[][3], int n) {
    int aprob = 0, desaprob = 0;
    for (int i = 0; i < n; i++) {
        float prom = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
        if (prom >= 11.0) aprob++; else desaprob++;
    }
    cout<<"Aprobados: "<<aprob<<endl;
    cout<<"Desaprobados: "<<desaprob<<endl;
}

int main() {
    int n;
    cout<<"Ingrese cantidad de estudiantes: "; cin>>n;

    string nombres[n];
    float notas[n][3];

    ingresarDatos(nombres, notas, n);
    mostrarCondicion(nombres, notas, n);
    cout << "Promedio general: " << calcularPromedioGeneral(notas, n) << endl;
    calcularEstadisticas(notas, n);

    return 0;
}
