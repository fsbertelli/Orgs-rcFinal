/*
 * Nome do Arquivo: Servidor.cpp
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descri��o: Este m�dulo implementa as funcionalidades relacionadas � Ger�ncia.
 *            Ele permite a gera��o de relat�rios de clientes, fornecedores, produtos e vendas,
 *            extraindo informa��es dos arquivos de texto e exibindo-as para o usu�rio.
*
 * M�todos:
 * - Fun��o `gerarRelatorio(const string& tipo)`: Gera relat�rios baseados no tipo especificado,
 *   como "clientes", "fornecedores", "produtos" ou "vendas". L� os dados dos arquivos de texto
 *   correspondentes e os exibe para o usu�rio.
 *
 * Notas:
 * - O m�dulo utiliza arquivos de texto para armazenar dados de clientes, fornecedores, produtos e vendas.
 * - Os arquivos de texto se encontram no diret�rio ~/dados
 * - Certificar que os arquivos de dados estejam no diret�rio correto para que os relat�rios sejam gerados
 *   corretamente.
 */

#include <iostream>
#include <fstream>
#include <string>
#include "Funcoes.h"

using namespace std;

void gerarRelatorio(const string& tipo) {
    if (tipo == "clientes") {
        ifstream arquivoClientes("dados/clientes.txt");
        string linha;
        system("cls");
        cout << "+----------Clientes cadastrados----------+\n\n";
        while (getline(arquivoClientes, linha)) {
            cout << linha << endl;
        }
        cout << "\n";
        cout << "+----------------------------------------+";
        cout << "\n\n";
        system("pause");
        system("cls");

    }
    else if (tipo == "fornecedores") {
        ifstream arquivoFornecedores("dados/fornecedores.txt");
        string linha;
        system("cls");
        cout << "+----------Fornecedores cadastrados----------+\n\n";
        while (getline(arquivoFornecedores, linha)) {
            cout << linha << endl;
        }
        cout << "\n";
        cout << "+--------------------------------------------+";
        cout << "\n\n";
        system("pause");
        system("cls");
    }
    else if (tipo == "produtos") {
        ifstream arquivoProdutos("dados/produtos.txt");
        string linha;
        system("cls");
        cout << "+----------Produtos cadastrados----------+\n\n";
        while (getline(arquivoProdutos, linha)) {
            cout << linha << endl;
        }
        cout << "\n";
        cout << "+----------------------------------------+";
        cout << "\n\n";
        system("pause");
        system("cls");
    }
    else if (tipo == "vendas") {
        ifstream arquivoVendas("dados/vendas.txt");
        string linha;
        system("cls");
        cout << "+----------Vendas realizadas----------+\n\n";
        while (getline(arquivoVendas, linha)) {
            cout << linha << endl;
        }
        cout << "\n";
        cout << "+-------------------------------------+";
        cout << "\n\n";
        system("pause");
        system("cls");
    }
}
