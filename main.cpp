//©c3nt4ur1 - 2021

//Funções em mainFuncs.cpp:
//void cat1(), void cat2(), void cat3(), void cat4(), void cat5().

//Inclusões
#include <iostream> //I/O Básico
#include <windows.h> //Título do console
#include "mainFuncs.h" //Chamadas dentro das categorias 1-5 -> Substitui o código pra fazer o controle de fluxo
#include "otherFunctions.h" //Outras funções
//Namespaces
using namespace std;
int main() {
    //Configuração do Console
    SetConsoleTitle("HyperCalc"); //Título do Console
    SetConsoleCtrlHandler(nullptr, true); //Habilita os comandos Ctrl+C e Ctrl+V para cópia e cola
    //Programa vai dentro desse loop
    cout << "@github.com/c3nt4ur1 - 2021\n";
    signature();
    cout << "\nBem vindo ao HyperCalc!\n\n";
    while(true) {
        char categoria;
        cout << "Digite o numero da categoria de calculo desejado: \n";
        cout << "1)Operacoes Basicas\n";
        cout << "2)Formulas geometricas\n";
        cout << "3)Potencias e Raizes\n";
        cout << "4)Equacoes\n";
        cout << "5)Formulas Fisicas\n";
        cout << "6)Testes de Numeros\n";
        cout << "7)Outras Funcoes\n\n";
        cout << "Para ajuda digite 'h'. Para mais informacoes digite 'a'.\n";
        cin >> categoria;

        if(categoria) {
            if (categoria == '1') {
                cat1();
                cout << "Pressione qualquer tecla para continuar...\n\n";
                cin.ignore();
                cin.get();
                signature();
                return 0;
            } else if (categoria == '2') {
                cat2();
                cout << "Pressione qualquer tecla para continuar...\n\n";
                cin.ignore();
                cin.get();
                signature();
                return 0;
            } else if (categoria == '3') {
                cat3();
                cout << "Pressione qualquer tecla para continuar...\n\n";
                cin.ignore();
                cin.get();
                signature();
                return 0;
            } else if (categoria == '4') {
                cat4();
                cout << "Pressione qualquer tecla para continuar...\n\n";
                cin.ignore();
                cin.get();
                signature();
                return 0;
            } else if (categoria == '5') {
                cat5();
                cout << "Pressione qualquer tecla para continuar...\n\n";
                cin.ignore();
                cin.get();
                signature();
                return 0;
            } else if (categoria == '6') {
                cat6();
                cout << "Pressione qualquer tecla para continuar...\n\n";
                cin.ignore();
                cin.get();
                signature();
                return 0;
            } else if(categoria == '7'){
                cat7();
                cout << "Pressione qualquer tecla para continuar...\n\n";
                cin.ignore();
                cin.get();
                signature();
                return 0;
            }else if (categoria == 'h' || categoria == 'H') {
                help();
                char retornar;
                cout << "Deseja voltar a tela inicial?(S/N)";
                cin >> retornar;
                if (retornar == 'S' || retornar == 's') {
                    continue;
                } else {
                    return 0;
                }
            } else if (categoria == 'd' || categoria == 'D') {
                devInfo();
                char retornar;
                cout << "Deseja voltar a tela inicial?(S/N)";
                cin >> retornar;
                if (retornar == 'S' || retornar == 's') {
                    cout << endl;
                    continue;
                } else {
                    return 0;
                }
            } else if (categoria == 'a' || categoria == 'A') {
                about();
                char retornar;
                cout << "Deseja voltar a tela inicial?(S/N)";
                cin >> retornar;
                if (retornar == 'S' || retornar == 's') {
                    cout << endl;
                    continue;
                } else {
                    return 0;
                }
            }
            cout << "Opcao Invalida!\nCarregando a ajuda...\n\n";
            help();
            char retornar;
            cout << "Deseja voltar a tela inicial?(S/N)";
            cin >> retornar;
            if (retornar == 'S' || retornar == 's') {
                cout << endl;
                continue;
            } else {
                return 1;
            }
        }else{
            return -1;
        }
    }
}

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|