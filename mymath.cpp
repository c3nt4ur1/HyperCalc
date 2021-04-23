//©c3nt4ur1 - 2021

//
//  Created by c3nt4ur1 on 18/03/2021.
//

//Funções matemáticas para serem usadas nas mainFuncs
#include <iostream>
#include <cmath>
#include "mymath.h"
using namespace std;

inline namespace maths {
    // Funções Aritméticas Simples
    double soma (double n1, double n2){return n1 + n2;}
    double subtracao (double minuendo, double subtraendo){return minuendo - subtraendo;}
    double multiplicacao (double fat1, double fat2){return fat1 * fat2;}
    double divisao (double dividendo, double divisor){return dividendo / divisor;}

    //Potência de qualquer grau int e raizes quadradas
    double potencia(double base, int expoente){
        double potencia = base;
        for(int i = 1; i < expoente; i++){
            potencia *= base;
        }
        return potencia;
    }
    double raiz_quadrada(double radical){return sqrt(radical);}
    //Equações
    void bhaskara(double a, double b, double c){
        double delta = (b * b) - (4 * a * c);
        if (a != 0){
            if (delta > 0){
                double root1, root2;
                root1 = (-b + sqrt(delta)) / (2 * a);
                root2 = (-b - sqrt(delta)) / (2 * a);

                cout << "RAIZ PARA +SQRT(DELTA): " << root1 << endl;
                cout << "RAIZ PARA -SQRT(DELTA): " << root2 << endl;
            }else if(delta == 0){
                double root1 = (-b) / (2 * a);
                cout << "A EQUACAO TEM UMA RAIZ: " << root1 << endl;
            }else{
                cout << "A EQUACAO NAO TEM RAIZES REAIS\n";
            }
        }else{
            cout << "A = 0. EQUAÇÃO NÃO É DO SEGUNDO GRAU.\n";
        }
    }
    //Funções Geométricas
    double area_triangulo(double base, double altura) { return (base * altura) / 2; }
    double area_quadrado(double lado) { return (double) lado * lado; }
    double volume_cubo(double lado) { return lado * lado * lado; }
    double hipo(double a, double b) { return sqrt((a * a) + (b * b)); }
    double cat(double a, double c) { return sqrt((c * c) - (a * a)); }
    double si(double n) { return (n - 2) * 180; }
    double ai(double n) { return si(n) / n; }
    double ae(double n) { return 360 / n; }

    //Funções Físicas
    double densidade(double massa, double volume) { return massa / volume; }
    double massa(double volume, double densidade) { return volume * densidade; }
    double volume(double densidade, double massa) { return massa / densidade; }
    double cel_fare(double temp_celsius) { return (temp_celsius * 1.8) + 32; }
    double fare_cel(double temp_farenheit) { return (temp_farenheit - 32) * 1.8; }
    double cel_kel(double temp_celsius) { return temp_celsius + 273; }
    double kel_cel(double temp_kelvin) { return temp_kelvin - 273; }

    //Outras Funções
    int fat(int n){
        for(int i = 0; i < n; i++){
            n *= i;
        }
        return n;
    }
}
//Funções Para Testar Números
bool isPrime(int num){
    int divisors = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            divisors++;
    }
    if(divisors == 2)
        return true;
    else
        return false;
}
void divisores(int n){
    int* results = new int[30];

    if(isPrime(n)){
        cout << "Divisores de " << n << ": 1 e " << n << endl;
        cout << "O numero e primo\n";
        return;
    }else{
        for(int i = 1; i < (n + 1); i ++){
            if(n % i == 0)
                results[i - 1] = i;
        }
    }
    cout << "Divisores de " << n << ": ";
    for(int i = 0; i < n; i++){
        cout << results[i] << ", ";
    }
    cout << endl;
}//Outras Funções

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|