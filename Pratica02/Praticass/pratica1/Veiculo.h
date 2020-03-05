/*
 * Veiculo.h
 *
 *  Created on: 20 de fev de 2020
 *      Author: ALUNO
 */

#ifndef VEICULO_H_
#define VEICULO_H_
#include <iostream>
using namespace std;

class Roda {

public:
	Roda() {
		cout << ("O objeto  foi criado ") << endl;
	}
	~Roda() {
		cout << ("O objeto foi destruido ") << endl;
	}
};

class Veiculo {

private:
	string nome;
	int Num_Rodas;
	Roda * rodas = NULL;

public:
	Veiculo(const char * param) {
		this->Num_Rodas = 0;
		this->nome = string(param);
		cout << "O objeto " + nome + " foi criado " << endl;
	}
	~Veiculo() {
		cout << "O objeto " + nome + " foi destruido " << endl;
		delete []this->rodas;

	}

	void setNum_Rodas(int n);
	int getNum_Rodas();

};

#endif /* VEICULO_H_ */
