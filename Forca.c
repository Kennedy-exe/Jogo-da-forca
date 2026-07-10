#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  // srand

#include "palavras.h"
#include "Boneco.h"

void o_game()
{
	char vet[20],caracter;
	palavra(vet);
	
	int chances = 0,i,achou;
	int len = strlen(vet);

    	char linha[len + 1];
	for (int i = 0; i < len; i++) 
	{
		linha[i] = '-';
    	}
    	linha[len] = '\0';
	do
	{
		achou = 0;
		printf("\nLetra: ");
		scanf(" %c",&caracter);
		for(i=0;i<strlen(vet);i++)
		{
			
			if(vet[i] == caracter) // compara caracter
			{
				achou = 1;
				linha[i] = caracter;
			}
		}
		if(achou == 0)
		{
			chances++;
		}	
		system("cls");
		boneco(chances);
		printf("%s",linha);
		if(strcmp(linha,vet) == 0)
		{
			system("cls");
			printf("Parabens, voce venceu!!!!!\n");
			break;
			
		}

	}while(chances != 7);
	printf("\n");
	system("pause");
}

int main()
{
	srand(time(NULL)); // sempre na main
	o_game();
	
}
