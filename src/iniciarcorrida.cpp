#include "../include/iniciarCorrida.hpp"


//funcao para verificar se ainda falta corredores na corrida
bool ultimo(vector<Sapo> &sapos){
    for(int i=0; i<(int)sapos.size(); i++){
		if(sapos[i].getdisPercorrida() < Sapo.disCorrida) return true;
	}
	return false;
}

//funcao da corrida
void iniciarCorrida(vector<Sapo> &sapos){
    int position = 1;
    while(ultimo(sapos)){
        for(int i = 0; i < (int)sapos.size(); i++){
            sapos[i].pular();
        }

        for(i = 0;i < (int)sapos.size();i++){
            if(sapos[i].getdisPercorrida() >= Sapo.disCorrida){
                if(position == 1)sapos[i].setVitorias();
                sapos[i].setColocacao(position);
            }            
        }
        position++;     
    }

	int cont = 0;
	for(int i = 0; i < (int)sapos.size(); i++){
		if (sapos[i].getColocacao()==1)cont++;		
	}
	if(cont>1){
		for(int i = 0; i < (int)sapos.size(); i++){
			if(sapos[i].getColocacao()==1) sapos[i].setEmpates();
		}
	}

	cout << "=======Colocações=======" << endl;
	for(int i=1; i<position; i++){
		for(int j=0; j<(int)sapos.size(); j++){
			if(sapos[j].getColocacao() == i){
				cout << sapos[j].getColocacao() << "º Lugar: " << endl
					<< "||Nome: " << sapos[j].getNome() << endl
					<< "||Identificador: " << sapos[j].getId() << endl
					<< "||Pulos dados: " << sapos[i].getqtdPulos() << endl;
			}
		}
	}
	for(int i=0; i<(int)sapos.size(); i++){
		sapos[i].setqtdProvas(sapos[i].getqtdProvas()+1);
		sapos[i].setqtdPulos(0);
		sapos[i].setdisPercorrida(0);
		sapos[i].setColocacao(0);
	}
}