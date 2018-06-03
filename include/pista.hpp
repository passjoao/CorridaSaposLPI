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
		int getId();
		int getDistancia();
        
		Pista();
		Pista(int distancia);
		~Pista();

		friend ostream& operator << (ostream &os, Pista &pist);
	};
#endif