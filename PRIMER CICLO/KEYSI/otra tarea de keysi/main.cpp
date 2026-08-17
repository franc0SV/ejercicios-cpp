#include <iostream>
#include <string>
using namespace std;

struct CuentaBancaria {
    string titular;
    string numeroCuenta;
    double saldo;

    void ingresarDatos() {
        cout<<"Titular (sin espacios): "; cin>>titular;
        cout<<"Numero de cuenta: "; cin>>numeroCuenta;
        cout<<"Saldo inicial: "; cin>>saldo;
    }void mostrarDatos() {
        cout<<endl<<"[Cuenta: "<<numeroCuenta<<" | Titular: "<<titular<<" | Saldo: $"<<saldo<<"]"<<endl<<endl;
    }void depositar() {
        double monto;
        cout<<"Monto a depositar: "; cin>>monto;
        saldo += monto;
    }void retirar() {
        double monto;
        cout<<"Monto a retirar: "; cin>>monto;
        if (monto <= saldo) {
            saldo -= monto;
        } else {
            cout<<"Error: Fondos insuficientes."<<endl;
        }
    }
};
int main() {
    CuentaBancaria cuenta;
    cuenta.saldo = 0.0; 

    cuenta.ingresarDatos();
    cuenta.mostrarDatos();
    cuenta.depositar();
    cuenta.mostrarDatos();
    cuenta.retirar();
    cuenta.mostrarDatos();

    return 0;
}
