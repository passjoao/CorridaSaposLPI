/**
* @author João Victor
* @file criarpista.cpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief Função de criação da pista
*/
#include "../include/criarpista.hpp"

void criarPista(vector<Pista> &pistas){
	cout << "========Adicinando uma Pista========" << endl << endl;

    int tamanho;
	int idAnt = 0;

    if (!pistas.empty()){
        Pista ant = pistas.back();
        idAnt = ant.getIdPista();
    }

    cout << "Digite o tamanho da pista: ";
	cin >> tamanho;

	Pista pitstop(idAnt, tamanho);
	pistas.push_back(pitstop);
    
	cout << "========Pista adicionado!========" << endl << endl;
}