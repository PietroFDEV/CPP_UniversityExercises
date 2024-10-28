//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 6
//#########################################

#include <stdio.h>

int main(void) {
// 6
	printf("Exercicio 6\n\n");

	float num1, num2, hipotenusa, perimetro;
	
	fflush(stdin);
	printf("Entre com a base do triangulo\n");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf("Entre com a altura do triangulo\n");
	scanf("%f", &num2);
	
	hipotenusa = (num1 + num2);
	
	perimetro = hipotenusa * 2;

	printf("A perimetro do triangulo eh:%f\n", hipotenusa);
}
