#include "../include/pista.hpp"

int Pista::getIdPista(){
	return this->idPista;
}
int Pista::getDistancia(){
	return this->distancia;
}

Pista::Pista(){}

Pista::Pista(int IdPistaAnt, int distancia){
	this->IdPista = IdPistaAnt+1;
	this->distancia = distancia;
}

Pista::~Pista(){}

ostream& operator << (ostream &os, Pista &pista){
	os << "||Id Pista: " << pista.getIdPista() << endl
		<< "||Distancia da pista: " << pista.getDistancia() << endl
        << "=====================================" << endl;
	return os;
}