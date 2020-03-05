/*
 * veiculo.cpp
 *
 *  Created on: 28 de fev de 2020
 *      Author: ALUNO
 */

#include <iostream>
#include "Veiculo.h"
using namespace std;

void Veiculo::setNum_Rodas(int teste) {
	this->Num_Rodas = teste;
	delete []this->rodas;
	this->rodas = new Roda[teste]();

}


int Veiculo::getNum_Rodas() {
	return this->Num_Rodas;
}

