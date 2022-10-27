#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//funcao para soma dos numeros
void soma(char *num1, char *num2, char *result);

//controla a alocacao de memoria 
void manage_mem();

//aloca memoria
void get_mem(char *p);

//libera memoria 
void free_mem(char *p);

//recebe os numeros
int get_numbers(char *numVect);




int main()
{
    char num1[40], num2[40], res[100];
    int tam1, tam2; // numero de casas decimais de cada numero
    int casos;
    int i, j; // contadores
    int temp1, temp2; // numeros temporarios
    scanf("%d%*c", &casos);
    while(casos--) {
        tam1=get_numbers(num1);
        tam2=get_numbers(num2);
    }

    return 0;
}

void soma(char *num1, char *num2, char *result);

void manage_mem();

void get_mem(char *p);

void free_mem(char *p);

int get_numbers(char *numVect)
{ 
    scanf("%s", numVect);
    return strlen(numVect);
}