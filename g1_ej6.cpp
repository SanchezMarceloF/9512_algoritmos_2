//Implementar una clase arreglo, con las operaciones para
//poder ejecutar este programa:
#include<iostream>
#include "arreglo.h"

int main(){
  	//declaraciones;
	Arreglo a(7), b;

	
	a[3] = 25.3;
	a[0] = 123.456;
	Arreglo	c(a);
  	//a[2] = a[0] + a[1];
  	//arreglo b = a;
	std::cout<< a[0] << "\t" << a[3] << std::endl;
	std::cout<< c[0] << "\t" << c[3] << std::endl;
  	//std::cout<< b[2] << std::endl;

  return 0;
}
