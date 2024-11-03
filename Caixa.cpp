/*
 * Nome do Arquivo: Caixa.cpp
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descrição: Este módulo implementa as funcionalidades relacionadas ao Caixa.
 *            Ele permite ao usuário o cadastro de clientes e a realização de vendas,
 *            verificando a disponibilidade de produtos no estoque.
 *
 * Métodos:
 * - Função `cadastrarCliente()`: Permite ao usuário o cadastro de novos clientes, armazenando seus
 *   nomes e CPFs em um arquivo de texto.
 * - Função `realizarVenda()`: Permite ao usuário realizar vendas, verificando se o cliente está
 *   cadastrado e se há quantidade suficiente do produto desejado no estoque. Registra
 *   a venda em um arquivo de texto e atualiza o estoque.
 *
 * Notas:
 * - O programa utiliza arquivos de texto para armazenar dados de clientes, produtos e vendas.
 * - Os arquivos de texto se encontram no diretório ~/dados
 * - A função `toLowerCase()` é usada para garantir que as comparações de strings sejam
 *   insensíveis a maiúsculas e minúsculas.
 * - A função `extrairNome()` é utilizada para extrair linha a linha de um arquivo de texto.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream> 
#include "Funcoes.h"


using namespace std;

string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

string extrairNome(const string& linha) {
    string nome;
    stringstream ss(linha);
    getline(ss, nome, ',');  // Extrai o nome até a primeira vírgula
    return nome;
}

void cadastrarCliente() {
    string nome, cpf;
    cout << "Digite o nome do cliente: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Digite o CPF do cliente: ";
    cin >> cpf;
    string fileName = "dados/clientes.txt";

    ofstream arquivoClientes(fileName, ios::app);
    if (arquivoClientes.is_open()) {
        arquivoClientes << nome << "," << cpf << endl;
        arquivoClientes.close();
        cout << "\nCliente cadastrado com sucesso em: " << fileName << "." << endl;
        system("Pause");
        system("cls");
    }
    else {
        cout << "\nErro ao abrir o arquivo " << fileName << "." << endl;
        system("Pause");
        system("cls");
    }
}

void realizarVenda() {
    string nomeCliente, nomeProduto;
    int quantidadeVenda;
    string tipo = "clientes";

    // Exibir o relatório de clientes cadastrados antes da venda
    gerarRelatorio(tipo);

    cout << "Digite o nome do cliente: ";
    cin.ignore(); // Limpa o buffer de entrada
    getline(cin, nomeCliente);

    // Remover espaços em branco extras
    nomeCliente.erase(0, nomeCliente.find_first_not_of(" \t\n\r")); // Remove espaços no início
    nomeCliente.erase(nomeCliente.find_last_not_of(" \t\n\r") + 1); // Remove espaços no final

    // Verificar se o cliente existe
    ifstream arquivoClientes("dados/clientes.txt");
    string linha;
    bool clienteEncontrado = false;

    while (getline(arquivoClientes, linha)) {
        string nomeArquivo = extrairNome(linha);  // Extrair apenas o nome da linha
        nomeArquivo.erase(0, nomeArquivo.find_first_not_of(" \t\n\r"));  // Remove espaços do nome extraído
        nomeArquivo.erase(nomeArquivo.find_last_not_of(" \t\n\r") + 1);  // Remove espaços do nome extraído

        if (toLowerCase(nomeArquivo) == toLowerCase(nomeCliente)) {
            clienteEncontrado = true;
            break;
        }
    }

    arquivoClientes.close();

    if (!clienteEncontrado) {
        cout << "\nCliente não encontrado!\n" << endl;
        return;
    }

    // Exibir o relatório de produtos cadastrados
    tipo = "produtos";
    gerarRelatorio(tipo);

    // Se o cliente foi encontrado, prosseguir com a venda
    cout << "Digite o nome do produto: ";
    getline(cin, nomeProduto);

    cout << "Digite a quantidade desejada: ";
    cin >> quantidadeVenda;

    // Verificar se o produto existe e se há quantidade suficiente
    ifstream arquivoProdutos("dados/produtos.txt");
    ofstream arquivoTemp("dados/temp.txt");
    bool produtoEncontrado = false;
    string nomeArquivoProduto;
    double precoProduto;
    int quantidadeEstoque;

    while (getline(arquivoProdutos, linha)) {
        // Dividir a linha em nome, quantidade e preço
        stringstream ss(linha);
        getline(ss, nomeArquivoProduto, ',');
        ss >> quantidadeEstoque;
        ss.ignore();  // Ignorar a vírgula
        ss >> precoProduto;

        // Remover espaços em branco extras do nome do produto
        nomeArquivoProduto.erase(0, nomeArquivoProduto.find_first_not_of(" \t\n\r"));
        nomeArquivoProduto.erase(nomeArquivoProduto.find_last_not_of(" \t\n\r") + 1);

        if (toLowerCase(nomeArquivoProduto) == toLowerCase(nomeProduto)) {
            produtoEncontrado = true;
            if (quantidadeEstoque >= quantidadeVenda) {
                // Atualizar a quantidade no estoque
                int quantidadeRestante = quantidadeEstoque - quantidadeVenda;
                cout << "\nVenda realizada com sucesso!" << endl;
                cout << "\nProduto: " << nomeProduto << " - Preço Unitario: " << precoProduto << " - Preço total: R$ "
                    << (precoProduto * quantidadeVenda) << " - Quantidade: " << quantidadeVenda << endl;
                cout << "\n\n";
                system("Pause");
                system("cls");
                // Registrar a venda no arquivo vendas.txt
                ofstream arquivoVendas("dados/vendas.txt", ios::app);
                if (arquivoVendas.is_open()) {
                    arquivoVendas << "Cliente: " << nomeCliente
                        << ", Produto: " << nomeProduto
                        << ", Quantidade: " << quantidadeVenda
                        << ", Preço Unitário: " << precoProduto
                        << ", Valor total: R$ " << (precoProduto * quantidadeVenda)
                        << endl;
                    arquivoVendas.close();
                }
                else {
                    cout << "\nErro ao abrir o arquivo de vendas para gravação!" << endl;
                }

                // Atualizar o arquivo temporário com a quantidade restante
                arquivoTemp << nomeArquivoProduto << "," << quantidadeRestante << "," << precoProduto << endl;
            }
            else {
                cout << "\nQuantidade insuficiente no estoque!" << endl;
                // Copiar a linha original para o arquivo temporário (sem mudanças)
                arquivoTemp << nomeArquivoProduto << "," << quantidadeEstoque << "," << precoProduto << endl;
                system("cls");
            }
        }
        else {
            // Produto não é o desejado, copiar linha original para o arquivo temporário
            arquivoTemp << nomeArquivoProduto << "," << quantidadeEstoque << "," << precoProduto << endl;
            system("cls");
        }
    }

    if (!produtoEncontrado) {
        cout << "\nProduto " << nomeProduto << " não encontrado!" << endl;
    }

    arquivoProdutos.close();
    arquivoTemp.close();

    // Substituir o arquivo de produtos pelo temporário se a venda foi realizada
    if (produtoEncontrado && quantidadeEstoque >= quantidadeVenda) {
        if (remove("dados/produtos.txt") != 0) {
            cout << "\nErro ao remover o arquivo original de produtos!" << endl;
        }
        else if (rename("dados/temp.txt", "dados/produtos.txt") != 0) {
            cout << "\nErro ao renomear o arquivo temporário!" << endl;
        }
    }
}