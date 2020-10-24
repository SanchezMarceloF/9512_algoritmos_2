//Implementar una clase arreglo, con las operaciones para
//poder ejecutar este programa:
#include<iostream>
#include "arreglo.h"

int main(){
  	//declaraciones;
	Arreglo a(7), b(12);

	
	a[3] = 25.3;
	a[0] = 123.456;
	b[11] = 349;
	b[2] = 32.8;
	Arreglo	c(a);
  	//a[2] = a[0] + a[1];
  	//arreglo b = a;
	std::cout<< a[0] << "\t" << a[3] << std::endl;
	std::cout<< c[0] << "\t" << c[3] << std::endl;
  	std::cout<< "a antes de copia: " << a[2] << std::endl;
  	std::cout<< "b: " << b[2] << b[10] << b[11] <<  std::endl;
	a = b;
	c = c = a;
	std::cout<< "a después de copia: " << a[2] << std::endl;

  return 0;
}
