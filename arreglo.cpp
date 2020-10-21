#include<iostream>
#include "arreglo.h"
//Version 0.1 de clase arreglo
//se implementan 3 constructores el destructor
//y un "geter"

//Constructor sin argumentos
Arreglo::Arreglo(){ 
	std::cout<<"entro al constructor sin argumentos"<<std::endl;
	tamanio = 10;
	ptr = new double[10];
}

//Constructor con tamanio pero sin datos
Arreglo::Arreglo(int tam){
	std::cout<<"entro al constructor con tamanio"<<std::endl;
	tamanio = tam;
	ptr = new double[tamanio];
}

//Constructor copia
Arreglo::Arreglo(const Arreglo& inic){
	std::cout<<"entro al constructor copia"<<std::endl;
	tamanio = inic.tamanio;
	ptr = new double[tamanio];
	for (int i = 0; i<tamanio; i++){
		ptr[i] = inic.ptr[i];
	}
}

//Destructor
Arreglo::~Arreglo(){
	std::cout<<"entro al destructor"<<std::endl;
	if(ptr)
		delete []ptr;
}

//sobrecarga operador indexacion


//metodo obtener
double& Arreglo::get_valor(int indice){
		return *(ptr + indice);//retorna como referencia
		//lo que se apunta sumado el indice
}
		
