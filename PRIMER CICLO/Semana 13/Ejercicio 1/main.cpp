#include <iostream>
#include <string>

using namespace std;
/* Control de préstamos en una biblioteca */

int main() {
	string usuarios [5];
	string tipos_de_libros [4] = {"novela", "historia", "ciencia", "arte"};
	int prestamos[5][4];
	//guardar los nombres
	for (int i = 0; i<5; i++){
	     cout<<"Ingresa el nombre del usuario " <<i+1<< ": ";
	     cin>>usuarios[i];
	 }
	 
	 //registrar los prestamos
	 cout << endl;
	 cout<<"--Registro de prestamos--"<<endl;
	 for (int i = 0; i<5; i++){
	 	cout<<endl;
	 	cout<<"Para "<<usuarios[i]<< ": "<<endl;
	 	for(int j = 0; j<4; j++){
	 		cout<<"Cantidad de libros de "<<tipos_de_libros[j]<<": ";
	 		cin>>prestamos[i][j];
		 }
	 }	 
	 int total_libros[4] = {0, 0, 0, 0}; 
	int max_user = -1, max_tipo = -1;
	string user_ganador, tipo_ganador;

	cout << "\n-- Total de libros prestados por persona --" << endl;
	for (int i = 0; i < 5; i++) {
		int suma_usuario = 0;
		for (int j = 0; j < 4; j++) {
			suma_usuario += prestamos[i][j];    
			total_libros[j] += prestamos[i][j]; 
		}
		cout << usuarios[i] << " se llevo: " << suma_usuario << " libros." << endl;
		// Guardar el mayor usuario
		if (suma_usuario > max_user) {
			max_user = suma_usuario;
			user_ganador = usuarios[i];
		}
	}

	cout << "\n-- Total de prestamos por tipo de libro --" << endl;
	for (int j = 0; j < 4; j++) {
		cout << tipos_de_libros[j] << ": " << total_libros[j] << " prestamos." << endl;
		// Guardar el libro más pedido
		if (total_libros[j] > max_tipo) {
			max_tipo = total_libros[j];
			tipo_ganador = tipos_de_libros[j];
		}
	}
	// reporte
	cout<<endl;
	cout<<"La persona que mas libros presto fue: "<< user_ganador << " (" << max_user << " libros)." << endl;
	cout<<"El tipo de libro mas solicitado fue: " << tipo_ganador << " (" << max_tipo << " solicitudes)." << endl;
	return 0;
}
