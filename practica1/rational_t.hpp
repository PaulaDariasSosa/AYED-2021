// AUTOR: PAULA MARIA DARIAS SOSA
// FECHA: 21/02/2022
// EMAIL: alu0101390594@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

# define EPSILON 1e-6

using namespace std;

class rational_t
{
  //primero la parte publica y despues la privada
public:
  rational_t(const int = 0, const int = 1); //constructor
  ~rational_t() {} //destructor
  
  // getters
  int get_num() const;
  int get_den() const;
  
  // setters
  void set_num(const int);
  void set_den(const int);

  double value(void) const; //funcion para mostrar el valor del racional

  // FASE II
  bool is_equal(const rational_t&, const double precision = EPSILON) const; //funcion igualdad
  bool is_greater(const rational_t&, const double precision = EPSILON) const; //funcion mayor
  bool is_less(const rational_t&, const double precision = EPSILON) const; //funcion menor
  
  // FASE III
  rational_t add(const rational_t&); //funcion suma
  rational_t substract(const rational_t&); //funcion resta
  rational_t multiply(const rational_t&); //funcion multiplicacion
  rational_t divide(const rational_t&); //funcion division
  
  void write(ostream& = cout) const;
  void read(istream& = cin);
  
private:
  int num_, den_; //nombre de los atributos seguidos de "_"
};
