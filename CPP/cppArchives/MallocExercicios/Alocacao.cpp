#include <stdio.h>

#include <conio.h>

#include <windows.h>

#include <locale.h>



struct END

{

char rua[20];

int num;

};

int main()

{

setlocale(LC_ALL, "Portuguese");

struct END estatico; // est�tica

struct END *dinamico; // aloca��o din�mica



estatico.num=23;

strcpy(estatico.rua,"Rua A");

printf("End. Est�tico: %s, %d\n", estatico.rua, estatico.num);



dinamico= (struct END*) malloc(sizeof(struct END));

dinamico->num=22;

strcpy(dinamico->rua,"Rua B");

printf("End. Din�mico : %s, %d\n", dinamico->rua, dinamico->num);



free(dinamico);



getch();

return 0;

}
