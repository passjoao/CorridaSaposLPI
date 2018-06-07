/**
* @author João Victor
* @file escreverarquivo.cpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief Função de escrita nos arquivos .txt dos vectors sapos e pistas
*/
#include "../include/escreverarquivo.hpp"

void escreverSapos(vector<Sapo> &sapos){
	ofstream myfile("files/sapos.txt");
	if(myfile.is_open()){
		for(int i=0; i<(int)sapos.size(); i++){
			myfile << sapos[i].getId() << "\n" << sapos[i].getNome() << "\n" << sapos[i].getqtdPulos() << "\n";
			myfile << sapos[i].getqtdProvas() << "\n" << sapos[i].getVitorias() << "\n" << sapos[i].getEmpates() << "\n" << sapos[i].getMax() << "\n";
		}
		myfile.close();
	}
	else cout << "||ERRO: nÃO FOI POSSÍVEL ABRIR O ARQUIVO sapo.txt!" << endl;
}

void escreverPistas(vector<Pista> &pistas){
	ofstream myfile("files/pistas.txt");
	if(myfile.is_open()){
		for(int i=0; i<(int)pistas.size(); i++){
			myfile << pistas[i].getIdPista() << "\n" << pistas[i].getDistancia() << "\n";
		}
		myfile.close();
	}
	else cout << "||ERRO: nÃO FOI POSSÍVEL ABRIR O ARQUIVO pistas.txt!" << endl;
}
