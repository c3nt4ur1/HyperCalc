//©c3nt4ur1 - 2021

//Inclusões
/*
 * windows.h -> Título do console
 */
#include <iostream>
#include <windows.h>
#include "mainFuncs.h"
/*
 * Constantes de opções
 * Substituem os char's no control-flow
 */
#define OPERACOES_BASICAS '1'
#define FORMULAS_GEOMETRICAS '2'
#define POTENCIAS_E_RAIZES '3'
#define EQUACOES '4'
#define FORMULAS_FISICAS '5'
//Namespaces
using namespace std;
int main() {
    //Configuração do Console
    SetConsoleTitle("HyperCalc");
    while (true) {
        char categoria;

        cout << "Digite o numero da categoria de calculo desejado: \n";
        cout << "1)Operacoes Basicas\n";
        cout << "2)Formulas geometricas\n";
        cout << "3)Potencias e Raizes\n";
        cout << "4)Equacoes\n";
        cout << "5)Formulas Fisicas\n";
        cin >> categoria;

        if (categoria == OPERACOES_BASICAS) {
            cat1();
            //em mainFuncs.cpp/.h
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == FORMULAS_GEOMETRICAS) {
            cat2();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == POTENCIAS_E_RAIZES) {
            cat3();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);

        } else if (categoria == EQUACOES) {

            cat4();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);
        } else if (categoria == FORMULAS_FISICAS) {
            cat5();
            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
            exit(0);

        } else {
            cout << "Opcao Invalida\n";
            cout << endl;
        }
    }
}

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|
