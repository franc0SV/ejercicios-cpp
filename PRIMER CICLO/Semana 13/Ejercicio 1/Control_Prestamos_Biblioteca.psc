Algoritmo Control_Prestamos_Biblioteca
	// Definir tipos de datos para que no de error en modo estricto
	Definir usuarios, tipos_de_libros, user_ganador, tipo_ganador Como Cadena
	Definir prestamos, total_libros, i, j, max_user, max_tipo, suma_usuario Como Entero
	// Crear las dimensiones (Arreglos y Matriz)
	Dimensionar usuarios(5)
	Dimensionar tipos_de_libros(4)
	Dimensionar prestamos(5,4)
	Dimensionar total_libros(4)
	// Asignar los nombres de los libros (Índices del 1 al 4)
	tipos_de_libros[1] <- 'novela'
	tipos_de_libros[2] <- 'historia'
	tipos_de_libros[3] <- 'ciencia'
	tipos_de_libros[4] <- 'arte'
	// Limpiar el contador de libros
	Para j<-1 Hasta 4 Hacer
		total_libros[j] <- 0
	FinPara
	max_user <- -1
	max_tipo <- -1
	// 1. Pedir los nombres de los usuarios
	Para i<-1 Hasta 5 Hacer
		Escribir 'Ingresa el nombre del usuario ', i, ': '
		Leer usuarios[i]
	FinPara
	Escribir ''
	Escribir '--Registro de prestamos--'
	// 2. Registrar préstamos y calcular en simultáneo
	Para i<-1 Hasta 5 Hacer
		Escribir ''
		Escribir 'Para ', usuarios[i], ': '
		suma_usuario <- 0
		Para j<-1 Hasta 4 Hacer
			Escribir 'Cantidad de libros de ', tipos_de_libros[j], ': '
			Leer prestamos[i,j]
			suma_usuario <- suma_usuario+prestamos[i,j]
			total_libros[j] <- total_libros[j]+prestamos[i,j]
		FinPara
		Escribir usuarios[i], ' se llevo: ', suma_usuario, ' libros.'
		// Buscar el usuario que más prestó
		Si suma_usuario>max_user Entonces
			max_user <- suma_usuario
			user_ganador <- usuarios[i]
		FinSi
	FinPara
	Escribir ''
	Escribir '-- Total de prestamos por tipo de libro --'
	// 3. Mostrar totales por libro y buscar el más solicitado
	Para j<-1 Hasta 4 Hacer
		Escribir tipos_de_libros[j], ': ', total_libros[j], ' prestamos.'
		Si total_libros[j]>max_tipo Entonces
			max_tipo <- total_libros[j]
			tipo_ganador <- tipos_de_libros[j]
		FinSi
	FinPara
	// 4. Reporte final
	Escribir ''
	Escribir 'La persona que mas libros presto fue: ', user_ganador, ' (', max_user, ' libros).'
	Escribir 'El tipo de libro mas solicitado fue: ', tipo_ganador, ' (', max_tipo, ' solicitudes).'
FinAlgoritmo
