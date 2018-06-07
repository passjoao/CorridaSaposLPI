/**
* @author João Victor
* @file lerarquivo.cpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief Função de escrita nos arquivos .txt dos vectors sapos e pistas
* @details Codigo de leitura dados pelo professor da disciplina "Linguagem de programação I" em aula e em slides
*/

#include "../include/lerarquivo.hpp"

void arqSapos(vector<Sapo> &sapos){
	
	string line, nome;
	ifstream myfile("files/sapos.txt");

	if(!myfile.is_open()){
		cout << "Não foi possivel abrir o arquivo 'sapos.txt'!" << endl;
		return;
	}
	int cont = 1, Id, pulos, provas, vitorias, empates, max;

	while(!myfile.eof()){
		getline(myfile, line);
		if(line == "") break;
        //stoi() converte o dado da linha em um Inteiro
		if(cont == 1) Id = atoi(line.c_str()) - 1;
		else if(cont == 2) nome = line;
		else if(cont == 3) pulos = atoi(line.c_str());
		else if(cont == 4) provas = atoi(line.c_str());
		else if(cont == 5) vitorias = atoi(line.c_str());
		else if(cont == 6) empates = atoi(line.c_str());
		else if(cont == 7){
			max = atoi(line.c_str());
			cont = 0;
            //criar o sapo com os dados do arquivo e adicionar ao vector sapos
			Sapo saporra(nome, Id, pulos, provas, vitorias, empates, max);
			sapos.push_back(saporra);
		} 
		cont++;
	}
	myfile.close();
}

void arqPistas(vector<Pista> &pistas){
	string line;
	ifstream myfile("files/pistas.txt");

	if(!myfile.is_open()){
		cout << "Não foi possivel abrir o arquivo 'pistas.txt'!" << endl;
		return;
	}
	int cont = 1, id, dist;
	while(!myfile.eof()){
		myfile >> line;
		if(line == "") break;
		
		if(cont == 1) id = atoi(line.c_str()) - 1; 
		else if(cont == 2){
			dist = atoi(line.c_str());
			cont = 0;
			Pista posto(id, dist);
			pistas.push_back(posto);
		}
		cont++;
	}
	myfile.close();
}
