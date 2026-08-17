

|**\*\*Pseudocódigo:** PROBLEMA: Determinar si el numero es par o importar<br />Variables: entero num<br />           CADENA mensaje<br /><br />Inicio<br />  Leer num<br />  Escribir num<br />  Si num%2 = 0 entonces<br />  mensaje = "num es par"<br />  Sino<br />  mensaje = "num es impar"<br />  Finsi<br />  Salida<br />  Escribir mensaje<br /><br /><br />**CÓDIGO EN DEV-C++:<br />**#include <iostream><br /><br />using namespace std;<br /><br />/\* Determina si el número es par o impar \*/<br /><br />int main() {<br />	//variable<br />	int num;<br />	string mensaje;<br />	//entrada<br />	cout<<"Ingrese el numero: ";<br />	cin>>num;<br />	//proceso<br />	if (num%2 == 0){<br />		mensaje = "El numero es par";<br />	}else{<br />		mensaje = "El numero es impar";<br />	}<br />	//salida<br />	cout<<mensaje<<endl;<br />	return 0;<br />}|
|-|

|**PSEUDOCÓDIGO:** <br />Variables: a, x, b Como Real<br /><br />Inicio <br />Leer a,x,b Como Real<br />Escribir a, b<br />Si a no es 0 entonces<br />  x = -b/a<br />Escribir el resultado de la ecuación es x<br />Si no <br />Escribir error, a no puede ser 0<br />Fin Si<br /><br />**Código en Dev-C++:<br /><br />**#include <iostream><br /><br />using namespace std;<br /><br />/\* Si la ecuación: ax + b = 0, desarrollar un programa que resuelva la ecuación siempre y cuando "a" sea diferente de cero \*/<br /><br />int main() {<br />	//variable<br />	double a, x, b;<br />	//entrada<br />	cout<<"Ingrese valor de a: "; //diferente de 0<br />	cin>>a;<br />	cout<<"Ingrese valor de b: ";<br />	cin>>b; <br />	//proceso<br />	if (a != 0){<br />		x = -b / a;<br />		cout<<"El resultado de la ecuacion es: "<<x;<br />	}else{<br />		cout<<"Error, a no puede ser 0";<br />	}<br />	return 0;<br />}|
|-|

|**PSEUDOCÓDIGO: <br />Algoritmo:**  Determina si el número tiene parte fraccinaria, usar la función trunc ()<br />Variables: num real<br /><br />Inicio<br />Leer num<br />Escribir "num"<br />Si num es igual a numero truncado<br />Escribir "el numero es entero"<br />Si no<br />Escribir "el numero tiene parte fraccionaria"<br />Finsi<br /><br />**Código:** <br />#include <iostream><br />#include <cmath><br />using namespace std;<br /><br />/\* Determina si el número tiene parte fraccinaria, usar la función trunc () \*/<br /><br />int main() {<br />	//variable<br />	double num;<br />	//entrada<br />	cout<<"Ingrese un numero: ";<br />	cin>>num;<br />	//proceso<br />	if (num == trunc(num)){<br />		cout<<"El numero es un entero";<br />	}else{<br />		cout<<"El numero tiene parte fraccionaria";<br />	}<br />	return 0;<br />}<br /> |
|-|



