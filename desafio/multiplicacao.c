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
    char num1[40], num2[40], res[100] = {0};
    int casos;

    scanf("%d%*c", &casos);

    while(casos--) {
        multiplicacao(num1, num2, res);
    }

    return 0;
}

void multiplicacao(char *num1, char *num2, char *resultado)
{
    //@RubensAugusto
    //por favor usem nomes que expliquem as variaveis ao inves de "ia", "b", "a" ,"ts"
    int tam1, tam2; // num de algarismos
    int i, j; //contadores
    int tempNum1, tempNum2, tempNum3; //numeros temporarios
    int numExcedente = 0, numDigito = 0; // respectivamente o numero que ira para proxima casa decimal e o numero que ficara

    tam1 = get_numbers(num1);
    tam2 = get_numbers(num2);
    for(i = tam1-1;i >= 0;i--)
    {
        tempNum1 = num1[i] - '0';
        for(j = tam2-1;j >= -1;j--)
        {
            tempNum2 = j >= 0 ?num2[j] - '0' : 0;
            tempNum3 = tempNum1*tempNum2 + numExcedente;
            numDigito = tempNum3%10;
            numExcedente = tempNum3/10;
            resultado[i+j+1] = numDigito + '0';
        }
    }
    printf("%s", resultado); // printf de teste



}
int get_numbers(char *numVect)
{ 
    scanf("%s", numVect);
    return strlen(numVect);
}