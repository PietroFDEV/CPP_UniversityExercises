#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct NO
{
char nome[50];
int idade;
};


int main(void){

struct NO *pessoa1 = NULL; // obs. Struct NO topo;
struct NO *pessoa2 = NULL;

pessoa1 = (struct NO*) malloc(sizeof(struct NO));
strcpy(pessoa1 -> nome, "Pie");
pessoa1 -> idade = 12;

pessoa2 = (struct NO*) malloc(sizeof(struct NO));
strcpy(pessoa2 -> nome, "Ma");
pessoa2 -> idade = 22;

printf("%s %d\n%s %d\n",pessoa1->nome, pessoa1->idade, pessoa2->nome, pessoa2->idade);
printf("%x %x\n",*pessoa1, *pessoa2);
printf("%x %x\n",*pessoa1->nome, *pessoa2->nome);
printf("%x %x",&pessoa1->idade,&pessoa2->idade);

}
