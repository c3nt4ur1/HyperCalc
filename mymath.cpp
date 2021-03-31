/*
 *  Created by c3nt4ur1 on 18/03/2021.
 */

#include <iostream>
#include <cmath>
#include "mymath.h"

using namespace std;

/*
 * Funções Aritméticas Simples
 */

double soma (double n1, double n2)
{
    return n1 + n2;
}

double subtracao (double minuendo, double subtraendo)
{
    return minuendo - subtraendo;
}

double multiplicacao (double fat1, double fat2)
{
    return fat1 * fat2;
}

double divisao (double dividendo, double divisor)
{
    return dividendo / divisor;
}

/*
 * Potência de qualquer grau double e raizes quadradas
 */

double potencia(double base, double expoente)
{
    double potencia_result = pow(base, expoente);

    return potencia_result;
}

double raiz_quadrada(double radical)
{
    return sqrt(radical);
}
/*
 * Equações
 */
void
bhaskara(double a, double b, double c){
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
/*
 * Funções Geométricas
 */

double area_triangulo (double base, double altura)
{
    return (base * altura) / 2;
}

double area_quadrado (double lado)
{
    return (double)lado * lado;
}

double volume_cubo(double lado)
{
    return lado * lado * lado;
}
double hipo(double a, double b)
{
    double hipotenusa = sqrt((a * a) + (b * b));
    return hipotenusa;
}
double cat(double a, double c)
{
    //a = cateto, c = hipotenusa
    double cateto = sqrt((c * c) - (a * a));
    return cateto;
}
double si (double n)
{
    //n = Número de Lados da Figura

    double soma_angulos_internos = (n - 2) * 180;
    return soma_angulos_internos;
}

double ai(double n)
{
    //n = Número de Lados da Figura

    double soma_interna = si(n);
    double angulo_interno = soma_interna / n;
    return angulo_interno;
}

double ae (double n)
{
    double angulos_externos = 360 / n;
    return angulos_externos;
}

//Funções Físicas
double fun_densidade(double massa, double volume){
    return massa / volume;
}
double fun_massa(double volume, double densidade){
    return volume * densidade;
}
double fun_volume(double densidade, double massa){
    return massa / densidade;
}
double cel_fare(double temp_celsius){
    double temp_farenheit = (temp_celsius * 1.8) + 32;
    return temp_farenheit;
}
double fare_cel(double temp_farenheit){
    double temp_celsius = (temp_farenheit  -32) * 1.8;
    return temp_celsius;
}
double cel_kel(double temp_celsius){
    double temp_kelvin = temp_celsius + 273;
    return temp_kelvin;
}
double kel_cel(double temp_kelvin) {
    double temp_celsius = temp_kelvin - 273;
    return temp_celsius;
}