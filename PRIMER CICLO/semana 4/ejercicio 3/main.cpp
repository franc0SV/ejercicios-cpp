#include <iostream>

using namespace std;

int main() {
    //variables
    double pc1, pc2, pc3, promedio_final;
    //entrada
    cout << "Ingrese la nota de la PC1: ";
    cin >> pc1;
    cout << "Ingrese la nota de la PC2: ";
    cin >> pc2;
    cout << "Ingrese la nota de la PC3: ";
    cin >> pc3;
    //proceso
    if (pc3 >= 10) {
        pc3 = pc3 + 2;
    }if (pc3 > 20) {
        pc3 = 20; 
    }promedio_final = (pc1 + pc2 + pc3) / 3.0;
    //salida
    cout<< "\n--- Resultados ---" <<endl;
    cout<< "Nota final de la PC3 : " <<pc3<<endl;
    cout<< "Promedio final       : " <<promedio_final<< endl;

    return 0;
}
