/*
 * Nome do Arquivo: DTime.cpp
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descri��o: Este m�dulo implementa uma fun��o para exibir a data e hora atuais,
 *            e simula a exibi��o de um �ltimo login a partir de um endere�o IP local.
 *
 * M�todos:
 * - Fun��o `printDateTime()`: Obt�m a data e hora atuais do sistema, formata a
 *   informa��o como uma string e a exibe no console, simulando um �ltimo login naquela esta��o "Linux".
 *
 * Notas:
 * - A fun��o `ctime()` � utilizada para converter a data e hora atuais em uma
 *   string.
 * - A diretiva `#pragma warning(disable : 4996)` � usada para desativar avisos
 *   espec�ficos do compilador relacionados ao uso de fun��es consideradas
 *   inseguras, como `ctime()`, em alguns compiladores.
 * - O endere�o IP "127.0.0.1" � usado como um exemplo de endere�o local quando o usu�rio acessa uma esta��o via "SSH".
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
