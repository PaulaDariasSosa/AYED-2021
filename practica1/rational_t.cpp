// AUTOR: PAULA MARIA DARIAS SOSA
// FECHA: 21/02/2022
// EMAIL: alu0101390594@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1

#include "rational_t.hpp"

//constructor por parametros

rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}

//getter del numerador

int
rational_t::get_num() const
{
  return num_;
}

//getter del denominador

int
rational_t::get_den() const
{
  return den_;
}

//setter del numerador
  
void
rational_t::set_num(const int n)
{
  num_ = n;
}

//setter del denominador
  
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}

/**
 * @brief Pasa a double el valor del racional
 * @param[in] Racional: recibe un racional 
 */

double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}


// comparaciones

/**
 * @brief Comprueba si dos racionales son iguales
 * @param[in] Racional: recibe dos racional 
 */

bool
rational_t::is_equal(const rational_t& r, const double precision) const
{
  double racional1 = value();
  double racional2 = r.value();
  bool equality = false;
  double diference = racional1 - racional2;
  if (fabs(diference) < EPSILON) {
    equality = true;
  }
  return equality;
}

/**
 * @brief Comprueba si un racional es mayor a otro
 * @param[in] Racional: recibe dos racional 
 */

bool
rational_t::is_greater(const rational_t& r, const double precision) const
{
  double racional1 = value();
  double racional2 = r.value();
  bool equality = false;
  double diference = racional1 - racional2;
  if (diference > EPSILON) {
    equality = true;
  }
  return equality;
}

/**
 * @brief Comprueba si un racional es menor a otro
 * @param[in] Racional: recibe dos racional 
 */

bool
rational_t::is_less(const rational_t& r, const double precision) const
{
  double racional1 = value();
  double racional2 = r.value();
  bool equality = false;
  double diference = racional2 - racional1;
  if (diference > EPSILON) {
    equality = true;
  }
  return equality;
}


// operaciones

/**
 * @brief Suma dos racionales
 * @param[in] Racional: recibe dos racional 
 */

rational_t
rational_t::add(const rational_t& r)
{
  int numerador = get_num()*r.get_den() + r.get_num()*get_den();
  int denominador = r.get_den()*get_den();
  return rational_t (numerador, denominador);
}

/**
 * @brief Resta dos racionales
 * @param[in] Racional: recibe dos racional 
 */

rational_t
rational_t::substract(const rational_t& r)
{
  int numerador = get_num()*r.get_den() + -r.get_num()*get_den();
  int denominador = r.get_den()*get_den();
  return rational_t (numerador, denominador);
}

/**
 * @brief Multiplica dos racionales
 * @param[in] Racional: recibe dos racional 
 */

rational_t
rational_t::multiply(const rational_t& r)
{
  int numerador = get_num()*r.get_num();
  int denominador = r.get_den()*get_den();
  return rational_t (numerador, denominador);
}

/**
 * @brief Divide dos racionales
 * @param[in] Racional: recibe dos racional 
 */

rational_t
rational_t::divide(const rational_t& r)
{
  int numerador = get_num() * r.get_den();
  int denominador = r.get_num() * get_den();
  return rational_t (numerador, denominador);
}



// E/S

//Salida por pantalla de un numero racional

void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}

//Entrada de un numero racional

void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
