#ifndef Encomenda_relampago_H
#define Encomenda_relampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		const double ktaxa_relampago = 0.25;
		
		double calcular_total(){

			double x = peso * custo_kg;
			x += x * ktaxa_relampago;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custo_kg << endl
				<< "  Taxa adicional: " << ktaxa_relampago << endl
				<< "  Custo total: " << total << endl;

		}

};

#endif
