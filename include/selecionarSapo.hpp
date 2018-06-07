/**
* @author João Victor
* @file selecionarSapo.hpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief cabeçalho da função de escolher os sapos da corrida
*/
#ifndef SELECIONAR_SAPO_HPP
#define SELECIONAR_SAPO_HPP
	#include <vector>

	#include "../include/sapo.hpp"

	#include <sstream>
	#include <string>
    
	using namespace std;
	void selecionarSapo(vector<Sapo> &sapos, vector<Sapo> &selectedSapos);
#endif