/*
 * veiculo.h
 *
 *  Created on: 29 de fev de 2020
 *      Author: ALUNO
 */
#include <iostream>
#define VEICULO_H_
using namespace std;


	class Veiculo{
	protected:
		string nome;

	public:
		Veiculo(const char * param ){
			this->nome = param;
			cout << "O objeto " + nome + " foi criado com sucesso!!!" << endl;
		}
		string  getNome();
		virtual void mover();
		virtual ~Veiculo(){};

	};

	class Terrestre : public Veiculo{
	public:
		Terrestre ( const char * nome) : Veiculo (nome) {}

		int getCap_pass();
		void setCap_pass(int cap_pass);
		virtual void mover();
		virtual ~Terrestre(){};
	private:
		int cap_pass = 5;//Numero maximo de passageiros//
	protected:
		Terrestre(){
			Veiculo("teste");
		}

	};

	class Aquatico : public Veiculo{

	public:
		Aquatico (const char * nome) : Veiculo (nome){}


		void setCarga_Max(float carga_Max);
		float getCarga_Max();
		virtual void mover();
		virtual ~Aquatico(){};

	private:
				float carga_Max = 10;//Carga maxima em tonelada//
	protected:
		Aquatico(){
			Veiculo("teste");
		}


	};

	class Aereo : public Veiculo{

	public:
		Aereo (const char * nome) : Veiculo(nome) {}

		void setVel_max(float vel_max);
		float getVel_max();
		virtual void mover();
		virtual ~Aereo(){};
	private:
		float vel_max = 100;// Velocidade maxima em km/h//

	};

	class Anfibio : public virtual Terrestre, Aquatico{

		Anfibio (const char * nome) : Veiculo(nome), Terrestre(), Aquatico() {}
		virtual void mover(){
			Terrestre::mover();
			Aquatico::mover();
		}
	};




