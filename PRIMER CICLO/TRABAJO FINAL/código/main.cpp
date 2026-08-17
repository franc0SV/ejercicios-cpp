#include <iostream>
#include <string>
using namespace std;

const int MAX_PRODUCTOS = 50;

struct Producto {
    string nombre;
    float precio;
    int stock;
};

void registrarProducto(Producto productos[], int &totalProductos) {
    if (totalProductos >= MAX_PRODUCTOS) {
        cout << "No se pueden registrar mas productos. Capacidad maxima alcanzada.\n";
        return;
    }
    cout << "\n--- Registro de producto ---\n";
    cout << "Nombre del producto: ";
    cin.ignore();
    getline(cin, productos[totalProductos].nombre);
    cout << "Precio unitario (S/): ";
    cin >> productos[totalProductos].precio;
    cout << "Stock inicial: ";
    cin >> productos[totalProductos].stock;
    totalProductos++;
    cout << "Producto registrado correctamente.\n";
}

void mostrarProductos(Producto productos[], int totalProductos) {
    cout << "\n--- Listado de productos ---\n";
    if (totalProductos == 0) {
        cout << "No hay productos registrados.\n";
        return;
    }
    for (int i = 0; i < totalProductos; i++) {
        cout << i + 1 << ". " << productos[i].nombre
             << " | Precio: S/ " << productos[i].precio
             << " | Stock: " << productos[i].stock << "\n";
    }
}

void procesarVenta(Producto productos[], int totalProductos, float &totalIngresos) {
    if (totalProductos == 0) {
        cout << "No hay productos registrados para vender.\n";
        return;
    }
    mostrarProductos(productos, totalProductos);
    cout << "\nSeleccione el numero del producto a vender: ";
    int seleccion;
    cin >> seleccion;

    if (seleccion < 1 || seleccion > totalProductos) {
        cout << "Producto no valido.\n";
        return;
    }

    int indice = seleccion - 1;
    cout << "Cantidad a vender: ";
    int cantidad;
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor a cero.\n";
        return;
    }

    if (cantidad > productos[indice].stock) {
        cout << "Stock insuficiente. Stock disponible: " << productos[indice].stock << "\n";
        return;
    }

    productos[indice].stock -= cantidad;
    float subtotal = cantidad * productos[indice].precio;
    totalIngresos += subtotal;

    cout << "Venta realizada: " << cantidad << " x " << productos[indice].nombre
         << " = S/ " << subtotal << "\n";
    cout << "Stock actualizado: " << productos[indice].stock << "\n";
}

void generarReporte(float totalIngresos) {
    cout << "\n--- Reporte de cierre de caja ---\n";
    cout << "Total de ingresos del dia: S/ " << totalIngresos << "\n";
}

int main() {
    Producto productos[MAX_PRODUCTOS];
    int totalProductos = 0;
    float totalIngresos = 0.0;
    int opcion;

    do {
        cout << "\n========= BODEGA PEPE - SISTEMA DE GESTION =========\n";
        cout << "1. Registrar producto\n";
        cout << "2. Ver productos\n";
        cout << "3. Procesar venta\n";
        cout << "4. Generar reporte de ingresos\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarProducto(productos, totalProductos);
                break;
            case 2:
                mostrarProductos(productos, totalProductos);
                break;
            case 3:
                procesarVenta(productos, totalProductos, totalIngresos);
                break;
            case 4:
                generarReporte(totalIngresos);
                break;
            case 5:
                cout << "Cerrando el sistema. Hasta pronto.\n";
                break;
            default:
                cout << "Opcion no valida. Intente nuevamente.\n";
        }
    } while (opcion != 5);

    return 0;
}
