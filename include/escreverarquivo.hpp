#ifndef ESCREVER_ARQUIVO_HPP
#define ESCREVER_ARQUIVO_HPP

	#include <vector>
	using namespace std;

	#include "../include/sapo.hpp"
	#include "../include/pista.hpp"

	#include <fstream>
	#include <iostream>
    
	void escreverSapos(vector<Sapo> &sapos);
	void escreverPistas(vector<Pista> &pistas);
#endif