/*
 * Nome do Arquivo: DTime.cpp
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descrição: Este módulo implementa uma função para exibir a data e hora atuais,
 *            e simula a exibição de um último login a partir de um endereço IP local.
 *
 * Métodos:
 * - Função `printDateTime()`: Obtém a data e hora atuais do sistema, formata a
 *   informação como uma string e a exibe no console, simulando um último login naquela estação "Linux".
 *
 * Notas:
 * - A função `ctime()` é utilizada para converter a data e hora atuais em uma
 *   string.
 * - A diretiva `#pragma warning(disable : 4996)` é usada para desativar avisos
 *   específicos do compilador relacionados ao uso de funções consideradas
 *   inseguras, como `ctime()`, em alguns compiladores.
 * - O endereço IP "127.0.0.1" é usado como um exemplo de endereço local quando o usuário acessa uma estação via "SSH".
 */


#include <ctime>
#include <iostream>  
#pragma warning(disable : 4996)
using namespace std;

void printDateTime() {
	time_t now = time(0);
	char* dt = ctime(&now);
	dt[strlen(dt) - 1] = '\0';
	cout << "\nLast login: " << dt << " from 127.0.0.1" << endl;
}
