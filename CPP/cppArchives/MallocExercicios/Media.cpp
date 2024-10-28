//#########################################
//# Nome do Programa: Examples
//# Autor: Pietro
//#########################################

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	float *p_n1,*p_n2,*p_n3,*media;

    p_n1 = (float*)malloc(sizeof(float));

    p_n2 = (float*)malloc(sizeof(float));

    p_n3 = (float*)malloc(sizeof(float));

        
    *p_n1=2;

    *p_n2=4;

    *p_n3=8;  

      

    printf("ptos:%x %x %x \n",p_n1,p_n2,p_n3);

    

printf("media:%f\n",(*p_n1 + *p_n2 + *p_n3)/3);

getch();

return(0);
}
