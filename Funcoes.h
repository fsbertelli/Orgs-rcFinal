/*
 * Nome do Arquivo: Funcoes.h
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descrição: Este arquivo de cabeçalho declara todas as funções utilizadas na aplicação.
 *            As funções abrangem operações de cadastro de clientes,
 *            produtos e fornecedores, realização de vendas e geração de relatórios.
 *
 * Métodos:
 * - Declaração da Função `cadastrarCliente()`: Permite ao usuário o cadastro de novos clientes.
 * - Declaração da Função `realizarVenda()`: Permite ao usuário a realização de vendas, verificando
 *   a disponibilidade de produtos e registrando a transação.
 * - Declaração da Função `gerarRelatorio(const std::string& tipo)`: Permite ao usuário gerar relatórios
 *   baseados no tipo especificado, como "clientes", "fornecedores", "produtos" ou "vendas".
 * - Declaração da Função `cadastrarFornecedor()`: Permite ao usuário o cadastro de novos fornecedores.
 * - Declaração da Função `cadastrarProduto()`: Permite ao usuário o cadastro de novos produtos.
 *
 * Notas:
 * - Este arquivo utiliza diretivas de pré-processador para evitar múltiplas inclusões, garantindo
 *   que o conteúdo seja incluído apenas uma vez durante a compilação.
 */


#include <string>


#ifndef FUNCOES_H
#define FUNCOES_H

void cadastrarCliente();
void realizarVenda();
void gerarRelatorio(const std::string& tipo);
void cadastrarFornecedor();
void cadastrarProduto();

#endif
