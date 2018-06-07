/**
* @author João Victor
* @file lerarquivo.hpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief cabeçalho da funções para ler os arquivos .txt e adicionar aos vectors de sapos e pistas
*/
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