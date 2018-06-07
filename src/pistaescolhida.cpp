/**
* @author João Victor
* @file pistaescolhida.cpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief Função de seleção da pista para a corrida
*/

#include "../include/pistaescolhida.hpp"

void escolherPista(vector<Pista> pistas){

	int pist, id;

	cout << "========Escolha uma pista========" << endl;
	for(int i=0; i<(int) pistas.size(); i++){
		cout << "||" << pistas[i].getId() << ") " << pistas[i].getDistancia() << ";"<< endl;
	}
    cout ":: ";
    cin >> pist;
    Sapo.disCorrida = pista[pist + 1].getdistancia();
}
