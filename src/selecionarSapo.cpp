
#include "../include/selecionarSapo.hpp"


void selecionarSapo(vector<Sapo> &sapos, vector<Sapo> &selectedSapos){
	cout << "===============================" << endl;
	cout << "||Sapos disponíveis!"
	for (int i = 0; i < sapos.size(); ++i){
		cout << "||ID: " << sapos[i].getId() 
			 << " | Nome: " << sapos[i].getNome() 
			 << " | Força do salto: " << sapos[i].getMax() << endl;
	}
	cout << "===============================" << endl;
	cout << "|| Digite o ID do sapo que deseja adicionar ou -1 para sair!" << endl;
	int res;
	cin >> res;

	while(res != -1){
		int cont = 0;
		for(int i = 0; i < sapos.size(); i++){
			if(sapos[i].getId() == res){
				selectedSapos.push_back(sapos[i]);
			}
			cont++;
			if(cont>sapos.size())cout << "||ID não encontrado!!" << endl;
		}
		cont = 0;
		cout << "Proximo: ";
		cin >> res;		
	}

}