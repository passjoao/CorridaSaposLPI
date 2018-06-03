#ifndef LER_ARQUIVO_HPP
#define LER_ARQUIVO_HPP

	#include <vector>
	#include <fstream>
	#include <iostream>

	using namespace std;

	#include "../include/sapo.hpp"
	#include "../include/pista.hpp"
    
	void arqSapos(vector<Sapo> &sapos);
	void arqPistas(vector<Pista> &pistas);
#endif