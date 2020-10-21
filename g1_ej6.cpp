//Implementar una clase arreglo, con las operaciones para
//poder ejecutar este programa:
#include<iostream>
#include "arreglo.h"

int main(){
  	//declaraciones;
	Arreglo a(7), b;

	
	a.get_valor(3) = 25.3;
  	//a[2] = a[0] + a[1];
  	//arreglo b = a;
  	std::cout<< a.get_valor(3) << std::endl;
  	//std::cout<< b[2] << std::endl;

  return 0;
}
