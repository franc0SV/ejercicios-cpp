#include <iostream>
#include <cmath>   // para sqrt()
using namespace std;

int main() {
	//variables
    double a, b, c, s, area;
    //entrada
    cout << "Ingrese lado a: ";
    cin >> a;
    cout << "Ingrese lado b: ";
    cin >> b;
    cout << "Ingrese lado c: ";
    cin >> c;
    //proceso y salida
    s = (a + b + c) / 2.0;

    if (s > a && s > b && s > c) {
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "El área del triángulo es: " << area << endl;
    } else {
        cout << "El triángulo no existe" << endl;
    }

    return 0;
}

