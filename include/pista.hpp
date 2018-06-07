/**
* @author João Victor
* @file pista.hpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief cabeçalho da classe Pista
*/
#ifndef CLASS_PISTA_HPP
#define CLASS_PISTA_HPP

	#include <ostream>
	#include <iostream>

	using namespace std;
	class Pista{
	protected:
		int IdPista;
		int distancia;
	public:
		int getIdPista();
		int getDistancia();
        
		Pista();
		Pista(int IdPistaAnt, int distancia);
		~Pista();

		friend ostream& operator << (ostream &os, Pista &pist);
	};
#endif
