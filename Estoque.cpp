/*
 * Nome do Arquivo: Estoque.cpp
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descri��o: Este m�dulo implementa as funcionalidades relacionadas ao Estoque.
 *            Ele permite o cadastro de novos produtos e fornecedores, armazenando
 *            essas informa��es em arquivos de texto.
 *
 * M�todos:
 * - Fun��o `cadastrarProduto()`: Permite ao usu�rio o cadastro de novos produtos, armazenando seus
 *   nomes, quantidades e pre�os em um arquivo de texto.
 * - Fun��o `cadastrarFornecedor()`: Permite ao usu�rio o cadastro de novos fornecedores, armazenando
 *   seus nomes e outras informa��es relevantes em um arquivo de texto.
 *
 * Notas:
 * - O programa utiliza arquivos de texto para armazenar dados de produtos e fornecedores.
 * - Os arquivos de texto se encontram no diret�rio ~/dados
 */


#include <iostream>
#include <fstream>
#include <string>
#include "Funcoes.h"

using namespace std;

void cadastrarFornecedor() {
    string nome, cnpj;
    cout << "Digite o nome do fornecedor: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Digite o CNPJ do fornecedor: ";
    cin >> cnpj;
    string fileName = "dados/fornecedores.txt";

    ofstream arquivoFornecedores(fileName, ios::app);
    if (arquivoFornecedores.is_open()) {
        arquivoFornecedores << nome << "," << cnpj << endl;
        arquivoFornecedores.close();
        cout << "\nFornecedor cadastrado com sucesso em: " << fileName << "." << endl;
    }
    else {
        cout << "Erro ao abrir o arquivo " << fileName << "." << endl;
    }
}

void cadastrarProduto() {
    string nomeProduto;
    int quantidade;
    double preco;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, nomeProduto);
    cout << "Digite a quantidade do produto: ";
    cin >> quantidade;
    cout << "Digite o pre�o do produto: ";
    cin >> preco;
    string fileName = "dados/produtos.txt";

    ofstream arquivoProdutos(fileName, ios::app);
    if (arquivoProdutos.is_open()) {
        arquivoProdutos << nomeProduto << "," << quantidade << "," << preco << endl;
        arquivoProdutos.close();
        cout << "\nProduto cadastrado com sucesso em: " << fileName << "." << endl;
    }
    else {
        cout << "Erro ao abrir o arquivo " << fileName << "." << endl;
    }
}
