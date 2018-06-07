/**
* @author João Victor
* @file pista.cpp
* @sa https://github.com/passjoao/CorridaSaposLPI
* @since 03/05/18
* @date 06/05/18
* @brief Classe Sapo
*/

#include "../include/sapo.hpp"

int Sapo::disCorrida;

Sapo::Sapo(){
	disPercorrida = 0;
	qtdPulos = 0;
}
Sapo::Sapo(string nome, int IdAnt, int qtdPulos, int qtdProvas, int vitorias, int empates, int max){
    this->nome = nome;
	this->Id = IdAnt + 1;
	this->disPercorrida = 0;
	this->qtdPulos = qtdPulos;
	this->qtdTotalPulos = 0;
	this->qtdProvas = qtdProvas;
	this->vitorias = vitorias;
	this->empates = empates;
	this->max = max;
    this->colocacao = 0;
}
Sapo::~Sapo(){}

string Sapo::getNome(){
    return this->nome;
}
void Sapo::setNome(string nome){
    this->nome = nome;
}

int Sapo::getId(){
    return this->Id;
}
void Sapo::setId(int Id){
    this->Id = Id;
}

int Sapo::getdisPercorrida(){
    return this->disPercorrida;
}
void Sapo::setdisPercorrida(int disPercorrida){
    this->disPercorrida = disPercorrida;
}

int Sapo::getqtdPulos(){
    return this->qtdPulos;
}
void Sapo::setqtdPulos(int qtdPulos){
    this->qtdPulos = qtdPulos;
}

int Sapo::getqtdProvas(){
    return this->qtdProvas;
}
void Sapo::setqtdProvas(int qtdProvas){
    this->qtdProvas = qtdProvas;
}

int Sapo::getVitorias(){
    return this->vitorias;
}
void Sapo::setVitorias(){
    this->vitorias = this->vitorias +1;
}

int Sapo::getEmpates(){
    return this->empates;
}
void Sapo::setEmpates(){
    this->empates = this->empates +1;
}

int Sapo::getqtdTotalPulos(){
    return this->qtdTotalPulos;
}
void Sapo::setqtdTotalPulos(int qtdTotalPulos){
    this->qtdTotalPulos = qtdTotalPulos;
}

int Sapo::getMax(){
    return this->max;
}
void Sapo::setMax(int max){
    this->max = max;
}

void Sapo::setcolocacao(int colocacao){
	this->colocacao = colocacao;
}

int Sapo::getcolocacao(){
	return this->colocacao;
}

void Sapo::pular(){
    int pulo;
    if(disPercorrida <= disCorrida){
        pulo = rand()%max+1;
        this->disPercorrida += pulo;
        setqtdPulos(getqtdPulos()+1);
        setqtdTotalPulos(getqtdTotalPulos()+1);
        cout << "||Id: " << this->Id << endl;
        cout << "||Sapo: " << this->nome << endl;
        cout << "||Distancia: " << pulo << endl;
        if (disPercorrida >= disCorrida) cout << "\n\\0/\\0/\\0/\\0/***FINISH***\\0/\\0/\\0/" << endl;
        cout << "=====================================" << endl;
    }
}

ostream& operator << (ostream &os, Sapo &sapo){
	os << "||Nome do Sapo: " << sapo.getNome() << endl
		<< "||Identificador: " << sapo.getId() << endl
		<< "||Provas disputadas: " << sapo.getqtdProvas() << endl
		<< "||Vitorias: " << sapo.getVitorias() << endl
		<< "||Empates: " << sapo.getEmpates() << endl
		<< "||Força de salto: " << sapo.getMax() << endl
		<< "||Total de pulos dados: " << sapo.getqtdTotalPulos() << endl
        << cout << "=====================================" << endl;
	return os;
}
