/*
 * Nome do Arquivo: Funcoes.h
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves
 * Data: [14/11/2024]
 * Descri��o: Este arquivo de cabe�alho declara todas as fun��es utilizadas na aplica��o.
 *            As fun��es abrangem opera��es de cadastro de clientes,
 *            produtos e fornecedores, realiza��o de vendas e gera��o de relat�rios.
 *
 * M�todos:
 * - Declara��o da Fun��o `cadastrarCliente()`: Permite ao usu�rio o cadastro de novos clientes.
 * - Declara��o da Fun��o `realizarVenda()`: Permite ao usu�rio a realiza��o de vendas, verificando
 *   a disponibilidade de produtos e registrando a transa��o.
 * - Declara��o da Fun��o `gerarRelatorio(const std::string& tipo)`: Permite ao usu�rio gerar relat�rios
 *   baseados no tipo especificado, como "clientes", "fornecedores", "produtos" ou "vendas".
 * - Declara��o da Fun��o `cadastrarFornecedor()`: Permite ao usu�rio o cadastro de novos fornecedores.
 * - Declara��o da Fun��o `cadastrarProduto()`: Permite ao usu�rio o cadastro de novos produtos.
 *
 * Notas:
 * - Este arquivo utiliza diretivas de pr�-processador para evitar m�ltiplas inclus�es, garantindo
 *   que o conte�do seja inclu�do apenas uma vez durante a compila��o.
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
