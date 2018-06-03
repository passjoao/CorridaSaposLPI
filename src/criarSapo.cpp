#include "../include/criarSapo.hpp"

void criarSapo(vector<Sapo> &sapos){
	cout << "========Adicinando um Sapo========" << endl << endl;
	string nome;
	int salto;
    int idAnt = 0;

    if (!sapos.empty()){
        Sapo ant = sapos.back();
        idAnt = ant.getId();
    }

	cout << "Digite o nome do sapo: ";
	getline(cin, nome);

	cout << "Digite a força do pulo de " << nome << ": ";
	cin >> salto;

	cin.ignore();
	Sapo sapo(nome, idAnt, 0, 0, 0, 0, salto)
	sapos.push_back(sapo);
    
	cout << "========Sapo adicionado!========" << endl << endl;
}