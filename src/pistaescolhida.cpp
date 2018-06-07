/**
* @author João Victor
* @file pistaescolhida.cpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief Função de seleção da pista para a corrida
*/

#include "../include/pistaescolhida.hpp"
#include "../include/sapo.hpp"

void escolherPista(vector<Pista> pistas){

	int pist;

	cout << "========Escolha uma pista========" << endl;
	for(int i=0; i<(int) pistas.size(); i++){
		cout << "||" << pistas[i].getIdPista() << ") " << pistas[i].getDistancia() << ";"<< endl;
	}
    cout << ":: ";
    cin >> pist;
    Sapo::disCorrida = pistas[pist + 1].getDistancia();
}
