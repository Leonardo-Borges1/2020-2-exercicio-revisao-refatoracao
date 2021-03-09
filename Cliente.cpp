#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::imprimir_informacoes(){

	std::cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;

}
