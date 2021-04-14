//
// Created by Adriano on 14/04/2021.
//

#include "otherFunctions.h"

void signature(){
    //Assinatura é assim mesmo. NÃO MEXER
    cout << "   _______   _______   __      __   ___________   ________    _     _    ________     __" << endl;
    cout << " /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |   |__|" << endl;
    cout << " |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|    __" << endl;
    cout << " |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \\ \\      |  |" << endl;
    cout << " |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \\ \\     |  |" << endl;
    cout << "  \\______/  |______|  |___/   |_|      |__|      |__|  |__|   \\_____/   |_|  \\__\\    |__|"  << endl;
}
void devInfo(){
    cout << "Information for Developers:\n";
    cout << "Dev: c3nt4ur1\n";
    cout << "Version: 1.1.0\n";
    cout << "Compiler: MinGw 4.4.1\n";
    cout << "Project structure: CMake\n";
    cout << "Dev's OS: Win10 20h2\n";
    cout << "Documentation avaliable in: https://github.com/c3nt4ur1/HyperCalc\n\n";
}
void help(){
    cout << "Primeiro digite qual a categoria de calculo que deseja usar e pressione ENTER. Depois, digite o numero da";
    cout << "opcao desejada dentro da categoria e pressione ENTER novamente. Depois insira os valores pedidos e pressione";
    cout << "ENTER depois de cada valor. Para sair do programa, ao final do cálculo, pressione qualquer tecla.\n";
}
void about(){
    //0x2B = + em hexadecimal
    cout << "This is a calculator for mathematical formulas, created by c3nt4ur1. It calculates all sorts of formulas, ";
    cout << "like geometrical formulas, or even Bhaskara's. It is developed in C" << 0x2B << 0x2B <<  "in order to improve the program's ";
    cout << "speed. For tecnical infomation, reload the program and input the categorie h.\n";
}
