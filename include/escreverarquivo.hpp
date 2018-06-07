/**
* @author João Victor
* @file escreverarquivo.hpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief cabeçalho da funções para escrever os vectors sapos e pistas em um arquivo .txt
*/
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