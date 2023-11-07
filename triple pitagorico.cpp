#include <iostream>
#include <valarray>

using namespace std;

int main() {

int a, b, c, resultado = 0;

cout << "Introduce el valor de a: "; // introducir los valores de a, b y c
cin >> a; // se guardan en las variables a, b y c

cout << "Introduce el valor de b: ";
cin >> b;

cout << "Introduce el valor de c: ";
cin >> c;

resultado = pow(a, 2) + pow(b, 2) - pow(c, 2); // ecuacion para saber si es un triple pitagorico

cout << "\nEl resultado es: " << resultado << endl;

if (resultado == 0) { // si el resultado es 0, es un triple pitagorico
    cout << "Los valores introducidos son un triple pitagorico";

} else { // si el resultado es distinto de 0, no es un triple pitagorico
    cout << "Los valores introducidos no son un triple pitagorico";
}


    return 0;
}
