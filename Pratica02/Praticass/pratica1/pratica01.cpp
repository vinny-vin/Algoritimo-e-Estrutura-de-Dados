/*
 * pratica01.cpp
 *
 *  Created on: 20 de fev de 2020
 *      Author: ALUNO
 */

#include <iostream>
#include "Veiculo.h"
using namespace std;


//class Veiculo{
//
//
//	private:
//	string nome;
//	int Num_Rodas;
//
//	public:
//	Veiculo( const char * param){
//		this-> nome = string(param);
//		cout << "O objeto " + nome + " foi criado " << endl;
//	}
//	~Veiculo(){
//		cout << "O objeto " + nome + " foi destruido "<< endl;
//	}
//
//	void  setNum_Rodas(int Num_Rodas);
//	int getNum_Rodas();
//};

//	void Veiculo::setNum_Rodas(int teste){
//		this->Num_Rodas = teste;
//	};
//
//	int Veiculo::getNum_Rodas(){
//		return this->Num_Rodas;
//	};

int main(){

	cout << "Primeira aplicação em C++" << endl;

	/*Veiculo veiculo1("v1");
	{
		Veiculo veiculo2("v2");
			{
				Veiculo veiculo3("v3");
			}
	}
	*/
	Veiculo * objt1 = new Veiculo("VEICULO 1");
	Veiculo * objt2 = new Veiculo("VEICULO 2");
	Veiculo * objt3 = new Veiculo("VEICULO 3");

	objt1->setNum_Rodas(8);
	objt1->setNum_Rodas(8);

	cout << objt1->getNum_Rodas() << endl;

	delete objt1;
	delete objt2;
	delete objt3;



}


