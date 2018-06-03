#include "../include/sapo.hpp"

#include <time.h>
#include <iostream>
#include <string>

using namespace std;

int Sapo::disCorrida;

Sapo::Sapo(){
	disPercorrida = 0;
	qtdPulos = 0;
}
Sapo(string nome, int IdAnt, int qtdPulos, int qtdProvas, int vitorias, int empates, int max){
    this->nome = nome;
	this->Id = IdAnt + 1;
	this->disPercorrida = 0;
	this->qtdPulos = qtdPulos;
	this->qtdTotalPulos = 0;
	this->qtdProvas = qtdProvas;
	this->vitorias = vitorias;
	this->empates = empates;
	this->max = max;
}
Sapo::~Sapo(){}

int Sapo::getNome(){
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
    this->qtdPulos;
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
    this->vitorias = this=>vitorias +1;
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

void Sapo::pular(){
    int pulo;
    if(disPercorrida <= disTotal){
        pulo = rand()%max+1;
        this->disPercorrida += pulo;
        setqtdPulos(getqtdPulos()+1);
        setqtdTotalPulos(getqtdTotalPulos()+1);
        cout << "||Id: " << this->Id << ednl;
        cout << "||Sapo: " << this->nome << endl;
        cout << "||Distancia: " << pulo << endl;
        if (disPercorrida >= disTotal) cout << "\n\\0/\\0/\\0/\\0/***FINISH***\\0/\\0/\\0/" << endl;
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