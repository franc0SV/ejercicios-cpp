Algoritmo BodegaPepe
    Definir nombre, nombreProd Como Cadena
    Definir precio, totalIngresos, subtotal, precioProd Como Real
    Definir stock, cantidad, opcion, seleccion, totalProductos Como Entero
    
    Dimension nombreProd(50)
    Dimension precioProd(50)
    Dimension stockProd(50)
    
    totalProductos <- 0
    totalIngresos <- 0
    
    Repetir
        Escribir ""
        Escribir "========= BODEGA PEPE - SISTEMA DE GESTION ========="
        Escribir "1. Registrar producto"
        Escribir "2. Ver productos"
        Escribir "3. Procesar venta"
        Escribir "4. Generar reporte de ingresos"
        Escribir "5. Salir"
        Escribir "Seleccione una opcion: "
        Leer opcion
        
        Segun opcion Hacer
            1:
                registrarProducto(nombreProd, precioProd, stockProd, totalProductos)
            2:
                mostrarProductos(nombreProd, precioProd, stockProd, totalProductos)
            3:
                procesarVenta(nombreProd, precioProd, stockProd, totalProductos, totalIngresos)
            4:
                generarReporte(totalIngresos)
            5:
                Escribir "Cerrando el sistema. Hasta pronto."
            De Otro Modo:
                Escribir "Opcion no valida. Intente nuevamente."
        FinSegun
        
    Hasta Que opcion = 5
FinAlgoritmo

Funcion registrarProducto(nombreProd Por Referencia, precioProd Por Referencia, stockProd Por Referencia, totalProductos Por Referencia)
    Si totalProductos < 50 Entonces
        Escribir "Nombre del producto:"
        Leer nombreProd(totalProductos)
        Escribir "Precio unitario:"
        Leer precioProd(totalProductos)
        Escribir "Stock inicial:"
        Leer stockProd(totalProductos)
        totalProductos <- totalProductos + 1
        Escribir "Producto registrado correctamente."
    Sino
        Escribir "Capacidad maxima alcanzada."
    FinSi
FinFuncion

Funcion mostrarProductos(nombreProd Por Referencia, precioProd Por Referencia, stockProd Por Referencia, totalProductos)
    Definir i Como Entero
    Escribir ""
    Escribir "--- Listado de productos ---"
    Si totalProductos = 0 Entonces
        Escribir "No hay productos registrados."
    Sino
        Para i <- 0 Hasta totalProductos - 1 Hacer
            Escribir (i + 1), ". ", nombreProd(i), " | Precio: S/ ", precioProd(i), " | Stock: ", stockProd(i)
        FinPara
    FinSi
FinFuncion

Funcion procesarVenta(nombreProd Por Referencia, precioProd Por Referencia, stockProd Por Referencia, totalProductos, totalIngresos Por Referencia)
    Definir seleccion, cantidad Como Entero
    Definir subtotal Como Real
    Si totalProductos = 0 Entonces
        Escribir "No hay productos registrados para vender."
    Sino
        mostrarProductos(nombreProd, precioProd, stockProd, totalProductos)
        Escribir "Seleccione el numero del producto a vender:"
        Leer seleccion
        Si seleccion >= 1 Y seleccion <= totalProductos Entonces
            Escribir "Cantidad a vender:"
            Leer cantidad
            Si cantidad > 0 Y cantidad <= stockProd(seleccion - 1) Entonces
                stockProd(seleccion - 1) <- stockProd(seleccion - 1) - cantidad
                subtotal <- cantidad * precioProd(seleccion - 1)
                totalIngresos <- totalIngresos + subtotal
                Escribir "Venta realizada. Subtotal: S/ ", subtotal
            Sino
                Escribir "Cantidad invalida o stock insuficiente."
            FinSi
        Sino
            Escribir "Producto no valido."
        FinSi
    FinSi
FinFuncion

Funcion generarReporte(totalIngresos)
    Escribir ""
    Escribir "--- Reporte de cierre de caja ---"
    Escribir "Total de ingresos del dia: S/ ", totalIngresos
FinFuncion