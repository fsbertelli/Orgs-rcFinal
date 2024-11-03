/*
 * Nome do Arquivo: Orgs-rcFinal.cpp
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descrição: Orgs é uma aplicação de gerenciamento de hortifruti. O usuário pode
 *            escolher entre diferentes estações: Servidor (Gerência), Caixa e Estoque. Cada
 *            estação oferece um conjunto de funcionalidades específicas, como gerar
 *            relatórios, efetuar vendas, cadastrar clientes, produtos e fornecedores.
 *
 * Métodos:
 * - Simulação Terminal SSH: Permite ao usuário uma experiência em navegar pelas estações (Linux) simulando um terminal SSH. 
 * - Menu Principal: Permite ao usuário "acessar via SSH" as estações Servidor, Caixa e Estoque.
 * - Estação Servidor: Gera relatórios de produtos, vendas, fornecedores e clientes.
 * - Estação Caixa: Permite efetuar vendas e cadastrar novos clientes.
 * - Estação Estoque: Permite cadastrar novos produtos e fornecedores.
 */

#include <iostream>
#include "Header.h"
#include "Funcoes.h"


using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "portuguese");
	char chosen = 0;
	do {
		system("cls");
		printPanel();
		cout << "\nCHOOSE YOUR STATION:\n\n1 - SERVIDOR\n2 - CAIXA\n3 - ESTOQUE\n0 - FECHAR APLICACAO\n" << endl;
		cin >> chosen;
		char option = 0;
		switch (chosen)
		{
		case '1':
			printServidor();
			do {
				cout << "\n\n\nSELECIONE A OPCAO DESEJADA:\n\n1 - GERAR RELATORIO DE PRODUTOS EM ESTOQUE\n2 - GERAR RELATORIO DE VENDAS\n3 - GERAR LISTA DE FORNECEDORES\n4 - GERAR LISTA DE CLIENTES\n0 - VOLTAR AO MENU PRINCIPAL\n" << endl;
				cin >> option;
				string tipo = "";
				switch (option)
				{
				case '1':
					tipo = "produtos";
					gerarRelatorio(tipo);
					break;
				case '2':
					tipo = "vendas";
					gerarRelatorio(tipo);
					break;
				case '3':
					tipo = "fornecedores";
					gerarRelatorio(tipo);
					break;
				case '4':
					tipo = "clientes";
					gerarRelatorio(tipo);
					break;
				case '0':
					system("cls");
					break;
					main();
				default:
					cout << "\nOPCAO INVALIDA! TENTE NOVAMENTE!\n";
					Sleep(500);
					system("cls");
					printServidor();
					break;
				}

			} while (option != '0');
			break;
		case '2':
			printCaixa();
			do {
				cout << "\n\n\nSELECIONE A OPCAO DESEJADA:\n\n1 - EFETUAR VENDA\n2 - CADASTRAR CLIENTE\n0 - VOLTAR AO MENU PRINCIPAL\n" << endl;
				cin >> option;
				switch (option)
				{
				case '1':
					realizarVenda();
					break;
				case '2':
					cadastrarCliente();
					break;
				case '0':
					system("cls");
					break;
					main();

				default:
					cout << "\nOPCAO INVALIDA! TENTE NOVAMENTE!\n";
					Sleep(500);
					system("cls");
					printCaixa();
					break;
				}
			} while (option != '0');
			break;
		case '3':
			printEstoque();
			do {
				cout << "\n\n\nSELECIONE A OPCAO DESEJADA:\n\n1 - CADASTRAR PRODUTO\n2 - CADASTRAR FORNECEDOR\n0 - VOLTAR AO MENU PRINCIPAL\n" << endl;
				cin >> option;
				switch (option)
				{
				case '1':
					cadastrarProduto();
					break;
				case '2':
					cadastrarFornecedor();
					break;
				case '0':
					system("cls");
					break;
					main();
				default:
					cout << "\nOPCAO INVALIDA! TENTE NOVAMENTE!\n";
					Sleep(500);
					system("cls");
					printEstoque();
					break;
				}
			} while (option != '0');
			break;
		case '0':
			cout << "\nAPLICACAO ENCERRADA PELO USUARIO!\n";
			break;
		default:
			cout << "\nOPCAO INVALIDA! TENTE NOVAMENTE!\n";
			Sleep(500);
			break;
		}
	} while (chosen != '0');
}
