//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 7
//#########################################

#include <stdio.h>
#include "bits/stdc++.h"

int main(void) {
// 7
	printf("Exercicio 7\n\n");

	float raio, area;
	double pi = 2 * acos(0.0);
	
	fflush(stdin);
	printf("Entre com o raio do circulo\n");
	scanf("%f", &raio);

	area = 2 * pi * raio;

	printf("A area do circulo eh:%f\n", area);
}
