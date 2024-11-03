/*
 * Nome do Arquivo: Header.h
 * Autores: Felipe Bertelli dos Santos, Fernanda Melo, Jean Lucas Gomes Gama, Rony Siqueira da Silva,Tiago gonzaga da Silva, Marcos Antonio do Carmo Alves 
 * Data: [14/11/2024]
 * Descrição: Este arquivo de cabeçalho declara funções para exibir painéis de informações
 *            a fim de simular um ambiente Linux a partir de um terminal SSH.
 *
 * Métodos:
 * - Função `printPanel()`: Exibe um painel de informações gerais na tela principal da aplicação.
 * - Função `printCaixa()`: Exibe informações específicas para a estação Caixa.
 * - Função `printServidor()`: Exibe informações específicas para a estação Servidor.
 * - Função `printEstoque()`: Exibe informações específicas para a estação Estoque
 * - Todas as funções retornam um banner ASCII com data e hora atuais.
 *
 * Notas:
 * - O arquivo inclui a biblioteca `<windows.h>` para utilizar funções específicas do Windows,
 *   como `SetConsoleOutputCP()` para definir a codificação de caracteres do console.
 * - A função `printDateTime()` é chamada para exibir a data e hora atuais, definida no arquivo
 *   `DTime.h`.
 */


#include <iostream>
#include <string>
#include <windows.h>
#include "DTime.h"

using namespace std;

void printPanel() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "+------------------------------------------------------------------+\n";
    cout << "|               * OrgsXterm Professional Edition v24.1 *           |\n";
    cout << "|               (SSH client, X server and network tools)           |\n";
    cout << "|                                                                  |\n";
    cout << "| >> SSH session to admin@15.169.126.122                           |\n";
    cout << "|    - Direct SSH      :  [OK]                                     |\n";
    cout << "|    - SSH compression :  [OK]                                     |\n";
    cout << "|    - SSH-browser     :  [OK]                                     |\n";
    cout << "|    - X11-forwarding  :  [OK]  (remote display is forwarded)      |\n";
    cout << "|                                                                  |\n";
    cout << "| >> For more info, ctrl+click on help or visit our website.       |\n";
    cout << "+------------------------------------------------------------------+\n";
}

void printCaixa(){
	system("cls");
	cout << "Welcome to Ubuntu 18.04.6 LTS (GNU/Linux 4.9.140-tegra aarch64)\n\n";
	cout << " * Documentation:  https://help.ubuntu.com\n";
	cout << " * Management:     https://landscape.canonical.com\n";
	cout << " * Support:        https://ubuntu.com/advantage\n";
	cout << "This system has been minimized by removing packages and content that are\n";
	cout << "not required on a system that users do not log into.\n\n";
	cout << "To restore this content, you can run the 'unminimize' command.\n\n";
	cout << "432 updates can be applied immediately.\n";
	cout << "248 of these updates are standard security updates.\n";
	cout << "To see these additional updates run: apt list --upgradable\n\n";
	cout << " #####     #    ###  #     #    #    \n";
	cout << "#     #   # #    #   #   #    # #    \n";
	cout << "#        #   #   #    # #    #   #   \n";
	cout << "#       #     #  #     #    #     #  \n";
	cout << "#       #######  #    # #   #######  \n";
	cout << "#     # #     #  #   #   #  #     #  \n";
	cout << " #####  #     # ### #     # #     #  \n";
	printDateTime();
}
void printServidor(){
	system("cls");
	cout << "Welcome to Ubuntu 18.04.6 LTS (GNU/Linux 4.9.140-tegra aarch64)\n\n";
	cout << " * Documentation:  https://help.ubuntu.com\n";
	cout << " * Management:     https://landscape.canonical.com\n";
	cout << " * Support:        https://ubuntu.com/advantage\n";
	cout << "This system has been minimized by removing packages and content that are\n";
	cout << "not required on a system that users do not log into.\n\n";
	cout << "To restore this content, you can run the 'unminimize' command.\n\n";
	cout << "432 updates can be applied immediately.\n";
	cout << "248 of these updates are standard security updates.\n";
	cout << "To see these additional updates run: apt list --upgradable\n\n";
	cout << "#####  ####### ######  #     # ### ######  ####### ######  " << endl;
	cout << "#     # #       #     # #     #  #  #     # #     # #     # " << endl;
	cout << "#       #       #     # #     #  #  #     # #     # #     # " << endl;
	cout << " #####  #####   ######  #     #  #  #     # #     # ######  " << endl;
	cout << "      # #       #   #    #   #   #  #     # #     # #   #   " << endl;
	cout << "#     # #       #    #    # #    #  #     # #     # #    #  " << endl;
	cout << " #####  ####### #     #    #    ### ######  ####### #     # " << endl;
	printDateTime();
}
void printEstoque(){
	system("cls");
	cout << "Welcome to Ubuntu 18.04.6 LTS (GNU/Linux 4.9.140-tegra aarch64)\n\n";
	cout << " * Documentation:  https://help.ubuntu.com\n";
	cout << " * Management:     https://landscape.canonical.com\n";
	cout << " * Support:        https://ubuntu.com/advantage\n";
	cout << "This system has been minimized by removing packages and content that are\n";
	cout << "not required on a system that users do not log into.\n\n";
	cout << "To restore this content, you can run the 'unminimize' command.\n\n";
	cout << "432 updates can be applied immediately.\n";
	cout << "248 of these updates are standard security updates.\n";
	cout << "To see these additional updates run: apt list --upgradable\n\n";
	cout << "#######  #####  ####### #######  #####  #     # ####### " << endl;
	cout << "#       #     #    #    #     # #     # #     # #       " << endl;
	cout << "#       #          #    #     # #     # #     # #       " << endl;
	cout << "#####    #####     #    #     # #     # #     # #####   " << endl;
	cout << "#             #    #    #     # #   # # #     # #       " << endl;
	cout << "#       #     #    #    #     # #    #  #     # #       " << endl;
	cout << "#######  #####     #    #######  #### #  #####  ####### " << endl;
	printDateTime();
}