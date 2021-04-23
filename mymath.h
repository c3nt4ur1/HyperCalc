//©c3nt4ur1 - 2021

/*
 * Created by c3nt4ur1 on 18/03/2021.
 */

#ifndef GEOCALC_MYMATH_H
#define GEOCALC_MYMATH_H

//Quatro Operações
inline namespace maths {
    double soma(double n1, double n2);
    double subtracao(double minuendo, double subtraendo);
    double multiplicacao(double fat1, double fat2);
    double divisao(double dividendo, double divisor);
//Potência de qualquer grau double e raizes quadradas
    double potencia(double base, int expoente);
    double raiz_quadrada(double radical);
//Equações
    void bhaskara(double a, double b, double c);
//Funções Geométricas
    double area_triangulo(double base, double altura);
    double area_quadrado(double lado);
    double volume_cubo(double lado);
    double hipo(double a, double b);
    double cat(double a, double c);
    double si(double n);
    double ai(double n);
    double ae(double n);
//Funções Físicas
    double densidade(double massa, double volume);
    double massa(double volume, double densidade);
    double volume(double densidade, double massa);
    double cel_fare(double temp_celsius);
    double fare_cel(double temp_farenheit);
    double cel_kel(double temp_celsius);
    double kel_cel(double temp_kelvin);
}
//Funções de teste
bool isPrime(int num);
void divisores(int n);

#endif //GEOCALC_MYMATH_H

//   _______   _______   __      __   ___________   ________    _     _    ________    __
// /  _____/  | _____|  | |    /  |  |___    ___|  |   ___  |  | |   | |  |   ___  |  |__|
// |  |       | |___    | |  / /| |      |  |      |  |__|  |  | |   | |  |  |__| _|   __
// |  |       | ____|   | | / / | |      |  |      |   __   |  | |   | |  | | \ \     |  |
// |  |____   | |____   | |/ /  | |      |  |      |  |  |  |  | |___| |  | |  \ \    |  |
// \_______/  |______|  |___/   |_|      |__|      |__|  |__|   \_____/   |_|   \_\   |__|