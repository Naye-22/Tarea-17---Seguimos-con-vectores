/*
Autor: Nayeli Cruz
Fecha: 10/ 7 / 2024
Orden:3) Programa que transforma un número entero en su equivalente en letras - primera parte (realizado 
en clases)
*/
#include<iostream>
using namespace std;
const string unidades[]={"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve",
"diez", "once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
const string decenas [] = {"","diez","veinte","teinta","cuarente","cincuenta","secente","setenta","ochenta","noventa"};
//devuelve la unidades del array de string
string GetUnidades(int num)
{
return unidades[num];
}
int main(){
    int num = 8;
string resultado = GetUnidades(num);
cout<<endl<<num <<" en letras es: "<<resultado;

return 0;
}
