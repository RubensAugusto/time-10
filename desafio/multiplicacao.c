#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//recebe dois numeros em forma de string e os multiplica
//@param *num1 numero 1
//@param *num2 numero 2
//@param *resultado resultado
void multiplicacao(char *num1, char *num2, char *res);

//recebe os numeros do terminal e retorna o numero de algarismos do numero
//@param *numVect vetor de um numero
//@return tamanho do algarismo
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
        multiplicacao(num1, num2, res);
    }

    return 0;
}

void multiplicacao(char *num1, char *num2, char *resultado)
{
        int tam1, tam2;

        tam1 = get_numbers(num1);
        tam2 = get_numbers(num2);



}
int get_numbers(char *numVect)
{ 
    scanf("%s", numVect);
    return strlen(numVect);
}