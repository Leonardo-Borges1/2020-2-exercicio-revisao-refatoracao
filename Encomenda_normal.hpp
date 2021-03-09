#ifndef Encomenda_normal_H
#define Encomenda_normal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class Encomenda_normal: public Encomenda{

	public:
		
	double calcular_total(){

		double x = peso * custo_kg;

		return x;
	}

	void imprimir_informacoes(){

		Encomenda::imprimir_informacoes();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custo_kg << endl
			<< "  Custo total: " << total << endl;

	}

};

#endif
