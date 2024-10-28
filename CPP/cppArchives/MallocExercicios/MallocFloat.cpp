//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//# Exercicio 2
//#########################################

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	float *p_vetor[5];
	
	for(int x = 0; x <= 4; x++) {
		p_vetor[x] = (float*)malloc(sizeof(float));
	}
	
	for(int x = 0; x <= 4; x++) {
		*p_vetor[x] = (x+1);
	}

	for(int x = 0; x <= 4; x++) {
		printf("ptos:%f \n",*p_vetor[x]);
	}
	
	getch();
	return(0);
}
