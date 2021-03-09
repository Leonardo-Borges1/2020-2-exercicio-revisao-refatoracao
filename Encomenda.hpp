#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custo_kg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
		void imprimir_informacoes(){

			std::cout << "[Remetente]" << endl;
			remetente.imprimir_informacoes();
			std::cout << "[Destinatário]" << endl;
			destinatario.imprimir_informacoes();
		}

};

#endif
