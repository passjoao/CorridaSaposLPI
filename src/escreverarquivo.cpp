#include "../include/escreverArquivos.hpp"

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
	ofstream myfile("docs/pistas.txt");
	if(myfile.is_open()){
		for(int i=0; i<(int)pistas.size(); i++){
			myfile << pistas[i].getIdPista() << "\n" << pistas[i].getDistancia() << "\n";
		}
		myfile.close();
	}
	else cout << "||ERRO: nÃO FOI POSSÍVEL ABRIR O ARQUIVO pistas.txt!" << endl;
}