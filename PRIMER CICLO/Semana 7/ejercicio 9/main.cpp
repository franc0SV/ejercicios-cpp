#include <iostream>
#include <stdlib.h> // Para que funcione rand()
#include <ctime> // Para que los numeros cambien siempre 

using namespace std;

/* Problema 9 */
int main() {
srand(time(0));
//variables
int hijos, i, menosde3 = 0, de3a5 = 0, masde6 = 0;
//proceso
for (i = 1; i<=30; i++) { //i++ una forma rápida (un atajo) de decir: "Súmale 1 al valor que ya tiene la i".
hijos = rand() % 7 + 1;
cout<<" Persona "<<i<<" : "<<hijos<<endl;
if (hijos < 3) {
menosde3 = menosde3 + 1;
}else if  (hijos >= 3 && hijos <=5) {
de3a5 = de3a5 + 1; 
} else {
masde6 = masde6 + 1; 
}
}
//salida
cout<<"Cantidad con menos de 3 hijos: "<<menosde3<<endl;
cout<<"Cantidad con 3 a 5 hijos: "<<de3a5<<endl;
cout<<"Cantidad con por lo menos 6 hijos: "<<masde6<<endl;
return 0;

}
