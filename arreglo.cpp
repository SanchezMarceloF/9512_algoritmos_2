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
double& Arreglo::operator[](int indice){
	return ptr[indice];
}

//sobrecarga operador =
Arreglo& Arreglo::operator=(const Arreglo& der){
	if(&der != this){
		//si los arreglos tienen distinto tamaño se crea un arreglo auxiliar
		if(tamanio != der.tamanio){
			//std::cout<<"no son iguales"<<std::endl;
			double *aux;//se crea puntero auxiliar tipo double
			aux = new double[der.tamanio];//se asigna espacio de memoria
			delete []ptr; //se libera espacio del puntero del objeto (el que llama a asignacion - izquierda)
			tamanio = der.tamanio;// ahora el objeto tiene tamanio de la derecha
			ptr = aux;//ahora el ptr(tipo double) de la clase que llama apunta donde apunta aux
			for(int i=0; i<tamanio; i++){//se copia elemento a elemento directamente en ptr
			ptr[i] = der.ptr[i];
			}
			return *this;//al retornar una referencia se puede hacer la operación x = y = z
		}
		else{	
			for(int i = 0; i<tamanio; i++)
				ptr[i] = der.ptr[i];
			return *this; //al retornar una referencia se puede hacer la operacion x = y = z
		}	
	}
	else{
		//std::cout<<"son iguales"<<std::endl;
		return *this;
	}
}
		




