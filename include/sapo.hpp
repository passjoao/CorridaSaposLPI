#ifndef CLASS_SAPO_HPP
#define CLASS_SAPO_HPP
	#include <string>
	using namespace std;
	class Sapo{
        private:
            string nome;
            int Id;
            int disPercorrida;
            int qtdPulos;

            int qtdProvas;
            int vitorias.
            int empates;
            int qtdTotalPulos;
            int max;
        public:
            static int disCorrida;
            Sapo();
            Sapo(string nome, int IdAnt, int qtdPulos, int qtdProvas, int vitorias, int empates, int max);
            ~Sapo();

            string getNome();
            void setNome(string nome);

            int getId();
            void setId(int Id);

            int getdisPercorrida();
            void setdisPercorrida(int disPercorrida);

            int getqtdPulos();
            void setqtdPulos(int qtdPulos);
            
            int getqtdProvas();
            void setqtdProvas(int qtdProvas);

            int getVitorias();
            void setVitorias();

            int getEmpates();
            void setEmpates();

            int getqtdTotalPulos();
            void setqtdTotalPulos(int qtdTotalPulos);

            int getMax();
            void setMax(int max);

            void pular();
            
            friend ostream& operator << (ostream &os, Sapo &sapo);
    }