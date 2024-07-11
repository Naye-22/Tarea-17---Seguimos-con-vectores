/*
Autor: Nayeli Cruz
Fecha: 10/ 7 / 2024
Orden: 4) Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese 
número en el vector.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> convertir_binario(int numero) {
    vector<int> binario(16, 0);  // Vector de 16 elementos inicializado a 0
    int index = 15;  // Índice para almacenar bits desde el final del vector

    while (numero > 0) {
        binario[index] = numero % 2;
        numero = numero / 2;
        index--;
    }

    return binario;
}

int main() {
    int numero = 353;
    vector<int> binario = convertir_binario(numero);

    cout << "El número " << numero << " en binario es: ";
    for (int bit : binario) {
        cout << bit;
    }
    cout << endl;

    return 0;
}