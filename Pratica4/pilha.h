/*
 * pilha.h
 *
 *  Created on: 14 de mar de 2020
 *      Author: ALUNO
 */
#include <iostream>
#ifndef PILHA_H_
#define PILHA_H_
template <class T>
class Pilha{
private:
	int P_max;
	int * array = new int[P_max];
	int P_n = 0;

public:
	Pilha(int P_max) {
		this->P_max = P_max;
		this->P_n = P_n;
	}

	~Pilha(){
		delete[] this->array;
	}

	void empilha(T item){
		if(P_n < P_max){
			array[P_n] <- item;
			P_n++;
		}
		else{
			throw "Estouro de pilha";
		}
	}
	T desempilha(){
		if(P_n > 0){
			P_n--;
		}
		else{
			throw "Pilha Vazia";
		}

	}
	int tamanho(){
		return this->P_n;
	}
};




#endif /* PILHA_H_ */
