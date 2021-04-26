//©c3nt4ur1 - 2021

/*
 * Created by c3nt4ur1 on 07/04/2021.
 */
#include <iostream>
#include "mainFuncs.h"
#include "mymath.h"
using namespace std;
using namespace basicOps;
using namespace rootsAndPowers;
using namespace geometry;
using namespace equations;
using namespace phisics;
using namespace tests;

void cat1(){
    double num1, num2;
    char operacao;
    cout << "Digite o numero da operacao desejada: \n";
    cout << "1)Soma\n" << "2)Subtracao\n" << "3)Multiplicacao\n" << "4)Divisão\n";
    cin >> operacao;

    if(operacao == '1'){
        cout << "Digite a primeira parcela: ";
        cin >> num1;
        cout << "Digite a segunda parcela: ";
        cin >> num2;
        cout << "TOTAL: " << soma(num1, num2) << endl;
    }else if(operacao == '2'){
        cout << "Digite o minuendo: ";
        cin >> num1;
        cout << "Digite o subtraendo: ";
        cin >> num2;
        cout << "RESTO: " << subtracao(num1, num2) << endl;
    }else if(operacao == '3'){
        cout << "Digite o primeiro fator: ";
        cin >> num1;
        cout << "Digite o segundo fator: ";
        cin >> num2;
        cout << "PRODUTO: " << multiplicacao(num1, num2) << endl;
    }else if(operacao == '4'){
        cout << "Digite o dividendo: ";
        cin >> num1;
        cout << "Digite o divisor: ";
        cin >> num2;
        cout << "QUOCIENTE: " << divisao(num1, num2) << endl;
    }else {
        cout << "Operacao Invalida\n";
    }
}
void cat2(){
    char funcao;

    cout << "Digite a funcao desejada:\n";
    cout << "1)Area de Quadrado\n" << "2)Volume de um Cubo\n" << "3)Area de Triangulo\n" << "4)Soma dos Angulos Internos\n" << "5)Angulo Interno\n" <<
    "6)Angulo Externo\n" << "7)Hipotenusa\n" << "8)Cateto\n";
    cin >> funcao;

    double lados;


    if (funcao == '1') {
        cout << "Digite o lado do quadrado: ";
        cin >> lados;
        cout << "AREA: " << area_quadrado(lados) << endl;

    } else if (funcao == '2') {
        cout << "Digite a medida do lado do cubo: ";
        cin >> lados;
        cout << volume_cubo(lados) << endl;

    } else if (funcao == '3') {
        double base, altura;

        cout << "Digite a base do triangulo: ";
        cin >> base;
        cout << "Digite a altura do triangulo: ";
        cin >> altura;
        cout << "AREA: " << area_triangulo(base, altura) << endl;
    } else if (funcao == '4') {
        cout << "Digite o numero de lados da figura: ";
        cin >> lados;
        cout << "SOMA DOS ANGULOS INTERNOS: " << si(lados) << endl;
    } else if (funcao == '5') {
        cout << "Digite o numero de lados da figura: ";
        cin >> lados;
        cout << "VALOR DE UM ANGULO INTERNO: " << ai(lados) << endl;
    } else if (funcao == '6') {
        cout << "Digite o numero de lados da figura: ";
        cin >> lados;
        cout << "VALOR DE UM ANGULO EXTERNO: " << ae(lados) << endl;
    } else if (funcao == '7') {
        double ca, co;

        cout << "Digite o Cateto Adjacente: ";
        cin >> ca;
        cout << "Digite o Cateto Oposto: ";
        cin >> co;
        cout << "HIPOTENUSA: " << hipo(ca, co) << endl;
    } else if (funcao == '8') {
        double cat1, hi;

        cout << "Digite o Cateto Conhecido: ";
        cin >> cat1;
        cout << "Digite a Hipotenusa: ";
        cin >> hi;
        cout << "CATETO DESCONHECIDO: " << cat(cat1, hi) << endl;
    }
}
void cat3(){
    char op;
    cout << "Selecione a operacao desejada: \n" << "1)Potencia\n" << "2)Raiz Quadrada\n";
    cin >> op;

    if (op == '1') {
        double base;
        int expoente;
        cout << "Digite a base: ";
        cin >> base;
        cout << "Digite o expoente: ";
        cin >> expoente;
        cout << "POTENCIA " << expoente << " DE " << base << ": " << potencia(base, expoente) << endl;
    } else if (op == '2') {
        double radical;
        cout << "Digite o radical: ";
        cin >> radical;
        cout << "A raiz quadrada de " << radical << " e: " << raiz_quadrada(radical) << endl;
    }
}
void cat4(){
    char equacao;
    cout << "Digite o tipo de equacao: \n" << "1)Bhaskara\n";
    cin >> equacao;

    if (equacao == '1') {
        double a, b, c;
        cout << "Digite o coeficiente A:";
        cin >> a;
        cout << "Digite o coeficiente B:";
        cin >> b;
        cout << "Digite o coeficiente C:";
        cin >> c;
        bhaskara(a, b, c);
    }
}
void cat5(){
    int formula;
    cout << "Digite a formula desejada:\n" << "DENSIDADE\n" << "1)Densidade\n" << "2)Volume\n" << "2)Volume\n" << "3)Massa\n" << "TEMPERATURA\n"
            << "4)Celsius - Farenheit\n" << "5)Farenheit - Celsius\n" << "6)Celsius - Kelvin\n" << "7)Kelvin - Celsius\n";
    cin >> formula;
    if (formula == 1) {
        double massa, volume;
        cout << "Digite a massa: ";
        cin >> massa;
        cout << "Digite o volume: ";
        cin >> volume;
        cout << "DENSIDADE: " << densidade(massa, volume) << endl;
    } else if (formula == 2) {
        double densidade, massa;
        cout << "Digite a massa: ";
        cin >> massa;
        cout << "Digite a densidade: ";
        cin >> densidade;
        cout << "VOLUME: " << volume(densidade, massa) << endl;
    } else if (formula == 3) {
        double densidade, volume;
        cout << "Digite a densidade: ";
        cin >> densidade;
        cout << "Digite o volume: ";
        cin >> volume;
        cout << "MASSA: " << massa(volume, densidade) << endl;
    }
    if (formula >= 4 && formula <= 7) {
        double temp_celsius, temp_farenheit, temp_kelvin;

        if (formula == 4) {

            cout << "Digite a temperatura na escala Celsius\n";
            cin >> temp_celsius;
            cout << "TEMPERATURA EM GRAUS FARENHEIT: " << cel_fare(temp_celsius) << "F\n";
        } else if (formula == 5) {
            cout << "Digite a temperatura na escala Farenheit: ";
            cin >> temp_farenheit;
            cout << "TEMPERATURA EM GRAUS CELSIUS: " << fare_cel(temp_farenheit) << "C\n";
        } else if (formula == 6) {
            cout << "Digite a temperatura na escala Celsius: ";
            cin >> temp_celsius;
            cout << "TEMPERATURA EM GRAUS KELVIN: " << cel_kel(temp_celsius) << "K\n";
        } else if (formula == 7) {
            cout << "Digite a temperatura em graus Kelvin: ";
            cin >> temp_kelvin;
            cout << "TEMPERATURA EM GRAUS CELSIUS: " << kel_cel(temp_kelvin) << "C\n";
        }

    }
}
void cat6() {
    char op;
    cout << "Qual teste deseja?\n" << "1)Primo\n" << "2)Divisores\n";
    cin >> op;
    if (op == '1') {
        int n;
        cout << "Digite o numero a ser testado: ";
        cin >> n;
        if (isPrime(n))
            cout << "O numero " << n << " e primo.\n";
        else
            cout << "O numero " << n << " nao e primo\n";
    }else if(op == '2'){
        int n;
        cout << "Digite o número a ser testado: ";
        cin >> n;
        divisores(n);
    }
}
void cat7(){
    char op;
    cout << "1)Fatorial\n";
    cout << "Digite a operacao desejada: ";
    cin >> op;
    if(op == '1'){
        int n;
        cout << "Digite o numero desejado: ";
        cin >> n;
        cout << fatorial(n) << endl;
    }
}
//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|