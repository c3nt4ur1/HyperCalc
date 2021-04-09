//
// Created by c3nt4ur1 on 07/04/2021.
//
#include <iostream>
#include "mainFuncs.h"
#include "mymath.h"
using namespace std;

void cat1(){
    double num1;
    double num2;

    char operacao;

    cout << "Digite o numero da operacao desejada: \n";
    cout << "1)Soma\n";
    cout << "2)Subtracao\n";
    cout << "3)Multiplicacao\n";
    cout << "4)Divisao\n";

    cin >> operacao;

    switch (operacao) {
        case '1':
            cout << "Digite a primeira parcela: ";
            cin >> num1;
            cout << "Digite a segunda parcela: ";
            cin >> num2;

            double total;
            total = soma(num1, num2);
            cout << "TOTAL: " << total << endl;


        case '2':
            cout << "Digite o minuendo: ";
            cin >> num1;
            cout << "Digite o subtraendo: ";
            cin >> num2;

            double resto;
            resto = subtracao(num1, num2);
            cout << "RESTO: " << resto << endl;

        case '3':
            cout << "Digite o primeiro fator: ";
            cin >> num1;
            cout << "Digite o segundo fator: ";
            cin >> num2;

            double produto;
            produto = multiplicacao(num1, num2);
            cout << "PRODUTO: " << produto << endl;

        case '4':
            cout << "Digite o dividendo: ";
            cin >> num1;
            cout << "Digite o divisor: ";
            cin >> num2;

            double quociente;
            quociente = divisao(num1, num2);
            cout << "QUOCIENTE: " << quociente;

        default:
            cout << "Operacao Invalida\n";

    }
}
void cat2(){
    char funcao;

    cout << "Digite a funcao desejada: \n";

    cout << "1)Area de Quadrado\n";
    cout << "2)Volume de um Cubo\n";
    cout << "3)Area de Triangulo\n";
    cout << "4)Soma dos Angulos Internos\n";
    cout << "5)Angulo Interno\n";
    cout << "6)Angulo Externo\n";
    cout << "7)Hipotenusa\n";
    cout << "8)Cateto\n";
    cin >> funcao;

    double area;
    double lados;


    if (funcao == '1') {
        cout << "Digite o lado do quadrado: ";
        cin >> lados;

        area = area_quadrado(lados);

        cout << "AREA: " << area << endl;

    } else if (funcao == '2') {
        cout << "Digite a medida do lado do cubo: ";
        cin >> lados;

        double vol_cubo = volume_cubo(lados);
        cout << vol_cubo;

    } else if (funcao == '3') {
        double base;
        double altura;

        cout << "Digite a base do triangulo: ";
        cin >> base;
        cout << "Digite a altura do triangulo: ";
        cin >> altura;

        area = area_triangulo(base, altura);
        cout << "AREA: " << area << endl;

    } else if (funcao == '4') {
        cout << "Digite o numero de lados da figura: ";
        cin >> lados;

        double soma_angulos_internos;
        soma_angulos_internos = si(lados);
        cout << "SOMA DOS ANGULOS INTERNOS: " << soma_angulos_internos << endl;

    } else if (funcao == '5') {
        cout << "Digite o numero de lados da figura: ";
        cin >> lados;

        double angulo_interno;

        angulo_interno = ai(lados);
        cout << "VALOR DE UM ANGULO INTERNO: " << angulo_interno << endl;

    } else if (funcao == '6') {
        cout << "Digite o numero de lados da figura: ";
        cin >> lados;

        double angulo_externo;

        angulo_externo = ae(lados);
        cout << "VALOR DE UM ANGULO EXTERNO: " << angulo_externo << endl;

    } else if (funcao == '7') {
        double ca, co, hi;

        cout << "Digite o Cateto Adjacente: ";
        cin >> ca;
        cout << "Digite o Cateto Oposto: ";
        cin >> co;

        hi = hipo(ca, co);
        cout << "HIPOTENUSA: " << hi << endl;

    } else if (funcao == '8') {
        double cat1, cat2, hi;

        cout << "Digite o Cateto Conhecido: ";
        cin >> cat1;
        cout << "Digite a Hipotenusa: ";
        cin >> hi;

        cat2 = cat(cat1, hi);
        cout << "CATETO DESCONHECIDO: " << cat2 << endl;

    }
}
void cat3(){
    char op;

    cout << "Selecione a operacao desejada: \n";
    cout << "1)Potencia\n";
    cout << "2)Raiz Quadrada\n";
    cin >> op;

    if (op == '1') {
        double base;
        double expoente;

        cout << "Digite a base: ";
        cin >> base;
        cout << "Digite o expoente: ";
        cin >> expoente;

        double power = potencia(base, expoente);
        cout << "POTENCIA " << expoente << " DE " << base << ": " << power << endl;

    } else if (op == '2') {
        double radical;

        cout << "Digite o radical: ";
        cin >> radical;

        double raiz = raiz_quadrada(radical);
        cout << "A raiz quadrada de " << radical << " e: " << raiz << endl;
    }
}
void cat4(){
    char equacao;
    cout << "Digite o tipo de equacao: \n";
    cout << "1)Bhaskara\n";
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
    cout << "Digite a formula desejada:\n";
    cout << "DENSIDADE\n";
    cout << "1)Densidade\n";
    cout << "2)Volume\n";
    cout << "3)Massa\n";
    cout << "TEMPERATURA\n";
    cout << "4)Celsius - Farenheit\n";
    cout << "5)Farenheit - Celsius\n";
    cout << "6)Celsius - Kelvin\n";
    cout << "7)Kelvin - Celsius\n";
    cin >> formula;

    double densidade, massa, volume;

    if (formula == 1) {
        cout << "Digite a massa: ";
        cin >> massa;
        cout << "Digite o volume: ";
        cin >> volume;
        densidade = fun_densidade(massa, volume);

        cout << "DENSIDADE: " << densidade << endl;

        cout << "Pressione qualquer tecla para continuar...\n";
        cin.ignore();
        cin.get();

    } else if (formula == 2) {
        cout << "Digite a massa: ";
        cin >> massa;
        cout << "Digite a densidade: ";
        cin >> densidade;

        volume = fun_volume(densidade, massa);

        cout << "VOLUME: " << volume << endl;

        cout << "Pressione qualquer tecla para continuar...\n";
        cin.ignore();
        cin.get();

    } else if (formula == 3) {
        cout << "Digite a densidade: ";
        cin >> densidade;
        cout << "Digite o volume: ";
        cin >> volume;

        massa = fun_massa(volume, densidade);
        cout << "MASSA: " << massa << endl;

        cout << "Pressione qualquer tecla para continuar...\n";
        cin.ignore();
        cin.get();
    }


    if (formula >= 4 && formula <= 7) {
        double temp_celsius, temp_farenheit, temp_kelvin;

        if (formula == 4) {

            cout << "Digite a temperatura na escala Celsius\n";
            cin >> temp_celsius;
            temp_farenheit = cel_fare(temp_celsius);

            cout << "TEMPERATURA EM GRAUS FARENHEIT: " << temp_farenheit << "F\n";

            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();

        } else if (formula == 5) {
            cout << "Digite a temperatura na escala Farenheit: ";
            cin >> temp_farenheit;

            temp_celsius = fare_cel(temp_farenheit);

            cout << "TEMPERATURA EM GRAUS CELSIUS: " << temp_celsius << "C\n";

            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();

        } else if (formula == 6) {
            cout << "Digite a temperatura na escala Celsius: ";
            cin >> temp_celsius;

            temp_kelvin = cel_kel(temp_celsius);

            cout << "TEMPERATURA EM GRAUS KELVIN: " << temp_kelvin << "K\n";

            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();

        } else if (formula == 7) {
            cout << "Digite a temperatura em graus Kelvin: ";
            cin >> temp_kelvin;

            temp_celsius = kel_cel(temp_kelvin);

            cout << "TEMPERATURA EM GRAUS CELSIUS: " << temp_celsius << "C\n";

            cout << "Pressione qualquer tecla para continuar...\n";
            cin.ignore();
            cin.get();
        }

    }
}