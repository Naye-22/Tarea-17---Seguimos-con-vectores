/*
Autor: Nayeli Cruz
Fecha: 10/ 7 / 2024
Orden: 1) Programa que ordena un vector de cadenas de caracteres. (realizado en clases).
*/
#include<iostream>
 
using namespace std;
 
//Ordena el vector de string usando el algortimo de ordenación secuencial
void OrdenSecuencial(string x[], int total)
{
  for(int k=0; k < total; k++)
  {
    for(int j=k+1; j < total; j++)
    {
      if(x[k] > x[j])
      {
        //intercambiar los valores
        string aux = x[k];
        x[k] = x[j];
        x[j] = aux;
      }
    }
  }
}
 
//Imprime los elementos del vector
void ImprimeVector(string x[], int total)
{
  for(int k=0; k <total; k++)
  {
    cout<<endl<<x[k];
  }
}
 
int main()
{
    const int max = 10;
string nombres[]={ "Zambrano Juan", "Arévalo Ana", "Ponce Pedro",
"Bautista Martha", "De la Cruz Nancy", "Rivera Carlos", "Plata María",
"Pila Carlos", "Oneto Luis", "Acevedo Luisa"};
cout<<endl<<"Lista original de los estudiantes: ";
ImprimeVector(nombres, max);

cout<<endl<<"lista ordenada de los estudiantes";
OrdenSecuencial(nombres,max);
ImprimeVector(nombres, max);

  return 0;
}