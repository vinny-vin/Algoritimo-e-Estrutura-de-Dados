/*
 * pratica2.cpp
 *
 *  Created on: 29 de fev de 2020
 *      Author: ALUNO
 */
#include <iostream>
#include "veiculo.h"
using namespace std;

	int main(){
		Veiculo v1 ("V1");

		Terrestre t1 ("T1");
		Aquatico aq1 ("Aq1");
		Aereo ae1("Ae1");


		Veiculo * terr = new Terrestre("VT1");
		((Terrestre *) terr)->setCap_pass(45);

		Veiculo * aqua = new Aquatico("VO1");
		((Aquatico *) aqua)->setCarga_Max(12.5);

		Veiculo * aereo = new Aereo("VA1");
		((Aereo *) aereo)->setVel_max(1040.5);



}



