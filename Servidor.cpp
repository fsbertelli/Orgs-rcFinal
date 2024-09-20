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
