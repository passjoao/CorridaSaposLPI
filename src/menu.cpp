/**
* @author João Victor
* @file menu.cpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief Função menu de interação com o usuário
* @details Essa função é responsável pela interação do usuário com o programa
*/
#include "../include/menu.hpp"

int menu(){


	vector<Sapo> sapos;
	vector<Pista> pistas;
	cout << "===============================" << endl;
	arqSapos(sapos);
	if(sapos.size()==0)cout<<"||Sem dados no arquivo 'sapos.txt' ||"<<endl;

	arqPistas(pistas);
	if(pistas.size()==0)cout<<"||Sem dados no arquivo 'pistas.txt'||"<<endl;
	cout << "===============================" << endl<< endl;

    cout << "========SEJA BEM VINDO A INCRÍVEL CORRIDA DE SAPOS========" << endl;
    cout << "||Opcoes:\n|| 1 :: Adicionar sapo\n|| 2 :: Adicionar pista\n|| 3 :: Estatísticas de Sapos\n|| 4 :: Estatísticas de Pistas\n|| 5 :: Iniciar Corrida\n|| 6 :: sair" <<endl;
    int res;
    cin >> res;
    while(res != 6){
    	if(res == 1){
    		criarSapo(sapos);
    	}
    	else if(res == 2){
    		criarPista(pistas);
    	}
    	else if(res == 3){
    		if(sapos.size() == 0) cout << "||Ainda não há sapos!" << endl;
			else{
				for(int i = 0; i < (int) sapos.size(); i++){
					cout << sapos[i];
				}
			}
			cout << endl;  		
    	}
    	else if(res == 4){
    		if(pistas.size() == 0) cout << "||Ainda não há Pistas!" << endl;
			else{
				for(int i = 0; i < (int) pistas.size(); i++){
					cout << pistas[i];
				}
			}
			cout << endl; 
    	}
    	else if(res == 5){  		
    		escolherPista(pistas);
    		iniciarCorrida(sapos);
    	}
    	else{
    		cout << "||Opção invalida!!"  << endl;
    		cin >> res;
    	}
    	cout << "||Opcao: ";
    		cin >> res;
    }
	cout << endl << endl << "\\0/\\0/\\0/\\0/\\0/\\0/\\0/VALEU PELA CORRIDA\\0/\\0/\\0/\\0/\\0/\\0/\\0/" << endl;
	escreverPistas(pistas);
	escreverSapos(sapos);
	return 0;
}
