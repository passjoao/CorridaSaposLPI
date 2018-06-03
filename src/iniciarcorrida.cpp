#include "../include/iniciarCorrida.hpp"

bool ultimo(vector<Sapo> &sapos){
    for(int i=0; i<(int)sapos.size(); i++){
		if(sapos[i].getdisPercorrida() < Sapo.disCorrida) return true;
	}
	return false;
}

void iniciarCorrida(vector<Sapo> &sapos){
    int ids[] = new int*(int)sapos.size();
    int position = 1;
    while(ultimo(sapos)){
        for(int i = 0; i < (int)sapos.size(); i++){
            sapos[i].pular();
        }

        for(i = 0;i < (int)sapos.size();i++){
            if(sapos[i].getdisPercorrida() >= Sapo.disCorrida){
                if(position == 1){
                    sapos[i].setVitorias();
                }
            }            
        }
        position++;     
    }



	ranking++;
	// Verificando os empates
	int contador;
	for(int i=1; i<ranking; i++){
		contador = 0;
		for(int j=0; j<(int)sapos.size(); j++){
			if(sapos[j].getRanking() == i) contador++;
		}
		if(contador > 1){
			for(int j=0; j<(int)sapos.size(); j++){
				if(sapos[j].getRanking() == i) {
					sapos[j].setEmpates();
				}
			}
		}
	}

	// Imprimindo o Ranking
	cout << "********** Ranking **********" << endl;
	for(int rk=1; rk<ranking; rk++){
		for(int i=0; i<(int)sapos.size(); i++){
			if(sapos[i].getRanking() == rk){
				cout << sapos[i].getRanking() << "º Lugar: " << endl
					<< "   Nome: " << sapos[i].getNome() << endl
					<< "   Identificador: " << sapos[i].getIdentificador() << endl
					<< "   Pulos dados: " << sapos[i].getPulosDados() << endl;
			}
		}
	}

	// Resetando as informações para próxima corrida
	for(int i=0; i<(int)sapos.size(); i++){
		sapos[i].setProvasDisp(sapos[i].getProvasDisp()+1);
		sapos[i].setPulosDados(0);
		sapos[i].setDistPercorrida(0);
		sapos[i].setRanking(0);
	}
}