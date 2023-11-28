// AUTOR: PAULA MARIA DARIAS SOSA
// FECHA: 21/02/2022
// EMAIL: alu0101390594@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

#include <iostream>
#include <cmath>

#include "rational_t.hpp"

using namespace std;

int main()
{
  rational_t a(1, 2), b(3), c; //creamos tres variables de tipo racional

  //mostramos por pantalla el valor de las variables
  cout << "a.value()= " << a.value() << endl; 
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  c.read();
  cout << "c: ";
  c.write();

  // FASE II
  //creamos dos variables tipo racional
  rational_t x(1, 3), y(2, 3);
  x.write();
  y.write();
  cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl; //comprobamos si son iguales
  cout << "x < y? " << (x.is_greater(y) ? "true" : "false") << endl; //comprobamos si la primera el mayor
  cout << "x > y? " << (x.is_less(y) ? "true" : "false") << endl; //comprobamos si la primera el menor

  // FASE III
  cout << "a + b: ";
  a.add(b).write(); //sumamos las dos variables a y b
  
  cout << "b - a: ";
  b.substract(a).write(); //restamos las dos variables a y b

  cout << "a * b: ";
  a.multiply(b).write(); //multiplicamos las dos variables a y b
  
  cout << "a / b: ";
  a.divide(b).write(); //dividimos las dos variables a y b
  
  return 0;
}