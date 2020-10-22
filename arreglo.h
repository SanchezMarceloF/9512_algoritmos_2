#ifndef ARREGLO_INCLUDED
#define ARREGLO_INCLUDED

class Arreglo{
 private:
  double *ptr;
  int tamanio;

 public:

  //Constructor sin argumentos
  Arreglo();	

  //Constructor con tamanio, pero sin datos
  Arreglo(int);

  //Constructor copia
  Arreglo(const Arreglo &);

  //Destructor
  ~Arreglo();

  //Metodo obtener
  //double& get_valor(int);

  //sobrecarga del operador indexacion
  double& operator[](int);
	
  //Metodo sumar
  //PRE: Se debe pasar arreglo (puntero) y los indices a,b
  //POST: devuelve un double
  //double sumar(arreglo a, int a, int b);

  //metodo asignar
  //PRE: arreglo, indice, valor(double)
  //POST: No devuelve nada
  //asignar (arreglo a, int indice, double valor);

};
#endif //ARREGLO_INCLUDED
