/*
Autor: Nayeli Cruz
Fecha: 10/ 7 / 2024
Orden: 5) Diseñe la función que convierte un entero en su equivalente en binario. El resultado del número 
binario se debe guardar en un vector. 
*/
#include <iostream>
#include <vector>
using namespace std;

int contar_ocurrencias(const vector<int>& vector, int buscarNum) {
    int contador = 0;
    for (int numero : vector) {
        if (numero == buscarNum) {
            contador++;
        }
    }
    return contador;
}

int main() {
    vector<int> vector = {1, 2, 3, 4, 2, 2, 5, 2, 6};
    int buscarNum = 2;
    int resultado = contar_ocurrencias(vector, buscarNum);
    cout << "El número " << buscarNum << " aparece " << resultado << " veces en el vector." << endl;
    return 0;
}
 
 
