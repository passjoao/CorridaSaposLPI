/**
* @author João Victor
* @file iniciarcorrida.hpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief cabeçalho da Função para iniciar a corrida
*/
#ifndef INICIAR_CORRIDA_HPP
#define INICIAR_CORRIDA_HPP
	#include <vector>
	#include <iostream>

	using namespace std;

	#include "../include/sapo.hpp"

	bool ultimo(vector<Sapo> sapos);
	void iniciarCorrida(vector<Sapo> &sapos);
#endif